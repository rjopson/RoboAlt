/*
 * validateSensorData.cpp
 *
 * Check that sensor data and convesion to engineering units is valid. For preflight checks.
 */

#include "validateSensorData.h"

 /* Default constructor
  */
validateSensorData::validateSensorData() {

	altitude = false;
	accelAxial = false;
	pressure = false;
	temperature = false;
	accelMPU = false;
	accelH3LIS = false;
	//pressurePad = false;
	//temperaturePad = false;
	accelMPU_pad = false;
	accelH3LIS_pad = false;
}

void validateSensorData::checkAll(debugFlightData data, calibrationData calibration) {

	altitude = check(data.altitude, VALID_ALTITUDE_MIN, VALID_ALTITUDE_MAX);
	accelAxial = check(data.accelAxial, VALID_ACCEL_AXIAL_MIN, VALID_ACCEL_AXIAL_MAX);
	pressure = check(data.pressure, VALID_PRESSURE_MIN, VALID_PRESSURE_MAX);
	temperature = check(data.temperature, VALID_TEMP_MIN, VALID_TEMP_MAX);
	accelMPU = check(data.MPU_accelY, VALID_ACCEL_MPU_MIN, VALID_ACCEL_MPU_MAX);
	accelH3LIS = check(data.H3LIS_accelY, VALID_ACCEL_H3LIS_MIN, VALID_ACCEL_H3LIS_MAX);
	//pressurePad = check(calibration.pressurePad, VALID_PRESSURE_MIN, VALID_PRESSURE_MAX);
	//temperaturePad = check(calibration.temperaturePad, VALID_TEMP_MIN, VALID_TEMP_MAX);
	accelMPU_pad = check(calibration.mpuPad, VALID_ACCEL_MPU_MIN, VALID_ACCEL_MPU_MAX);
	accelH3LIS_pad = check(calibration.h3lisPad, VALID_ACCEL_H3LIS_MIN, VALID_ACCEL_H3LIS_MAX);

	if (altitude && accelAxial && pressure && temperature && accelMPU && accelH3LIS &&
		accelMPU_pad && accelH3LIS_pad) {
		dataValid = true;
	}
	else {
		dataValid = false;
	}
}

bool validateSensorData::check(int32_t value, int32_t min, int32_t max) {
	
	if (value > min && value < max) {
		return true;
	}
	else {
		return false;
	}
}