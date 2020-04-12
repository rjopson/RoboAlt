/*
 Name:		voltageTest_raw.ino
 Created:	8/28/2019 9:21:04 AM
 Author:	Jim
*/

#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
// Required for Serial on Zero based boards
#define Serial SERIAL_PORT_USBVIRTUAL
#endif

#define TEST_SWITCH 1

#include "Arduino.h"
#include "pins.h"
#include "analogPinRead.h"

analogPinRead analogIn;

// the setup function runs once when you press reset or power the board
void setup() {

	Serial.begin(38400);

	delay(100);
}

// the loop function runs over and over again until power down or reset
void loop() {

	Serial.print("voltage: ");
	Serial.println(analogIn.getBatteryVoltage());

	delay(100);
}
