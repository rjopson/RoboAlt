/*
 Name:		MS5607.cpp

*/

#include "MS5607.h"

/* Default constructor
 *
 */
MS5607::MS5607() {
	devAddr = MS5607_ADDRESS_DEFAULT;
}

/* Initialize sensor - send reset command and get calibration coefficients
 *
 */
void MS5607::initialize() {
	Wire.beginTransmission(devAddr);
	Wire.write(MS5607_RESET);
	Wire.endTransmission();
	delay(10);
	getCalibrationCoefficients();
}

/* Get Factory Calibration Coefficients
 *C1 = Pressure sensitivity | SENS_T1
 *C2 = Pressure offset |OFF_T1
 *C3 = Temperature coefficient of pressure sensitivity | TCS
 *C4 = Temperature coefficient of pressure offset | TCO
 *C5 = Reference temperature | T_REF
 *C6 = Temperature coefficient of the temperature | TEMP SENS_T1
 */
void MS5607::getCalibrationCoefficients() {

	uint8_t reg = MS5607_PROM_READ;

	for (int i = 0; i != 6; i++) {
		reg = reg + 0x02;
		I2C::read(devAddr, reg, 2, buffer);
		C[i] = ((uint16_t)buffer[0] << 8) | buffer[1];
	}
}

/* Get 3 byte, uncorrected raw pressure
 * min value = 0
 * max value = 16777216
 * typical = 6465444
 */
uint32_t MS5607::getRawPressure() {

	//Send command to begin conversion sequence for pressure
	Wire.beginTransmission(devAddr);
	Wire.write(MS5607_D1);
	Wire.endTransmission();
	delay(SAMPLE_READ_TIME);

	//Read returned data
	I2C::read(devAddr, MS5607_ADC_READ, 3, buffer);
	return	(uint32_t)buffer[0] << 16 |
			(uint32_t)buffer[1] << 8 |
			(uint32_t)buffer[2];
}

/* Get 3 byte, uncorrected raw temperature
 * min value = 0
 * max value = 16777216
 *typical = 8077636
 */
uint32_t MS5607::getRawTemperature() {

	//Send command to begin conversion sequence for temperature
	Wire.beginTransmission(devAddr);
	Wire.write(MS5607_D2);
	Wire.endTransmission();
	delay(SAMPLE_READ_TIME);

	//Read returned data
	I2C::read(devAddr, MS5607_ADC_READ, 3, buffer);
	return	(uint32_t)buffer[0] << 16 |
			(uint32_t)buffer[1] << 8 |
			(uint32_t)buffer[2];
}