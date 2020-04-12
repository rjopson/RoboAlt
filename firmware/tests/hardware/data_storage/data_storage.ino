/*
 Name:		dataStorageTest.ino
 Created:	8/27/2019 7:37:59 AM
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

dataStorage* data_storage = new dataStorage;

// the setup function runs once when you press reset or power the board
void setup() {

	Serial.begin(38400);
	data_storage->initialize();
	delay(500);
}

// the loop function runs over and over again until power down or reset
void loop() {
  
	int lines = 1000;

	data_storage->startWrite(5);
	for (int i = 0; i != lines; i++) {
		data_storage->writeByte(55);
		data_storage->writeInt16(-30000);
		data_storage->writeInt32(-600000);
	}
	data_storage->endWrite();

	delay(500);

	data_storage->startRead(5);
	for (int i = 0; i != lines; i++) {
		Serial.print("test: ");
		Serial.print(i);
		Serial.print(" ");
		Serial.print(data_storage->readByte());
		Serial.print(" ");
		Serial.print(data_storage->readInt16());
		Serial.print(" ");
		Serial.println(data_storage->readInt32());
	}	
}
