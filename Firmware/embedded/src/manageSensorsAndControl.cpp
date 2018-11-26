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
}