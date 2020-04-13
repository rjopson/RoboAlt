/*
 Name:		MS5607_raw.ino
 Created:	8/26/2019 6:36:20 PM
 Author:	Jim
*/

#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
// Required for Serial on Zero based boards
#define Serial SERIAL_PORT_USBVIRTUAL
#endif

#include "Arduino.h"
#include <SPI.h>
#include <Wire.h>
#include "I2C.h"
#include "H3LIS331Dl.h"

H3LIS331DL accelLowSensitivity;

// the setup function runs once when you press reset or power the board
void setup() {

	Serial.begin(38400);
	Wire.begin();
	delay(500);
	accelLowSensitivity.initialize();
	delay(500);

}

// the loop function runs over and over again until power down or reset
void loop() {

	//Get data
	int16_t acceleration = accelLowSensitivity.getAccelerationY();
	
	//Print
	Serial.print("raw acceleration: ");
	Serial.println(acceleration);

	delay(100);

}

