/*
 * processData.cpp
 *
 * This class wraps around all data reduction and filtering classes to make it easy to add to main file
 */

#include "processData.h"

/* Default constructor
 */
processData::processData() {

}

void processData::initialize(const uint32_t& time, const calibrationData& calibration) {

	//Barometer, altitude and temperature
	baroTemp.fetchCalibrationCoefficients(calibration.C);

	//IMU
	imu.initialize(calibration.mpuPad);

	//Kalman filter
	kalmanFilter.initialize(time);
}

void processData::sensors(const sensorData& sensorData, const calibrationData& offsets, engineeringData* engineeringData) {

	//Time
	engineeringData->time = sensorData.time;

	//Barometer and temperature
	engineeringData->pressure = baroTemp.calculatePressure(sensorData.pressure, sensorData.temperature);
	engineeringData->temperature = baroTemp.calculateTemperature(sensorData.temperature);
	int32_t pressurePad = baroTemp.calculatePressure(offsets.pressurePad, offsets.temperaturePad);
	engineeringData->altitudeBaro = altitude.calculateAltitudeAGL(engineeringData->pressure, pressurePad);

	//IMU
	engineeringData->accelAxial = imu.getReducedAcceleration(sensorData.accelY, offsets.mpuPad, sensorData.accelY_highG, offsets.h3lisPad);

	//Battery voltage
	engineeringData->voltageBattery = batteryVoltage.battery(sensorData.voltageBattery);
}

void processData::filterStateData(const engineeringData& engineeringData, stateData* stateData) {
	kalmanFilter.update(engineeringData.time, engineeringData.altitudeBaro, engineeringData.accelAxial, &stateData->altitude, &stateData->velocity, &stateData->acceleration);
}