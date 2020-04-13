/*
 * analogPinRead.h
 *
 * Measure voltage of battery and USB inputs through analog pins 
 */

#ifndef _ANALOG_PIN_READ_h
#define _ANALOG_PIN_READ_h

#include "Arduino.h"
#include "pins.h"

//Digital output pin
#define VOLTAGE_BATTERY_PIN				ALT_VOLTAGE_BATTERY_PIN

class analogPinRead {
public:
	analogPinRead();
	uint16_t getBatteryVoltage();
};
#endif