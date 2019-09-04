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

bool buzzer::flightReady(const bool& dataValidity, const uint32_t& timeIn) {

	if (timeIn - timePrevious > BUZZER_TIME_OFF_FLIGHT_READY) {

		if (dataValidity) {
			toneFlightReady();			
		}
		timePrevious = timeIn;
		return 1;
	}
	else {
		return 0;
	}
}

//public control to turn buzzer on/off
void buzzer::onOffSwitch(bool setSwitch) {
	buzzerSwitch = setSwitch;
}

void buzzer::preFlightChecks(const bool& dataValid, const uint16_t& voltageIn, const bool& continuityApo, const bool& continuityMain, const bool& continuityThird) {
	
	//dataValidity check
	dataValidity(dataValid);
	delay(BUZZER_TIME_OFF_BETWEEN_DATA);

	//voltage check
	voltageOutput(voltageIn);
	delay(BUZZER_TIME_OFF_BETWEEN_DATA);

	//continuity check 
	continuityOutput(continuityApo, continuityMain, continuityThird);
	delay(BUZZER_TIME_OFF_BETWEEN_DATA);
}

void buzzer::dataValidity(const bool& dataValid) {

	if (dataValid) {

		for (int i = 0; i != 3; i++) {
			toneDataValid();
			delay(200);
		}
	}
	else {
		for (int i = 0; i != 5; i++) {
			toneOn(BUZZER_FREQUENCY_NO_CONTINUITY, BUZZER_TIME_ON_DATA);
			delay(BUZZER_TIME_ON_DATA);
			toneOn(BUZZER_FREQUENCY_CONTINUITY, BUZZER_TIME_ON_DATA);
			delay(BUZZER_TIME_ON_DATA);
		}
	}
}

void buzzer::voltageOutput(const uint16_t& voltageIn) {
	
	if (voltageIn < 2) {
		for (int i = 0; i != 2; i++) {
			toneOn(BUZZER_FREQUENCY_NO_CONTINUITY, BUZZER_TIME_ON_DATA);
			delay(BUZZER_TIME_ON_DATA);
			toneOn(BUZZER_FREQUENCY_CONTINUITY, BUZZER_TIME_ON_DATA);
			delay(BUZZER_TIME_ON_DATA);
		}
	}
	else {
		for (int i = 0; i != voltageIn; i++) {
			toneVoltage();
			delay(BUZZER_TIME_OFF_DATA);
			if (i > 18) { //make sure that if there's an issue with voltage reading, don't get stuck in loop forever
				break;
			}
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

/* Tone output data valid
 */
void buzzer::toneDataValid() {
	toneOn(BUZZER_FREQUENCY, BUZZER_TIME_ON_VALID);
}

/* Tone output data invalid
 */
void buzzer::toneDataInvalid() {
	toneOn(BUZZER_FREQUENCY, BUZZER_TIME_ON_INVALID);
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
		toneOn(BUZZER_FREQUENCY_NO_CONTINUITY, BUZZER_TIME_ON_DATA);
	}
}

/* Tone for flight ready
 */
void buzzer::toneFlightReady() {
	toneOn(BUZZER_FREQUENCY, BUZZER_TIME_ON_FLIGHT_READY);
}