/*
 * manageSensorsAndControl.h
 *
 * This class ties together all sensor driver, engineering unit and filtering classes. 
 */

#ifndef _MANAGE_SENSORS_AND_CONTROL_h
#define _MANAGE_SENSORS_AND_CONTROL_h

#include <inttypes.h>
#include "dataStructures.h"

#include "../driver/sensors.h"
#include "sensorOffset.h"
#include "processData.h"
#include "kalman.h"
#include "flightLogic.h"

class manageSensorsAndControl {

public:
	manageSensorsAndControl();
	void initialize(const int32_t& altitudeMainDeployUser);
	void update();

	//Data structures
	sensorData sensor_data;
	calibrationData calibration_data;
	engineeringData engineering_data;
	stateData state_data;

	//Classes to get data and reduce it
	sensors drivers;
	sensorOffset<int16_t> mpuOffset;
	sensorOffset<int16_t> h3lisOffset;
	sensorOffset<uint32_t> pressureOffset;
	sensorOffset<uint32_t> temperatureOffset;
	processData process_data;
	kalman filter;
	flightLogic logic;
};
#endif