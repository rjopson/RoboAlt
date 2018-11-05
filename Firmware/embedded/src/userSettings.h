/*
 * userSettings.h
 *
 * This class abstracts data read/write to AT45DB641 chip as read/write byte, int16, int32

*/

#ifndef _USERSETTINGS_H
#define _USERSETTINGS_H

#include "dataStorage.h"

#define DATAFLASH_SETTINGS_PAGE		0

class userSettings {
public:
	userSettings();

	void readCurrentSettings();
	void writeNewSettings();

	dataStorage dataFlash;
	int32_t altitudeMainDeploy;
	uint8_t apoFlightEvent;
	uint8_t mainFlightEvent;
	uint8_t thirdFlightEvent;
	uint32_t apoTimeDelay;
	uint32_t mainTimeDelay;
	uint32_t thirdTimeDelay;

};
#endif