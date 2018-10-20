/*
 * baroAndTemp.cpp
 */

#include "baroAndTemp.h"

/* Default constructor
*/
baroAndTemp::baroAndTemp() {

}

/* Fetch MS5607 calibration coefficients from sensor class, which are used to 
 * calculate temp and pressure in engineering units.
 */
void baroAndTemp::fetchCalibrationCoefficients(const uint16_t C_in[6]) {
	for (int i = 0; i != 6; i++) {
		C[i] = C_in[i];
	}
}

/* Calculate temperature in 100*deg/s
 */
int32_t baroAndTemp::calculateTemperature(const uint32_t& rawTemperature) {

	//Define variables necessary for calculations
	int64_t D2 = rawTemperature; //raw temperature value
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
int32_t baroAndTemp::calculatePressure(const uint32_t& rawPressure, const int32_t& rawTemperature) {

	//Define variables necessary for calculations
	int64_t D1 = rawPressure; //raw pressure value
	int64_t D2 = rawTemperature; //raw temperature value
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
