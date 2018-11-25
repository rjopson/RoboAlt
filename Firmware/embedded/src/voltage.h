/*
 * voltage.h
 *
 * Convert analog read data to engineering units
 *
 */

#ifndef _VOLTAGE_h
#define _VOLTAGE_h

#include <inttypes.h>

#define		VOLTAGE_BATTERY_DIVIDER			720 //(v*100) voltage divider multiplier
#define		VOLTAGE_ATMEGA					33 //(v*10) voltage arduino logic run at

class voltage {
public:
	voltage();
	int16_t battery(const int16_t& analogReadingIn); //(mV) get unfiltered voltage in engineering units
};
#endif