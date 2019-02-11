/*
 * manageSensorsAndControl.cpp
 *
 * This class ties together all sensor driver, engineering unit and filtering classes.
 */

#include "manageSensorsAndControl.h"

/* Default constructor
 */
manageSensorsAndControl::manageSensorsAndControl() {

}

void manageSensorsAndControl::initialize(const int32_t& altitudeMainDeployUser) {
	
	//Initialize Sensors
	drivers.initialize(&sensor_data);
	drivers.initializeCalibration(&calibration_data);

	//Initialize Offsets
	mpuOffset.initialize(calibration_data.mpuPad, 10);
	h3lisOffset.initialize(calibration_data.h3lisPad, 10);
	pressureOffset.initialize(calibration_data.pressurePad, 10);
	temperatureOffset.initialize(calibration_data.temperaturePad, 10);

	//Initialize data processing
	process_data.initialize(sensor_data.time, calibration_data);

	//Initialize flight state
	logic.initialize(altitudeMainDeployUser);
}

void manageSensorsAndControl::update() {

	//Get sensor data
	drivers.getData(&sensor_data);

	//Update offsts
	if (logic.flightStatus == 0) {
		
		calibration_data.mpuPad = mpuOffset.updateOffset(sensor_data.accelY, sensor_data.time);
		calibration_data.h3lisPad = h3lisOffset.updateOffset(sensor_data.accelY_highG, sensor_data.time);
		calibration_data.pressurePad = pressureOffset.updateOffset(sensor_data.pressure, sensor_data.time);
		calibration_data.temperaturePad = temperatureOffset.updateOffset(sensor_data.temperature, sensor_data.time);
	}

	//Process Data
	process_data.sensors(sensor_data, calibration_data, &engineering_data);
	process_data.filterStateData(engineering_data, &state_data);

	//Determine phase of flight
	logic.update(state_data.acceleration, state_data.velocity, state_data.altitude, sensor_data.gyroX, sensor_data.gyroY, sensor_data.gyroZ);
}

debugFlightData manageSensorsAndControl::getDebugFlightData() {

	debugFlightData data;
	data.time = engineering_data.time;
	data.flightStatus = logic.flightStatus;
	data.altitude = state_data.altitude;
	data.velocity = state_data.velocity;
	data.acceleration = state_data.acceleration;
	data.altitudeBaro = engineering_data.altitudeBaro;
	data.accelAxial = engineering_data.accelAxial;
	data.pressure = engineering_data.pressure;
	data.temperature = engineering_data.temperature;
	data.MPU_accelX = sensor_data.accelX;
	data.MPU_accelY = sensor_data.accelY;
	data.MPU_accelZ = sensor_data.accelZ;
	data.MPU_gyroX = sensor_data.gyroX;
	data.MPU_gyroY = sensor_data.gyroY;
	data.MPU_gyroZ = sensor_data.gyroZ;
	data.H3LIS_accelY = sensor_data.accelY_highG;
	data.MS5607_pressure = sensor_data.pressure;
	data.MS5607_temperature = sensor_data.temperature;
	data.voltageAnalog = sensor_data.voltageBattery;
	return data;
}