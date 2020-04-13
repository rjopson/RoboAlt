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
		calibration->C[i] = calibrationTest->C[i];
	}
	
	calibration->mpuPad = calibrationTest->mpuPad;
	calibration->h3lisPad = calibrationTest->h3lisPad;
	calibration->pressurePad = calibrationTest->pressurePad;
	calibration->temperaturePad = calibrationTest->temperaturePad;
}

/* get new line of data from sensors
 * raw sensor readings from accelerometers, gyros, temp, pressure and voltage
 */
void sensors::getData(sensorData* data) {

	//Time
	data->time = flightTestData[count].time;

	//Accelerometers
	data->accelX = flightTestData[count].MPU_accelX;
	data->accelY = flightTestData[count].MPU_accelY;
	data->accelZ = flightTestData[count].MPU_accelZ;
	data->accelY_highG = flightTestData[count].H3LIS_accelY;

	//Gyros
	data->gyroX = flightTestData[count].MPU_gyroX;
	data->gyroY = flightTestData[count].MPU_gyroY;
	data->gyroZ = flightTestData[count].MPU_gyroZ;

	//Barometer
	data->pressure = flightTestData[count].MS5607_pressure;

	//Thermometer
	data->temperature = flightTestData[count].MS5607_temperature;

	//battery voltage
	data->voltageBattery = flightTestData[count].voltageAnalog;

	count++;
}

void sensors::getTestData(calibrationData* calibrationIn, vector<debugFlightData> flightDataIn) {
	
	calibrationTest = calibrationIn;
	flightTestData = flightDataIn;
}