/*
 * validateSensorData.h
 *
 * Check that sensor data and convesion to engineering units is valid. For preflight checks.
 */

#ifndef _VALIDATE_SENSOR_DATA_h
#define _VALIDATE_SENSOR_DATA_h

#include <inttypes.h>
#include "dataStructures.h"

#define VALID_ALTITUDE_MIN		-10000
#define VALID_ALTITUDE_MAX		10000
#define VALID_ACCEL_AXIAL_MIN	-5000
#define VALID_ACCEL_AXIAL_MAX	5000
#define VALID_PRESSURE_MIN		50000
#define VALID_PRESSURE_MAX		110000
#define VALID_TEMP_MIN			-2000
#define VALID_TEMP_MAX			5000
#define VALID_ACCEL_MPU_MIN		-2300
#define VALID_ACCEL_MPU_MAX		2500
#define VALID_ACCEL_H3LIS_MIN	-1500
#define VALID_ACCEL_H3LIS_MAX	1500

class validateSensorData {

public:
	validateSensorData();
	void checkAll(debugFlightData data, calibrationData calibration);
	bool check(int32_t value, int32_t min, int32_t max);

	bool altitude;
	bool accelAxial;
	bool pressure;
	bool temperature;
	bool accelMPU;
	bool accelH3LIS;
	//bool pressurePad;
	//bool temperaturePad;
	bool accelMPU_pad;
	bool accelH3LIS_pad;

	bool dataValid;
};
#endif