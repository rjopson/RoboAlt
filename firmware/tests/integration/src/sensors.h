/*
 * sensors.h
 *
 * This class is a replacement for the firmware sensor class. 
 * Used in processDataTest to test all sensor and control code (sensor drivers replaced by recorded data using this class).
 */

#ifndef _SENSORS_h
#define _SENSORS_h

#include <inttypes.h>
#include "dataStructures.h"
#include "dataIO.h"

class sensors {

public:
	sensors();
	void initialize(sensorData* data); //initialize sensors and filter classes
	void getData(sensorData* data); //get raw sensor readings from accelerometers, gyros, temp, pressure and voltage
	void initializeCalibration(calibrationData* calibration); //initialize offset values 
	void getTestData(calibrationData* calibrationIn, vector<debugFlightData> flightDataIn);

	//These data structures replace data from hardware
	calibrationData* calibrationTest;
	vector<debugFlightData> flightTestData;

	//dataIO replaces sensor drivers 
	int count; //number of lines of data that have been read 
};
#endif