/*
 * voltage.h
 *
 * Convert analog read data to engineering units
 *
 */

#include "voltage.h"

/* Default constructor
 */
voltage::voltage() {

}

/* Convert analog read of battery voltage to engineering units - mV
 *
 */
int16_t voltage::battery(const int16_t& analogReadingIn) {
	return (int16_t)((int32_t)VOLTAGE_BATTERY_DIVIDER*(int32_t)VOLTAGE_ATMEGA*(int32_t)analogReadingIn) >> 10;
}