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
pyro::pyro(const bool& activeIn, const uint8_t& pyroSelectionIn, const int16_t& timeOnIn) {

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

	case ALT_APO:
		pin = ALT_APO_OUTPUT;
		continuity = ALT_APO_CONTINUITY;
		break;

	case ALT_MAIN:
		pin = ALT_MAIN_OUTPUT;
		continuity = ALT_MAIN_CONTINUITY;
		break;

	case ALT_THIRD:
		pin = ALT_THIRD_OUTPUT;
		continuity = ALT_THIRD_CONTINUITY;
		break;
	}
}

/* Read user defined values for flightStatus selection and delay after flightStatus reached to fire pyro
 *
 */
void pyro::initialize(const uint8_t& flightEventIn, const int32_t& timeDelayIn) {

	flightEvent = flightEventIn;
	timeDelay = timeDelayIn;
}

/* Used to manage pyro channels from outer look in code
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
}

/* Check continuity of output
 * analog value read in test. Greater than value of 125 indicates good continuity
 */
uint16_t pyro::readContinuity() {
	return analogRead(continuity);
}

/* Fire pyro
 */
void pyro::pyroOutputOn() {

	if (active == true) { //test whether user has disabled pyro channel
		pinState = HIGH; //set pinState to high
		digitalWrite(pin, pinState); //set output pin to pinState
		timePyroBegin = millis(); //mark time that charge fired
		firedStatus = true; //update firedStatus to mark that charge has been fired
	}
}

/* Turn firing pyro off
 */

void pyro::pyroOutputOff() {
	pinState = LOW; //set pinState back to low
	digitalWrite(pin, pinState); //turn off output
}

/* check whether flight event to fire charge is current/passed, start timer
 */
bool pyro::lookForFlightEvent(const int32_t& time, const uint8_t& flightStatusIn) {

	bool flightStatusTest = flightStatusIn >= flightEvent; //check whether flight status to fire in active or passed

	if (flightStatusTest && timeFlightEventActivate == 0) {
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