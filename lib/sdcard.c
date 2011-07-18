#include "sdcard.h"

/**CHANGE LOG
 * -----------------------
 * 7-17-2011 updated functions to accept filename
 * -----------------------  
 * INITIAL RELEASE
 * -----------------------
*/



/**
* Name : init_sdcard
*
* Description: initialize the SD card and mount the filesystem
*
* Author(s): Charles Wolf
*
* @param: uint8_t drive - which drive to initialize ( usually 0 )
*
* @return: int 
**/
int init_sdcard( uint8_t drive )
{
	DSTATUS driveStatus = disk_initialize(drive);
	if ((driveStatus & STA_NODISK) || (driveStatus & STA_NOINIT)) //check for initialization errors
	{
		return 0; //error initialization failed
	}
	else{ //only mount filesystem if initialization was sucessful
		if( f_mount(drive, &FileSystemObject) != FR_OK ) 
		{
			//flag error
			return 0; //error mounting failed
		}
	}
return 1; //no errors
}


/**
* Name : sdcard_open
*
* Description: open a file on the sd card
*
* Author(s): Charles Wolf
*
* @param: char * filename - name of file to open
*
* @return: int 
**/
int sdcard_open( char * filename )
{
	if(f_open(&logFile, "/GPS_PATH.kml", FA_READ | FA_WRITE | FA_OPEN_ALWAYS)!= FR_OK) {
		//flag error
		return 1;
	}
	return 0;
}

/**
* Name : sdcard_close
*
* Description: open a file on the sd card
*
* Author(s): Charles Wolf
*
* @param: none
*
* @return: none
**/
void sdcard_close()
{
	f_close(&logFile);
}


/**
* Name : sd_check_file
*
* Description: try opening a file to check if it exists.  function can 
* 	also be used to check if sd card is present
*
* Author(s): Charles Wolf
*
* @param: none
*
* @return:	function returns an int with the returned value from fopen()
**/
int sd_check_file( char * filename )
{
	int status = 0;
	status =  f_open(&logFile, "/GPS_PATH.kml", FA_OPEN_EXISTING | FA_READ );
	if ( status == FR_OK ) fclose( &logFile );
	return status;
}


/**
* Name : kml_write_header
*
* Description: write header portion of KML file
*
* Author(s): Charles Wolf
*
* @param: filename - name of file to write header to
*
* @return: none
**/

int kml_write_header( char * filename )
{
	if( sdcard_open(filename) )
	{
		char header[] = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><kml xmlns=\"http://www.opengis.net/kml/2.2\"><Document><Placemark><LineString><coordinates>";
		f_write(&logFile, &header[0], strlen(header), &bytesWritten);
		f_write(&logFile, "\n", 1, &bytesWritten);
		sdcard_close();	
		return 1;
	}
	else return 0;
}

/**
* Name : kml_write_footer
*
* Description: write header portion of KML file
*
* Author(s): Charles Wolf
*
* @param: filename - name of file to write footer to
*
* @return: none
**/

int kml_write_footer( char * filename )
{
	if( sdcard_open(filename) )
	{
		char footer[] = "</coordinates></LineString></Placemark></Document></kml>";
		f_write(&logFile, &footer[0], strlen(footer), &bytesWritten);
		f_write(&logFile, "\n", 1, &bytesWritten);
		sdcard_close();	
		return 1;
	}
	else return 0;
}

