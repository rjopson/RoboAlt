/*
 * buzzer.h
 *
 * Controls buzzer output
 */

#ifndef _BUZZER_h
#define _BUZZER_h

#include "Arduino.h"
#include "pins.h"

//Digital output pin
#define BUZZER_DIGITAL_PIN				PIN_BEEPER_DIGITAL_PIN

//Timing for beeps
#define BUZZER_TIME_ON_START_UP			250 //(ms) 
#define BUZZER_TIME_ON_DATA				200 //(ms) 
#define BUZZER_TIME_ON_FLIGHT_READY		75 //(ms) 
#define BUZZER_TIME_OFF_DATA			50 //(ms) 
#define BUZZER_TIME_OFF_BETWEEN_DATA	1000 //(ms)
#define BUZZER_TIME_OFF_FLIGHT_READY	2000 //(ms)

//Frequencies
#define BUZZER_FREQUENCY				2500 //(hz)
#define BUZZER_FREQUENCY_CONTINUITY		2700 //(hz)
#define BUZZER_FREQUENCY_NO_CONTINUITY	2200 //(hz)

class buzzer {
public:
	buzzer(const bool& buzzerSwitchIn);

	void toneStartup();
	void preFlightChecks(const uint16_t& voltageIn, const bool& continuityApo, const bool& continuityMain, const bool& continuityThird);
	void flightReady(const uint32_t& timeIn);

private:
	//Functions which set frequency and duration of tone 
	void toneVoltage();
	void toneCheckContinuity(const uint16_t& continuityIn);
	void toneFlightReady();
	void toneOn(const uint32_t& frequency, const uint32_t& duration);

	//Start up functions used for preFlightChecks
	void voltageOutput(const uint16_t& voltageIn);
	void continuityOutput(const bool& continuityApo, const bool& continuityMain, const bool& continuityThird);
	void sensorCheck(); //check pressure, temperature, MPU_accelY, H3LIS

	bool buzzerSwitch; //1 is buzzer output, 0 turns buzzer off
	uint32_t timePrevious;
};
#endif