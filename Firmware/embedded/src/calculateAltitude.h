/*
 * calculateAltitude.h
 *
 * This class calculates altitude from barometric pressure readings between sea level and 30,000 m using the Standard Atmosphere model
 * a lookup table is used with values every 2^10 (1024) Pa, linear interpolation between readings
 * doesn't need to be completely accurate (max errors occur at higher altitudes, ~350 m at 28,600 m, just fast. Most readings though are ~10 m to exact
 * Exact calculations from pressure are done in the computer program
 */

#ifndef _CALCULATEALTITUDE_h
#define _CALCULATEALTITUDE_h

#include <inttypes.h>
#include "sensorOffset.h"

class calculateAltitude {

public:
	calculateAltitude();

	int32_t calculateAltitudeAGL(const int32_t& pressure, const int32_t& pressureGround);
	int32_t calculateAltitudeMSL(const int32_t& pressure);
	int32_t altitudeLookup(const uint8_t& index);
};
#endif