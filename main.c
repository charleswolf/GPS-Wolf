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


//Modes of operation
#define NORMAL_MODE 0	//standard operating mode
#define DEBUG_MODE	1	//write debug modes 
#define GPGGA_MODE	2	//write each GPGGA message to a file
#define TIME_MODE	4	//add the time to every 10th point


#define RUN_MODE ( NORMAL_MODE | TIME_MODE )


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
	//define variables
	char path_file[30];
	char data_string[150];	//contains the gps module messages
	char *msgs[20];			//contains pointers to parts of the gpgga message
	char tmp[15];			//temporary string buffer
	char *p , *l;
	char footer[] = "</coordinates></LineString></Placemark></Document></kml>";
	int footer_len = 56;
	uint32_t longitude_minutes = 0;
	uint32_t longitude_minutes_past = 0;
	uint32_t latitude_minutes = 0;
	uint32_t latitude_minutes_past = 0;
	uint8_t path_index = 0;	//number appended to path filename
	uint8_t time_count = 100;
	unsigned int i = 0;
	int no_lock_error= 1;	//dont flag startup errors
	int duplicate_error = 0;
	
	
	//reference un-used pins 
	DDRB 	|= (1<<PB0) | (1<<PB1) | (1<<PB6) | (1<<PB7);
	PORTB 	&= !((1<<PB0) | (1<<PB1) | (1<<PB6) | (1<<PB7));
	DDRC 	|= 0xFF;	//all output
	PORTC 	&= 0x00;	//all low
	DDRD	|= (1<<PD2) | (1<<PD3) | (1<<PD4) | (1<<PD5) | (1<<PD6) | (1<<PD7);
	PORTD	&= !((1<<PD2) | (1<<PD3) | (1<<PD4) | (1<<PD5) | (1<<PD6) | (1<<PD7));
	
	//allow time for power to stabilize
	_delay_ms(1000);
	
	//initialize hardware
	init_sdcard(0);
	USARTInit(MYUBRR);
	
	//turn off unnessisary messages from gps module
	//Disable GLL message
	uart_puts("$PSRF103,01,00,00,01*25\r\n");
	_delay_ms(100);
	//Disable GSA message
	uart_puts("$PSRF103,02,00,00,01*26\r\n");
	_delay_ms(100);
	//Disable GSV message
	uart_puts("$PSRF103,03,00,00,01*27\r\n");
	_delay_ms(100);
	//Disable RMC message
	uart_puts("$PSRF103,04,00,00,01*20\r\n");
	_delay_ms(100);
	//Disable VTG message
	uart_puts("$PSRF103,05,00,00,01*21\r\n");

	
	path_index = sd_new_pathfile( &path_file[0] );
	
	//Make sure a SD card was inserted before moving on
	while ( sd_check_file( &path_file[0] ) != FR_OK )
	{
		//try to create a pathfile 
		init_sdcard(0);
		path_index = sd_new_pathfile( &path_file[0] );
		_delay_ms(1000);
	}
	
	
	#if (RUN_MODE & DEBUG_MODE) == DEBUG_MODE
		sdcard_open ( "debug.txt" ); // open error file
		f_lseek ( &logFile, f_size(&logFile));//move to last line
		f_write(&logFile, "new path", 8, & bytesWritten);
		f_write(&logFile, "\n", 1, &bytesWritten);//next line
		f_close(&logFile);//close file
	#endif
	
	
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
			#if (RUN_MODE & GPGGA_MODE ) == GPGGA_MODE
				sdcard_open ( "GPGGA.txt" );
				f_lseek ( &logFile, f_size(&logFile));
				f_write(&logFile, &data_string[0], strlen(data_string), & bytesWritten);
				f_write(&logFile, "\n", 1, &bytesWritten);
				f_close(&logFile);
			#endif
			
			
			//check for gps fix 
			if ( ( data_string[43] != 0x30 ) && ( i > 60 ) )
			{
				//check status of SD card
				if ( sd_check_file( &path_file[0] ) == FR_OK )
				{	
					//open file
					sdcard_open( &path_file[0] );
					
					//move to the end of the file
					f_lseek(&logFile, (f_size(&logFile)-footer_len));	
						
					//break up the message by each comma
					i = 0; 
					for(p=strtok_r(data_string, ",",&l); p != NULL; p=strtok_r(NULL, ",",&l))
					{
						msgs[i] = p;
						i++;
					}   
					
					/* GPGGA message breakdown
					 *  0 - message id
					 *  1 - UTC Time
					 *  2 - Latitude ddmm.mmmm
					 *  3 - N/S indicator
					 *  4 - Longitude dddmm.mmmm
					 *  5 - E/W indicator
					 *  6 - Position fix indicator
					 *  7 - satelites used
					 *  8 - HDOP Horizontal Dillution of Precision
					 *  9 - MLS Altitude 
					 *  10- MLS Altitude units
					 *  11- Geoid Spearation 
					 *  12- Geoid Separation units
					 *  13- Age of Diff. Corr (seconds)
					 *  14- Diff. Ref. Station
					 *  15- Checksum
					 *  16- <CR><LF> 
					 */
					 
					
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
						duplicate_error = 0;
						latitude_minutes_past = latitude_minutes;
						longitude_minutes_past = longitude_minutes;
						
						//convert back to string
						ultoa(longitude_minutes, &tmp[0], 10);
						
						if (*msgs[5] != 'E') f_write(&logFile, "-", 1, &bytesWritten);
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
						
						if (*msgs[3] != 'N') f_write(&logFile, "-", 1, &bytesWritten);
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
						
						//write altitude to KML flie
						f_write(&logFile, ", ", 2, &bytesWritten);
						f_write(&logFile, msgs[9], strlen(msgs[9]), &bytesWritten);
						
						
						#if (RUN_MODE & TIME_MODE) == TIME_MODE
							if (time_count >= 9 )
							{
								//write time in a commment every 10th entry
								strcpy( &tmp[0], msgs[1]); //transfer time to a temp string
								f_write(&logFile, " <!-- ", 6, &bytesWritten);
								f_write(&logFile, &tmp[0], 2, &bytesWritten);
								f_write(&logFile, ":", 1, &bytesWritten);
								f_write(&logFile, &tmp[2], 2, &bytesWritten);
								f_write(&logFile, ":", 1, &bytesWritten);
								f_write(&logFile, &tmp[4], 2, &bytesWritten);
								f_write(&logFile, " -->", 4, &bytesWritten);
								time_count = 0;
							}
							else
							{
								time_count ++;
							}
						#endif
						
						//create new line
						f_write(&logFile, "\n", 1, &bytesWritten);
						//write KML fotter
						f_write(&logFile, &footer[0], strlen(footer), &bytesWritten);
						
						//close the file
						sdcard_close();
						
						no_lock_error = 0;
						
						//delay between recorded points 
						_delay_ms(4300); 
						//the GPS modue outputs messages at 1Hz, start listening for the message before 5 seconds passes
						//This should be modified in the future for power savings.  
						
					}
					#if (RUN_MODE & DEBUG_MODE) == DEBUG_MODE
					else
					{
						//flag same point
						if ( duplicate_error == 0)
						{
							duplicate_error = 1; //set flag so error is not duplicated
							sdcard_open ( "debug.txt" );
							f_lseek ( &logFile, f_size(&logFile));
							f_write(&logFile, "duplicate", 9, & bytesWritten);
							f_write(&logFile, "\n", 1, &bytesWritten);
							f_close(&logFile);
						}
					}
					#endif
				}
				else
				{
					init_sdcard(0);  //try initializing again
					//check for the existing pathfile
					if (sd_check_file( &path_file[0] ) != FR_OK )
					{
						//pathfile wasn't found, create a new one
						path_index = sd_new_pathfile( &path_file[0] );
						
							#if (RUN_MODE & DEBUG_MODE) == DEBUG_MODE 
								sdcard_open ( "debug.txt" ); // open error file
								f_lseek ( &logFile, f_size(&logFile));//move to last line
								f_write(&logFile, "new path", 8, & bytesWritten);
								f_write(&logFile, "\n", 1, &bytesWritten);//next line
								f_close(&logFile);//close file
							#endif
						
					}
				}
			}
			#if (RUN_MODE & DEBUG_MODE) == DEBUG_MODE
			else
			{
				//flag no lock
				if ( no_lock_error == 0 )
				{
					no_lock_error = 1;
					sdcard_open ( "debug.txt" ); // open error file
					f_lseek ( &logFile, f_size(&logFile));//move to last line
					f_write(&logFile, "no fix", 6, & bytesWritten);
					f_write(&logFile, "\n", 1, &bytesWritten);//next line
					f_close(&logFile);//close file
				}
			}
			#endif
		}
	}
}


