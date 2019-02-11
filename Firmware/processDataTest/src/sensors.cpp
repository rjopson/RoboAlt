/*
 * sensors.h
 *
 * This class is a replacement for the firmware sensor class.
 * Used in processDataTest to test all sensor and control code (sensor drivers replaced by recorded data using this class).
 */

#include "sensors.h"

 /* Default constructor
 */
sensors::sensors() {
	count = 0;
}

/* Initialize sensors
 *
 */
void sensors::initialize(sensorData* data) {
	getData(data);
}

/* Average sensor readings to initialize offsets
 *
 */
void sensors::initializeCalibration(calibrationData* calibration) {

	//Get MS5607 calibration coefficients
	for (int i = 0; i != 6; i++) {
		calibration->C[i] = sensorTestData->calibration.C[i];
	}
	
	calibration->mpuPad = sensorTestData->calibration.mpuPad;
	calibration->h3lisPad = sensorTestData->calibration.h3lisPad;
	calibration->pressurePad = sensorTestData->calibration.pressurePad;
	calibration->temperaturePad = sensorTestData->calibration.temperaturePad;
}

/* get new line of data from sensors
 * raw sensor readings from accelerometers, gyros, temp, pressure and voltage
 */
void sensors::getData(sensorData* data) {

	//Time
	data->time = sensorTestData->flightData[count].time;

	//Accelerometers
	data->accelX = sensorTestData->flightData[count].MPU_accelX;
	data->accelY = sensorTestData->flightData[count].MPU_accelY;
	data->accelZ = sensorTestData->flightData[count].MPU_accelZ;
	data->accelY_highG = sensorTestData->flightData[count].H3LIS_accelY;

	//Gyros
	data->gyroX = sensorTestData->flightData[count].MPU_gyroX;
	data->gyroY = sensorTestData->flightData[count].MPU_gyroY;
	data->gyroZ = sensorTestData->flightData[count].MPU_gyroZ;

	//Barometer
	data->pressure = sensorTestData->flightData[count].MS5607_pressure;

	//Thermometer
	data->temperature = sensorTestData->flightData[count].MS5607_temperature;

	//battery voltage
	data->voltageBattery = sensorTestData->flightData[count].voltageAnalog;

	count++;
}

void sensors::getDataIO(dataIO* sensorTestDataIn) {
	sensorTestData = sensorTestDataIn;
}