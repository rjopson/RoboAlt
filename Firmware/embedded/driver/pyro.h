/*
 *pyro.h
 *
 * Manage pyro outputs and continuity readings
 */

#ifndef _PYRO_h
#define _PYRO_h

#include <inttypes.h>
#include "Arduino.h"
#include "pins.h"

//pyroSelectionIn selection, input to determine which digital output pin and analogRead pin
#define ALT_APO		1
#define ALT_MAIN	2
#define ALT_THIRD	3

//Pyro Channels (from pins.h)
#define APO_CONTINUITY			ALT_APO_CONTINUITY	
#define MAIN_CONTINUITY			ALT_MAIN_CONTINUITY	
#define THIRD_CONTINUITY		ALT_THIRD_CONTINUITY
#define APO_OUTPUT				ALT_APO_OUTPUT		
#define MAIN_OUTPUT				ALT_MAIN_OUTPUT		
#define THIRD_OUTPUT			ALT_THIRD_OUTPUT	

class pyro {

public:
	pyro(const bool& activeIn, const uint8_t& pyroSelectionIn, const int16_t& timeOnIn);

	bool active; //user output controlfalse if not active, true if active
	uint8_t pyroSelection; //input to determine which digital output pin and analogRead pin (1,2,3)

	//Pins
	uint8_t pin; //digital pin to control firing output
	unsigned char continuity; //analog pin to read continuity of output
	int pinState; //LOW is off, HIGH is on for digital pin
	
	//Control when and how long pyro events on
	uint8_t flightEvent; //flightEvent which is used to fire charge. 2 at burnout, 3 at apogee, 4 at main
	int16_t timeOn; //time to leave pin output high
	int32_t timeDelay; //time to delay firing output after sensing event
	int32_t timeFlightEventActivate; //time when flightEvent becomes active
	int32_t timePyroBegin; //time when pyro is turned on
	bool firedStatus; //true charge has fired, false charge has not fired.
	
	void setPins(); //switch which controls digital and analog pins used
	void initialize(const uint8_t& flightEventIn, const int32_t& timeDelayIn); //read flash values for user input flightStatus selection and delay after flightStatus reached
	void update(const int32_t& time, const uint8_t& flightStatusIn);
	uint16_t readContinuity(); //check continuity of output
	void pyroOutputOn();
	void pyroOutputOff();
	bool lookForFlightEvent(const int32_t& time, const uint8_t& flightStatusIn); //check whether flight event to fire charge is current/passed, start timer
	bool controlLogicPyroOn(const int32_t& time); //check whether to fire charge
	bool controlLogicPyroOff(const int32_t& time); //check whether to turn off pyro after firing
};

#endif