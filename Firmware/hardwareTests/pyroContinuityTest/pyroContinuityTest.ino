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
pyro pyroApo(false, pyro::apogee, 800);
pyro pyroMain(false, pyro::main, 800);
pyro pyroThird(false, pyro::third, 800);

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
	pyroApo.initialize(3, 0);
	pyroMain.initialize(4, 0);
	pyroThird.initialize(4, 500);
	delay(100);
}

// the loop function runs over and over again until power down or reset
void loop() {

	//Update pyro pins
	pyroApo.update(1000, 1);
	pyroMain.update(1000, 1);
	pyroThird.update(1000, 1);

	Serial.print("continuity: ");

	Serial.print(pyroApo.continuityAnalog); Serial.print(" ");
	Serial.print(pyroMain.continuityAnalog); Serial.print(" ");
	Serial.println(pyroThird.continuityAnalog);

	delay(100);
}
