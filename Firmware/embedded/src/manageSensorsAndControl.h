/*
 * manageSensorsAndControl.h
 *
 * This class ties together all sensor driver, engineering unit and filtering classes. 
 */

#ifndef _MANAGE_SENSORS_AND_CONTROL_h
#define _MANAGE_SENSORS_AND_CONTROL_h

#include <inttypes.h>
#include "dataStructures.h"

#include "sensors.h"
#include "sensorOffset.h"
#include "processData.h"
#include "flightLogic.h"

class manageSensorsAndControl {

public:
	manageSensorsAndControl();
	void initialize();
	void update();

	//Data structures
	sensorData sensor_data;
	engineeringData engineering_data;
	stateData state_data;

	//Classes to get data nad reduce it
	sensors drivers;
	sensorOffset<int16_t> mpuOffset;
	sensorOffset<int16_t> h3lisOffset;
	sensorOffset<uint32_t> pressureOffset;
	processData process_data;
	flightLogic logic;
};
#endif