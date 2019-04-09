/*
 * userSettings.h
 *
 * This class handles storage of user programmed settings

*/

#ifndef _USERSETTINGS_H
#define _USERSETTINGS_H

#include "dataStorage.h"

#define DATAFLASH_SETTINGS_PAGE		0

class userSettings {
public:
	userSettings(dataStorage* dataFlashIn);

	void readCurrentSettings();
	void writeNewSettings();

	dataStorage* dataFlash;
	int32_t altitudeMainDeploy;
	uint8_t apoFlightEvent;
	uint8_t mainFlightEvent;
	uint8_t thirdFlightEvent;
	uint32_t apoTimeDelay;
	uint32_t mainTimeDelay;
	uint32_t thirdTimeDelay;
};
#endif