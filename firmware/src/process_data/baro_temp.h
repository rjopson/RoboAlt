/*
 * baro_temp.h
 *
 * This class reduces raw barometer and temperature data from the MS5607 sensor to engineering units, altitude
 * Takes two steps:
 * -convert raw 3 byte MS5607 baro and temp data to engineering units per equations from datasheet
 *		+pressure in (Pa)
 *		+temperature in 100*degC
 * -Calculate altitude in 1000*m using standard atmposphere. Good to 30,480 m, according to datasheet
 */

#ifndef _BARO_TEMP_h
#define _BARO_TEMP_h

#include <inttypes.h>

class BaroTemp {
  public:
	BaroTemp();
	~BaroTemp();
	void GetCalibrationCoefficients(const uint16_t c[6]);
	int32_t CalculateTemperature(const uint32_t& temperature_sensor);
	int32_t CalculatePressure(const uint32_t& pressure_sensor, const int32_t& temperature_sensor);
	
	uint16_t c_[6];
};
#endif