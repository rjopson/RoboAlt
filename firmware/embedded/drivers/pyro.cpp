/*
 *pyro.cpp
 *
 * Manage pyro outputs and continuity readings
 */

#include "pyro.h"

 /* Constructor
  * -sets appropriate analog read and digital output pins
  * -sets constructor active, timeOn values. 
  */
pyro::pyro(const bool& activeIn, pyroSelections pyroSelectionIn, const int16_t& timeOnIn) {

	active = activeIn;
	pyroSelection = pyroSelectionIn;
	timeOn = timeOnIn;

	pinState = LOW;
	timeFlightEventActivate = 0;
	firedStatus = false;

	//Set digital and analog pins
	setPins();
}

/* Switch which controls the digital pin and analog pin used to control charge and measure continuity
 *
 */
void pyro::setPins() {

	switch (pyroSelection) {

	case apogee:
		pinOutput = APO_OUTPUT;
		pinContinuity = APO_CONTINUITY;
		break;

	case main:
		pinOutput = MAIN_OUTPUT;
		pinContinuity = MAIN_CONTINUITY;
		break;

	case third:
		pinOutput = THIRD_OUTPUT;
		pinContinuity = THIRD_CONTINUITY;
		break;
	}
}

/* Read user defined values for flightStatus selection and delay after flightStatus reached to fire pyro
 *
 */
void pyro::initialize(const uint8_t& flightEventIn, const int32_t& timeDelayIn) {

	flightEvent = flightEventIn;
	timeDelay = timeDelayIn;
	readContinuity();
}

/* Used to manage pyro channels from outer loop in code
 *
 */
void pyro::update(const int32_t& time, const uint8_t& flightStatusIn) {

	lookForFlightEvent(time, flightStatusIn); //check whether flightStatus to fire has been reached

	if (controlLogicPyroOn(time)) { //check whether to fire pyro
		pyroOutputOn();
	}
	else if (controlLogicPyroOff(time)) { //check whether to turn off pyro again
		pyroOutputOff();
	}

	readContinuity();
}

/* Check continuity of output
 * analog value read in test. Greater than value of 125 indicates good continuity
 */
void pyro::readContinuity() {
	continuityAnalog = analogRead(pinContinuity);

	if (continuityAnalog > ANALOG_CONTINUITY_TRUE) {
		continuityBool = true;
	}
	else {
		continuityBool = false;
	}
}

/* Fire pyro
 */
void pyro::pyroOutputOn() {

	if (active == true) { //test whether user has disabled pyro channel
		pinState = HIGH; //set pinState to high
		digitalWrite(pinOutput, pinState); //set output pin to pinState		
	}
}

/* Turn firing pyro off
 */

void pyro::pyroOutputOff() {
	pinState = LOW; //set pinState back to low
	digitalWrite(pinOutput, pinState); //turn off output
}

/* check whether flight event to fire charge is current/passed, start timer
 */
bool pyro::lookForFlightEvent(const int32_t& time, const uint8_t& flightStatusIn) {

	bool flightStatusTest = flightStatusIn >= flightEvent; //check whether flight status to fire in active or passed

	if (flightStatusTest && timeFlightEventActivate == 0) {
		timeFlightEventActivate = time;
		return true;
	}
	else
		return false;
}

/* Check whether to turn pyro channel on
 */
bool pyro::controlLogicPyroOn(const int32_t& time) {

	bool timeTest = (time - timeFlightEventActivate > timeDelay); //check whether time delay after flightEvent sensed has been passed. Usually this is 0 delay.

	if (!firedStatus && timeFlightEventActivate != 0 && timeTest) {
		firedStatus = true;
		timePyroBegin = time;
		return true;
	}
	else {
		return false;
	}
}

/* Check whether to turn off pyro after firing
 */
bool pyro::controlLogicPyroOff(const int32_t& time) {

	bool timeTest = time - timePyroBegin > timeOn; //check whether pyro has fired for specified time
	bool pinTest = pinState == HIGH; //test whether pin is high (pyro is on)

	if (pinTest && firedStatus && timeTest) {
		return true;
	}
	else {
		return false;
	}
}