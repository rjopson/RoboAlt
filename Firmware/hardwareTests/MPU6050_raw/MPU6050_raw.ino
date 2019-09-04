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
#include "MPU6050.h"
#include "dataStructures.h"

MPU6050 accelGyroHighSensitivity;
int16_t accelX, accelY, accelZ;
int16_t gyroX, gyroY, gyroZ;

// the setup function runs once when you press reset or power the board
void setup() {

	Serial.begin(38400);
	Wire.begin();
	delay(500);
	accelGyroHighSensitivity.initialize();
	delay(500);
}

// the loop function runs over and over again until power down or reset
void loop() {
	
	//Get data
	accelGyroHighSensitivity.getAcceleration(&accelX, &accelY, &accelZ);
	accelGyroHighSensitivity.getRotation(&gyroX, &gyroY, &gyroZ);

	//Print
	Serial.print(accelX); Serial.print(" ");
	Serial.print(accelY); Serial.print(" ");
	Serial.print(accelZ); Serial.print(" ");
	Serial.print("   ");
	Serial.print(gyroX); Serial.print(" ");
	Serial.print(gyroY); Serial.print(" ");
	Serial.print(gyroZ); Serial.print(" ");
	Serial.println();

	delay(100);
}


