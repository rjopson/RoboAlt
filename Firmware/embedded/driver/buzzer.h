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
#define BUZZER_TIME_ON_START_UP			250 //(ms) time on 
#define BUZZER_TIME_ON_DATA				200 //(ms) time on 
#define BUZZER_TIME_ON_FLIGHT_READY		75 //(ms) time on

//Frequencies
#define BUZZER_FREQUENCY				2500 //frequency of beeps
#define BUZZER_FREQUENCY_CONTINUITY		2700 //frequency of beeps
#define BUZZER_FREQUENCY_NO_CONTINUITY	2200 //frequency of beeps when no continuity on charges

class buzzer {
public:
	buzzer(const bool& buzzerSwitchIn);

	void toneOn(const uint32_t& frequency, const uint32_t& duration);
	void toneStartup();
	void toneVoltage();
	void toneContinuity();
	void toneNoContinuity();
	void toneFlightReady();

	bool buzzerSwitch; //1 is buzzer output, 0 turns buzzer off
};
#endif