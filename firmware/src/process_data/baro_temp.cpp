/*
 * baro_temp.cpp
 */

#include "baro_temp.h"

/* Default constructor
*/
BaroTemp::BaroTemp() {

}

BaroTemp::~BaroTemp() {
	
}

/* Fetch MS5607 calibration coefficients from sensor class, which are used to 
 * calculate temp and pressure in engineering units.
 */
void BaroTemp::GetCalibrationCoefficients(const uint16_t c[6]) {
	for (int i = 0; i != 6; i++) {
		c_[i] = c[i];
	}
}

/* Calculate temperature in 100*deg/s
 */
int32_t BaroTemp::CalculateTemperature(const uint32_t& temperature_sensor) {

	//Define variables necessary for calculations
	int64_t D2 = temperature_sensor; //raw temperature value
	int64_t TEMP; //actual temperature, 64 bit number used for calculation
	int64_t dT; //difference between actual temperature and reference temperature

	//Calculate temperature
	dT = D2 - ((int64_t)C[4] << 8);
	TEMP = (int64_t)2000 + ((dT * (int64_t)C[5]) >> 23);
	return (int32_t)TEMP;
}

/* Calculate pressure in Pascal
 *
 */
int32_t BaroTemp::CalculatePressure(const uint32_t& pressure_sensor, const int32_t& temperature_sensor) {

	//Define variables necessary for calculations
	int64_t D1 = pressure_sensor; //raw pressure value
	int64_t D2 = temperature_sensor; //raw temperature value
	int64_t dT; //difference between actual temperature and reference temperature
	int64_t OFF; //offset at actual temperature
	int64_t SENS; //sensitivity at actual temperature
	int64_t P; //pressure (temperature compensated), 64 bit number used for calculation

	//Calculate temperature difference
	dT = D2 - ((int64_t)C[4] << 8);

	//Calculate temperature compensation
	OFF = ((int64_t)C[1] << 17) + ((dT * (int64_t)C[3]) >> 6);
	SENS = ((int64_t)C[0] << 16) + (((int64_t)C[2] * dT) >> 7);

	//Calculate pressure
	P = (((D1*SENS) >> 21) - OFF) >> 15;

	return (int32_t)P;
}
