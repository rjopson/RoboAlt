/*
 * sensors.cpp
 *
 * This class wraps around all sensor drivers to make it easy to request new sensor data from main file
 */

#include "sensors.h"

/* Default constructor
*/
sensors::sensors() {

}

/* Initialize sensors
 *
 */
void sensors::initialize(sensorData* data) {

	Wire.begin();

	//Initialize sensors
	accelGyroHighSensitivity.initialize();
	accelLowSensitivity.initialize();
	baroTemp.initialize();
}

/* Average sensor readings to initialize offsets
 *
 */
void sensors::initializeCalibration(calibrationData* calibration) {

	//Get MS5607 calibration coefficients
	for (int i = 0; i != 6; i++) {
		calibration->C[i] = baroTemp.C[i];
	}
	
	//Get average samples from barometer, accelerometers
	int i;
	int16_t mpuOffsetX, mpuOffsetY, mpuOffsetZ;
	int32_t mpuOffsetSum = 0;
	int32_t h3lisOffsetSum = 0;
	int64_t pressureOffsetSum = 0;
	int64_t temperatureOffsetSum = 0;
	for (i = 0; i != NUMBER_SAMPLES_AVERAGE; i++) {
		accelGyroHighSensitivity.getAcceleration(&mpuOffsetX, &mpuOffsetY, &mpuOffsetZ);
		mpuOffsetSum += mpuOffsetY;
		h3lisOffsetSum += accelLowSensitivity.getAccelerationY();

		delay(1);
		pressureOffsetSum += baroTemp.getRawPressure();
		delay(1);
		temperatureOffsetSum += baroTemp.getRawTemperature();
		delay(10);
	}
	calibration->mpuPad = mpuOffsetSum / ((int32_t)NUMBER_SAMPLES_AVERAGE);
	calibration->h3lisPad = h3lisOffsetSum / ((int32_t)NUMBER_SAMPLES_AVERAGE);
	calibration->pressurePad =  (int32_t)(pressureOffsetSum / ((int32_t)NUMBER_SAMPLES_AVERAGE));
	calibration->temperaturePad = (int32_t)(temperatureOffsetSum / ((int32_t)NUMBER_SAMPLES_AVERAGE));
}

/* get new line of data from sensors
 * raw sensor readings from accelerometers, gyros, temp, pressure and voltage
 */
void sensors::getData(sensorData* data) {

	//Time
	data->time = millis();

	//Accelerometers
	accelGyroHighSensitivity.getAcceleration(&data->accelX, &data->accelY, &data->accelZ);
	data->accelY_highG = accelLowSensitivity.getAccelerationY();

	//Gyros
	accelGyroHighSensitivity.getRotation(&data->gyroX, &data->gyroY, &data->gyroZ);

	//Barometer
	delay(1); 
	data->pressure = baroTemp.getRawPressure();
	

	//Thermometer
	delay(1); 
	data->temperature = baroTemp.getRawTemperature();
	

	//battery voltage
	data->voltageBattery = analogData.getBatteryVoltage();
}