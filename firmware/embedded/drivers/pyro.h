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

#if TEST_SWITCH == 1
#include "flightLogic.h"
#else 
#include "../src/flightLogic.h"
#endif


//Pyro Channels (from pins.h)
#define APO_CONTINUITY			ALT_APO_CONTINUITY	
#define MAIN_CONTINUITY			ALT_MAIN_CONTINUITY	
#define THIRD_CONTINUITY		ALT_THIRD_CONTINUITY
#define APO_OUTPUT				ALT_APO_OUTPUT		
#define MAIN_OUTPUT				ALT_MAIN_OUTPUT		
#define THIRD_OUTPUT			ALT_THIRD_OUTPUT	

//Analog reading when ematch continuity is positive
#define ANALOG_CONTINUITY_TRUE 125

class pyro {

public:
	enum pyroSelections { apogee, main, third }; 
	pyro(const bool& activeIn, pyroSelections pyroSelectionIn, const int16_t& timeOnIn);

	bool active; //user output controlfalse if not active, true if active	
	pyroSelections pyroSelection; //determines which continuity and output pins to use 

	//Pins
	uint8_t pinOutput; //digital pin to control firing output
	int pinState; //LOW is off, HIGH is on for digital pin
	unsigned char pinContinuity; //analog pin to read continuity of output	
	
	//Control when and how long pyro events on
	uint8_t flightEvent; //flightEvent which is used to fire charge. 2 at burnout, 3 at apogee, 4 at main
	int16_t timeOn; //time to leave pin output high
	int32_t timeDelay; //time to delay firing output after sensing event
	int32_t timeFlightEventActivate; //time when flightEvent becomes active
	int32_t timePyroBegin; //time when pyro is turned on
	bool firedStatus; //true charge has fired, false charge has not fired.
	bool continuityBool; //true when ematch is connected, false if not.
	uint16_t continuityAnalog; //analog reading of continuity pin voltage. For saving flight data 
	
	void setPins(); //switch which controls digital and analog pins used
	void initialize(const uint8_t& flightEventIn, const int32_t& timeDelayIn); //read flash values for user input flightStatus selection and delay after flightStatus reached
	void update(const int32_t& time, const uint8_t& flightStatusIn);
	void readContinuity(); //check continuity of output
	void pyroOutputOn();
	void pyroOutputOff();
	bool lookForFlightEvent(const int32_t& time, const uint8_t& flightStatusIn); //check whether flight event to fire charge is current/passed, start timer
	bool controlLogicPyroOn(const int32_t& time); //check whether to fire charge
	bool controlLogicPyroOff(const int32_t& time); //check whether to turn off pyro after firing
};

#endif