/*
    GPS-Wolf
    Copyright (C) 2011  Charles Wolf

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#define F_CPU 8000000UL //8 MHz Internal Oscillator 
#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/power.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib/ff.c"
#include "lib/diskio.c"

//Global variables
FATFS FileSystemObject;
FIL logFile;
unsigned int bytesWritten;

#include "lib/sdcard.c"
#include "lib/uart.c"


//Main
int main(void)
{ 
	//allow time to stabilize
	_delay_ms(1000);

	//define variables
	char path_file[30];
	char data_string[150];	//contains the gps module messages
	char *msgs[20];			//contains pointers parts of the gpgga message
	char tmp[15];			//temporary string buffer
	char *p , *l;
	char footer[] = "</coordinates></LineString></Placemark></Document></kml>";
	int footer_len = 56;
	uint32_t longitude_minutes = 0;
	uint32_t longitude_minutes_past = 0;
	uint32_t latitude_minutes = 0;
	uint32_t latitude_minutes_past = 0;
	uint8_t path_index = 0;	//number appended to path filename
	unsigned int i = 0;
	
	//initialize hardware
	init_sdcard(0);
	USARTInit(MYUBRR);
	
	path_index = sd_new_pathfile( &path_file[0] );
	
	//Make sure a SD card was inserted
	while ( sd_check_file( &path_file[0] ) != FR_OK )
	{
		path_index = sd_new_pathfile( &path_file[0] );
		_delay_ms(1000);
	}
	
	//forever loop
	while(1)
	{
		i = 0;
		//wait for a message (starts with $)
		data_string[0] = '$';
		while (USARTReadChar() != '$');
		
		//retrieve message
		while ((data_string[i] != 0x0A ) && (i < 100 ))
		{
			i++;
			data_string[i] = USARTReadChar();
		}
		data_string[i+1] = 0;
		
		//filter for GPGGA message
		if ( strstr( data_string, "GPGGA" ) != NULL )
		{
			/*
			sdcard_open ( "GPGGA.txt" );
			f_lseek ( &logFile, f_size(&logFile));
			f_write(&logFile, &data_string[0], strlen(data_string), & bytesWritten);
			f_write(&logFile, "\n", 1, &bytesWritten);
			f_close(&logFile);
			*/
			
			
			//check for gps lock
			if ( ( data_string[43] != 0x30 ) && ( i > 60 ) )
			{
				//check status of SD card
				if ( sd_check_file( &path_file[0] ) == FR_OK )
				{					
					//break up the message by each comma
					i = 0; 
					for(p=strtok_r(data_string, ",",&l); p != NULL; p=strtok_r(NULL, ",",&l))
					{
						msgs[i] = p;
						i++;
					}   
					
					//copy string containing longitued to temporary var
					strcpy( &tmp[0], msgs[4]);
					
					//convert string to integer
					longitude_minutes =  ( tmp[3] - 48 ) * 100000UL;
					longitude_minutes += ( tmp[4] - 48 ) * 10000UL;
					longitude_minutes += ( tmp[6] - 48 ) * 1000UL;
					longitude_minutes += ( tmp[7] - 48 ) * 100UL;
					longitude_minutes += ( tmp[8] - 48 ) * 10UL;
					longitude_minutes += ( tmp[9] - 48 );
					longitude_minutes /= 6UL;
					
					//copy string containing latitued to a temporary var
					strcpy( &tmp[0], msgs[2]);
			
					//convert string to integer
					latitude_minutes =  ( tmp[2] - 0x30 ) * 100000UL;
					latitude_minutes += ( tmp[3] - 0x30 ) * 10000UL;
					latitude_minutes += ( tmp[5] - 0x30 ) * 1000UL;
					latitude_minutes += ( tmp[6] - 0x30 ) * 100UL;
					latitude_minutes += ( tmp[7] - 0x30 ) * 10UL;
					latitude_minutes += ( tmp[8] - 0x30 );
					latitude_minutes /= 6UL;
					
					//check if in the same position
					if (!
						(
						(latitude_minutes == latitude_minutes_past ) ||
						(longitude_minutes == longitude_minutes_past) 
						)
						)
					{
						latitude_minutes_past = latitude_minutes;
						longitude_minutes_past = longitude_minutes;
						
						//convert back to string
						ultoa(longitude_minutes, &tmp[0], 10);
						
						//open file
						sdcard_open( &path_file[0] );
						
						//move to the end of the file
						f_lseek(&logFile, (f_size(&logFile)-footer_len));	
						
						if (*msgs[3] != 'E') f_write(&logFile, "-", 1, &bytesWritten);
						f_write(&logFile, msgs[4], 3, &bytesWritten);
						f_write(&logFile, ".", 1, &bytesWritten);
						
						//leading zeros lost in conversion, check if they are needed
						if(longitude_minutes < 10000)
						{
							f_write(&logFile, "0", 1, &bytesWritten);
							if(longitude_minutes < 1000)
							{
								f_write(&logFile, "0", 1, &bytesWritten);
								if (longitude_minutes < 100)
								{
									f_write(&logFile, "0", 1, &bytesWritten);
									if (longitude_minutes < 10)
									{
										f_write(&logFile, "0", 1, &bytesWritten);
									}
								}
							}
						}
						f_write(&logFile, &tmp[0], strlen(tmp), &bytesWritten);
						f_write(&logFile, ", ", 2, &bytesWritten);
						
						
						ultoa(latitude_minutes, &tmp[0], 10);
						
						//if (*msgs[5] != 'N') f_write(&logFile, "-", 1, &bytesWritten);
						f_write(&logFile, msgs[2], 2, &bytesWritten);
						f_write(&logFile, ".", 1, &bytesWritten);
						if(latitude_minutes < 10000)
						{
							f_write(&logFile, "0", 1, &bytesWritten);
							if(latitude_minutes < 1000)
							{
								f_write(&logFile, "0", 1, &bytesWritten);
								if (latitude_minutes < 100)
								{
									f_write(&logFile, "0", 1, &bytesWritten);
									if (latitude_minutes < 10)
									{
										f_write(&logFile, "0", 1, &bytesWritten);
									}
								}
							}
						}
						f_write(&logFile, &tmp[0], strlen(tmp), &bytesWritten);
						f_write(&logFile, "\n", 1, &bytesWritten);
						
						f_write(&logFile, &footer[0], strlen(footer), &bytesWritten);
						
						//close the file
						sdcard_close();
						
						//delay between recorded points 
						_delay_ms(5000);
					}
				}
				else
				{
					init_sdcard(0);  //try initializing again
					//check for the existing pathfile
					if (sd_check_file( &path_file[0] ) != FR_OK )
					{
						//pathfile wasn't found, create a new one
						path_index = sd_new_pathfile( &path_file[0] );
					}
				}
			}
		}
	}
}


