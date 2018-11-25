/*
 * userSettings.cpp
 */

#include "userSettings.h"

 /* Default constructor
  */
userSettings::userSettings(dataStorage* dataFlashIn) {
	dataFlash = dataFlashIn;
}

void userSettings::readCurrentSettings() {
	
	dataFlash->startRead(DATAFLASH_SETTINGS_PAGE);
	altitudeMainDeploy = dataFlash->readInt32();
	apoFlightEvent = dataFlash->readByte();
	mainFlightEvent = dataFlash->readByte();
	thirdFlightEvent = dataFlash->readByte();
	apoTimeDelay = dataFlash->readInt32();
	mainTimeDelay = dataFlash->readInt32();
	thirdTimeDelay = dataFlash->readInt32();

}

void userSettings::writeNewSettings() {

	dataFlash->startWrite(DATAFLASH_SETTINGS_PAGE);
	dataFlash->writeInt32(altitudeMainDeploy);
	dataFlash->writeByte(apoFlightEvent);
	dataFlash->writeByte(mainFlightEvent);
	dataFlash->writeByte(thirdFlightEvent);
	dataFlash->writeInt32(apoTimeDelay);
	dataFlash->writeInt32(mainTimeDelay);
	dataFlash->writeInt32(thirdTimeDelay);
	dataFlash->endWrite();
}