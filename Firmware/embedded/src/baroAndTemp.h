/*
 * baroAndTemp.h
 *
 * This class reduces raw barometer and temperature data from the MS5607 sensor to engineering units, altitude
 * Takes two steps:
 * -convert raw 3 byte MS5607 baro and temp data to engineering units per equations from datasheet
 *		+pressure in (Pa)
 *		+temperature in 100*degC
 * -Calculate altitude in 100*m using standard atmposphere. Good to 30,480 m, according to datasheet
 */

#ifndef _BAROANDTEMP_h
#define _BAROANDTEMP_h

#include <inttypes.h>
//#include "sensorOffset.h"

class baroAndTemp {

public:
	baroAndTemp();

	uint16_t C[6];

	void fetchCalibrationCoefficients(const uint16_t C_in[6]);
	int32_t calculateTemperature(const uint32_t& rawTemperature);
	int32_t calculatePressure(const uint32_t& rawPressure, const int32_t& rawTemperature);
};
#endif