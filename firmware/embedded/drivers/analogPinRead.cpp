/*
 * analogPinRead.cpp
 *
 * Measure voltage of battery and USB inputs through analog pins
 */

#include "analogPinRead.h"

/* Default constructor
*/
analogPinRead::analogPinRead() {

}

/* Get battery voltage. Returns as 10 bit number
 *
 */
uint16_t analogPinRead::getBatteryVoltage() {
	return (uint16_t)analogRead(VOLTAGE_BATTERY_PIN);
}