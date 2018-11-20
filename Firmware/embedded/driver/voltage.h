/*
 * voltage.h
 *
 * Measure voltage of battery and USB inputs through analog pins 
 */

#ifndef _VOLTAGE_h
#define _VOLTAGE_h

#include "Arduino.h"
#include "pins.h"

//Digital output pin
#define VOLTAGE_BATTERY_PIN				ALT_VOLTAGE_BATTERY_PIN

class voltage {
public:
	voltage();
	uint16_t getBatteryVoltage();

};
#endif