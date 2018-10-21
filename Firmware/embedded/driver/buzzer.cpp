/*
 * Pins.cpp
*/

#include "buzzer.h"

/* Constructor
 */
buzzer::buzzer(const bool& buzzerSwitchIn) {
	buzzerSwitch = buzzerSwitchIn;
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
void buzzer::toneContinuity() {
	toneOn(BUZZER_FREQUENCY_CONTINUITY, BUZZER_TIME_ON_DATA);
}

/* Tone output for each no continuity
 */
void buzzer::toneNoContinuity() {
	toneOn(BUZZER_FREQUENCY_CONTINUITY, BUZZER_FREQUENCY_NO_CONTINUITY);
}

/* Tone for flight ready
 */
void buzzer::toneFlightReady() {
	toneOn(BUZZER_FREQUENCY, BUZZER_TIME_ON_FLIGHT_READY);
}