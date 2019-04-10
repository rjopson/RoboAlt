/*
 * Pins.cpp
*/

#include "buzzer.h"

/* Constructor
 */
buzzer::buzzer(const bool& buzzerSwitchIn) {
	buzzerSwitch = buzzerSwitchIn;
	timePrevious = 0;
}

void buzzer::flightReady(const uint32_t& timeIn) {

	if (timeIn - timePrevious > BUZZER_TIME_OFF_FLIGHT_READY) {
		toneFlightReady();
		timePrevious = timeIn;
	}
}

void buzzer::preFlightChecks(const uint16_t& voltageIn, const bool& continuityApo, const bool& continuityMain, const bool& continuityThird) {

	//voltage check
	voltageOutput(voltageIn);
	delay(BUZZER_TIME_OFF_BETWEEN_DATA);

	//continuity check 
	continuityOutput(continuityApo, continuityMain, continuityThird);
	delay(BUZZER_TIME_OFF_BETWEEN_DATA);
}

void buzzer::voltageOutput(const uint16_t& voltageIn) {
	
	for (int i = 0; i != voltageIn; i++) {
		toneVoltage();
		delay(BUZZER_TIME_OFF_DATA);
		if (i > 18) { //make sure that if there's an issue with voltage reading, don't get stuck in loop forever
			break;
		}
	}
}

void buzzer::continuityOutput(const bool& continuityApo, const bool& continuityMain, const bool& continuityThird) {

	toneCheckContinuity(continuityApo);
	delay(BUZZER_TIME_OFF_DATA);
	toneCheckContinuity(continuityMain);
	delay(BUZZER_TIME_OFF_DATA);
	toneCheckContinuity(continuityThird);
	delay(BUZZER_TIME_OFF_DATA);
}

/* Output tone of input frequency (hz) and duration (ms)
 *
 */
void buzzer::toneOn(const uint32_t& frequency, const uint32_t& duration) {

	if (buzzerSwitch) {
		tone(BUZZER_DIGITAL_PIN, frequency, duration);
	}
}

/* Tone output at startup
 */
void buzzer::toneStartup() {
	toneOn(BUZZER_FREQUENCY, BUZZER_TIME_ON_START_UP);
}

/* Tone output for each voltage digit
 */
void buzzer::toneVoltage() {
	toneOn(BUZZER_FREQUENCY, BUZZER_TIME_ON_DATA);
}

/* Tone output for each good continuity
 */
void buzzer::toneCheckContinuity(const uint16_t& continuityIn) {

	if (continuityIn == true) {
		toneOn(BUZZER_FREQUENCY_CONTINUITY, BUZZER_TIME_ON_DATA);
	}
	else {
		toneOn(BUZZER_FREQUENCY_CONTINUITY, BUZZER_FREQUENCY_NO_CONTINUITY);
	}
}

/* Tone for flight ready
 */
void buzzer::toneFlightReady() {
	toneOn(BUZZER_FREQUENCY, BUZZER_TIME_ON_FLIGHT_READY);
}