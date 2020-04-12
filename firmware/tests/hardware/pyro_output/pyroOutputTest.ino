/*
 Name:		pyroContinuityTest.ino
 Created:	8/27/2019 11:43:06 AM
 Author:	Jim
*/

#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
// Required for Serial on Zero based boards
#define Serial SERIAL_PORT_USBVIRTUAL
#endif

#define TEST_SWITCH 1

#include "Arduino.h"
#include "pins.h"
#include "pyro.h"

//Pyro control and output
pyro pyroApo(true, pyro::apogee, 800);
pyro pyroMain(true, pyro::main, 800);
pyro pyroThird(true, pyro::third, 800);

// the setup function runs once when you press reset or power the board
void setup() {

	//Set pyro pins low
	pinMode(pyroApo.pinOutput, OUTPUT);
	pinMode(pyroMain.pinOutput, OUTPUT);
	pinMode(pyroThird.pinOutput, OUTPUT);
	digitalWrite(pyroApo.pinOutput, LOW);
	digitalWrite(pyroMain.pinOutput, LOW);
	digitalWrite(pyroThird.pinOutput, LOW);

	Serial.begin(38400);

	//Initialize pyro pins
	pyroApo.initialize(3, 10000);
	pyroMain.initialize(4, 17000);
	pyroThird.initialize(3, 180000);
	delay(100);
}

// the loop function runs over and over again until power down or reset
void loop() {

	uint32_t time = millis();

	//Update pyro pins
	pyroApo.update(time, 3);
	pyroMain.update(time, 4);
	pyroThird.update(time, 3);

	Serial.print("output: ");
	Serial.print(time); Serial.print(" ");
	Serial.print(pyroApo.firedStatus); Serial.print(" ");
	Serial.print(pyroMain.firedStatus); Serial.print(" ");
	Serial.println(pyroThird.firedStatus);

	delay(100);
}

