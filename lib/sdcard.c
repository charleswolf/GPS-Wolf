#include "sdcard.h"


//SD card functions
int init_sdcard(void)
{
	DSTATUS driveStatus = disk_initialize(0);
	if ((driveStatus & STA_NODISK) || (driveStatus & STA_NOINIT)) //check for initialization errors
	{
		return 1; //error 1 initialization failed
	}
	else{ //dont try mounting if initialization failed
		if(f_mount(0, &FileSystemObject)!= FR_OK) 
		{
			//flag error
			return 2; //error 2 mounting failed
		}
	}
return 0; //no errors
}

int sdcard_open( void )
{
	//if(f_open(&logFile, "/GPS_PATH.kml", FA_READ | FA_WRITE | FA_OPEN_ALWAYS)!= FR_OK) {
	if(f_open(&logFile, "/GPS_PATH.kml", FA_WRITE | FA_OPEN_ALWAYS)!= FR_OK) {
		//flag error
		return 1;
	}
	return 0;
}

void sdcard_close()
{
	f_close(&logFile);
}

