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

#include "lib/sdcard.c"
#include "lib/uart.c"


//Main
int main(void)
{ 
	_delay_ms(1000);
	//used for writing data
	
	char data_string[150];
	char *msgs[20];
	char tmp[15];
	char *p;
	char *l;
	uint32_t longitude_minutes = 0;
	uint32_t latitude_minutes = 0;
	unsigned int bytesWritten;
	uint8_t header_written = 0;
	
	char header[] = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><kml xmlns=\"http://www.opengis.net/kml/2.2\"><Document><Placemark><LineString><coordinates>";
	char footer[] = "</coordinates></LineString></Placemark></Document></kml>";
	int i = 0;
				
	init_sdcard();
	if( sdcard_open() > 0 )
	{
		f_write(&logFile, &header[0], strlen(header), &bytesWritten);
		f_write(&logFile, "\n", 1, &bytesWritten);
		f_write(&logFile, &footer[0], strlen(footer), &bytesWritten);
		sdcard_close();
		header_written = 1;	
	}
	
	USARTInit(MYUBRR);
	
	while(1)
	{
		i = 0;
		data_string[0] = '$';
		//wait for a message (starts with $)
		while (USARTReadChar() != '$');
		
		//retrieve message
		while ((data_string[i] != 0x0A ) && (i < 100 ))
		{
			i++;
			data_string[i] = USARTReadChar();
		}
		
		//filter for GPGGA message
		if(strstr(data_string, "GPGGA") !=NULL)
		{
			//check for gps fix
			if ((data_string[43] != 0x30) && (i>60))
			{
				//check disk status
				if ( disk_status == STA_NOINIT )
				{
					//Create a new file on the SD card
					if (sdcard_open() > 0) 
					{
						//if file open failed try initializing again
						init_sdcard();
						if( sdcard_open() )
						{	//check to see if the header has been written
							if( header_written == 0 )
							{
								f_write(&logFile, &header[0], strlen(header), &bytesWritten);
								f_write(&logFile, "\n", 1, &bytesWritten);
								f_write(&logFile, &footer[0], strlen(footer), &bytesWritten);
								header_written = 1;	
								sdcard_close();
								sdcard_open();
							}
						}
					}
				}
				else
				{
					sdcard_open();
					f_write(&logFile, &header[0], strlen(header), &bytesWritten);
					f_write(&logFile, "\n", 1, &bytesWritten);
					f_write(&logFile, &footer[0], strlen(footer), &bytesWritten);
					header_written = 1;	
					f_lseek(&logFile, 0); //back to the begining
					f_lseek(&logFile, (f_size(&logFile)));	//to the end

					 
					//break up the message by each comma
					i = 0; 
					for(p=strtok_r(data_string, ",",&l); p != NULL; p=strtok_r(NULL, ",",&l))
					{
						msgs[i] = p;
						i++;
					}   
					
					//copy string to temporary variable
					strcpy( &tmp[0], msgs[4]);
					
					//convert string to integer
					longitude_minutes =  ( tmp[3] - 48 ) * 100000UL;
					longitude_minutes += ( tmp[4] - 48 ) * 10000UL;
					longitude_minutes += ( tmp[6] - 48 ) * 1000UL;
					longitude_minutes += ( tmp[7] - 48 ) * 100UL;
					longitude_minutes += ( tmp[8] - 48 ) * 10UL;
					longitude_minutes += ( tmp[9] - 48 );
					
					longitude_minutes /= 6UL;
					
					//convert back to string
					ultoa(longitude_minutes, &tmp[0], 10);
					
					if (*msgs[3] != 'E') f_write(&logFile, "-", 1, &bytesWritten);
					f_write(&logFile, msgs[4], 3, &bytesWritten);
					f_write(&logFile, ".", 1, &bytesWritten);
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
					
					strcpy( &tmp[0], msgs[2]);
				
					latitude_minutes =  ( tmp[2] - 0x30 ) * 100000UL;
					latitude_minutes += ( tmp[3] - 0x30 ) * 10000UL;
					latitude_minutes += ( tmp[5] - 0x30 ) * 1000UL;
					latitude_minutes += ( tmp[6] - 0x30 ) * 100UL;
					latitude_minutes += ( tmp[7] - 0x30 ) * 10UL;
					latitude_minutes += ( tmp[8] - 0x30 );

					latitude_minutes /= 6UL;
					
					ultoa(latitude_minutes, &tmp[0], 10);
					
					if (*msgs[5] != 'S') f_write(&logFile, "-", 1, &bytesWritten);
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
					
					//f_write(&logFile, &footer[0], strlen(footer), &bytesWritten);
					
					//close the file
					sdcard_close();
					_delay_ms(5000);
				}
			}
		}
	}
}


