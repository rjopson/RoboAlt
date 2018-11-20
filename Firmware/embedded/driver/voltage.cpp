/*
 * voltage.CPP
 *
 * Measure voltage of battery and USB inputs through analog pins
 */

#include "voltage.h"

/* Default constructor
*/
voltage::voltage() {

}

/* Get battery voltage. Returns as 10 bit number
 *
 */
uint16_t voltage::getBatteryVoltage() {
	return analogRead(VOLTAGE_BATTERY_PIN);
}