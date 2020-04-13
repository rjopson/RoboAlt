/*
 Name:		userSettings_test.ino
 Created:	8/28/2019 12:57:31 PM
 Author:	Jim
*/

#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
// Required for Serial on Zero based boards
#define Serial SERIAL_PORT_USBVIRTUAL
#endif

#define TEST_SWITCH 1

#include "Arduino.h"
#include "pins.h"
#include "AT45DB641.h"
#include "dataStorage.h"
#include "userSettings.h"

dataStorage* data_storage = new dataStorage;
userSettings user_settings(data_storage);

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(38400);
	data_storage->initialize();
	delay(500);
}

// the loop function runs over and over again until power down or reset
void loop() {


	bool settingsInFlash;
	user_settings.altitudeMainDeploy = 100000;
	user_settings.apoFlightEvent = 2;
	user_settings.mainFlightEvent = 3;
	user_settings.thirdFlightEvent = 4;
	user_settings.apoTimeDelay = 111;
	user_settings.mainTimeDelay = 222;
	user_settings.thirdTimeDelay = 333;

	user_settings.writeNewSettings();
	user_settings.readCurrentSettings();

	Serial.print(user_settings.altitudeMainDeploy); Serial.print(F(",")); //main detect altitude
	Serial.print(user_settings.apoFlightEvent); Serial.print(F(","));//apogee output
	Serial.print(user_settings.mainFlightEvent); Serial.print(F(","));//main output
	Serial.print(user_settings.thirdFlightEvent); Serial.print(F(","));//third output
	Serial.print(user_settings.apoTimeDelay); Serial.print(F(","));//apogee output delay
	Serial.print(user_settings.mainTimeDelay); Serial.print(F(","));//main output delay
	Serial.println(user_settings.thirdTimeDelay); //third output delay
	Serial.flush();

	Serial.println("heartbeat");
	delay(1000);
}
