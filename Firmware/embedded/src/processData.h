/*
 * processData.h
 *
 * This class wraps around all data reduction and filtering classes to make it easy to add to main file
 */

#ifndef _PROCESS_DATA_h
#define _PROCESS_DATA_h

#include <inttypes.h>
#include "dataStructures.h"

//Data reduction classes
#include "baroAndTemp.h"
#include "calculateAltitude.h"
#include "IMU.h"
#include "voltage.h"
#include "sensorOffset.h"
#include "kalman.h"

class processData {

public:
	processData();
	void initialize(const uint32_t& time, const calibrationData& calibration);
	void processSensorData(const sensorData& sensorData, const calibrationData& offsets, engineeringData* engineeringData);
	void filterStateData(const engineeringData& engineeringData, stateData* stateData);

	baroAndTemp baroTemp;
	calculateAltitude altitude;
	IMU imu;
	voltage batteryVoltage;
	kalman kalmanFilter;

};
#endif