/*
 * userSettings.cpp
 */

#include "userSettings.h"

 /* Default constructor
  */
userSettings::userSettings(dataStorage* dataFlashIn) {
	dataFlash = dataFlashIn;
	settingsInFlash = false;
}

void userSettings::readCurrentSettings() {
	
	dataFlash->startRead(DATAFLASH_SETTINGS_PAGE);

	if (dataFlash->readByte() == 1) {
		settingsInFlash = true;

		altitudeMainDeploy = dataFlash->readInt32();
		apoFlightEvent = dataFlash->readByte();
		mainFlightEvent = dataFlash->readByte();
		thirdFlightEvent = dataFlash->readByte();
		apoTimeDelay = dataFlash->readInt32();
		mainTimeDelay = dataFlash->readInt32();
		thirdTimeDelay = dataFlash->readInt32();
		buzzerSwitch = dataFlash->readByte();
	}
	else {

		altitudeMainDeploy = 500000;
		apoFlightEvent = 3;
		mainFlightEvent = 4;
		thirdFlightEvent = 3;
		apoTimeDelay = 0;
		mainTimeDelay = 0;
		thirdTimeDelay = 500;
		buzzerSwitch = 0;
	}
}

void userSettings::writeNewSettings() {

	dataFlash->startWrite(DATAFLASH_SETTINGS_PAGE);
	dataFlash->writeByte(1); //settings exist on flash switch
	dataFlash->writeInt32(altitudeMainDeploy);
	dataFlash->writeByte(apoFlightEvent);
	dataFlash->writeByte(mainFlightEvent);
	dataFlash->writeByte(thirdFlightEvent);
	dataFlash->writeInt32(apoTimeDelay);
	dataFlash->writeInt32(mainTimeDelay);
	dataFlash->writeInt32(thirdTimeDelay);
	dataFlash->writeByte(buzzerSwitch);
	dataFlash->endWrite();
}