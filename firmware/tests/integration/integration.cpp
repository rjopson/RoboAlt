// processDataTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define TEST_SWITCH 1

#include "baroAndTemp.h"
#include "calculateAltitude.h"
#include "dataStructures.h"
#include "flightLogic.h"
#include "IMU.h"
#include "kalman.h"
#include "matrixMath.h"
#include "manageSensorsAndControl.h"
#include "sensorOffset.h"
#include "voltage.h"
#include "processData.h"

//These classes drop in to replace interaction with hardware
#include "src/sensors.h" //dummy class which replaces sensor drivers with text read functions for existing flight data
#include "dataIO.h" //reads existing flight data. Used by sensor class 
//#include "sensors.h"
#include <iostream>

//Full flight data information
calibrationData calibrationTestIn;
calibrationData calibrationProcessedOut;
userSettings_benchTest user_settings;
vector<debugFlightData> flightDataTestIn;
vector<debugFlightData> flightDataProcessedOut;

manageSensorsAndControl sensorsAndControl;
pyroContinuity pyro_continuity;

//dataIO testDataIn("../../flightTests/L3_shakedown_v2.csv");
dataIO testDataIn("../../FlightTests/3DPME_29mm_H128_TriCities_9-2019_v2.csv");
dataIO processedDataOut("Output/processData_output.csv");

void setup() {	

	/////////////////////////////////////////////////////////////////////////
	//This is the line that is run on hardware! (Only difference is sensors are "initialized" here using pad offsets from text file)
	sensorsAndControl.initialize(user_settings.altitudeMainDeploy);
	/////////////////////////////////////////////////////////////////////////

}

void loop() {

	//testDataIn.lineCount-1
	for (int i = 0; i != flightDataTestIn.size(); i++) {
		
		/////////////////////////////////////////////////////////////////////////
		//This is the line that is run on hardware!
		sensorsAndControl.update();
		/////////////////////////////////////////////////////////////////////////

		//Manage data output to text file 
		pyro_continuity.apo = flightDataTestIn[sensorsAndControl.drivers.count].continuityApo;
		pyro_continuity.main = flightDataTestIn[sensorsAndControl.drivers.count].continuityMain;
		pyro_continuity.third = flightDataTestIn[sensorsAndControl.drivers.count].continuityThird;
		debugFlightData processedDataLine = sensorsAndControl.getDebugFlightData(pyro_continuity);
		flightDataProcessedOut.push_back(processedDataLine);

		//Print data to command line
		/*
		std::cout 
			<< i << " "
			<< sensorsAndControl.engineering_data.time << " "
			<< (int)sensorsAndControl.logic.flightStatus << " "
			<< sensorsAndControl.state_data.altitude << " "
			<< sensorsAndControl.state_data.velocity  << " "
			<< sensorsAndControl.state_data.acceleration << " " 
			<< std::endl; */
		
	}
}

int main()
{   
	std::cout << "Flight data processing test!\n";

	//get test data into dummy sensor class 
	testDataIn.readFromCSV(&user_settings, &calibrationTestIn, flightDataTestIn);
	sensorsAndControl.drivers.getTestData(&calibrationTestIn, flightDataTestIn); //get flight data read in from text file

	setup();
	loop();

	calibrationProcessedOut = sensorsAndControl.calibration_data;
	processedDataOut.writeToCSV(user_settings, calibrationProcessedOut, flightDataProcessedOut);
	
	return 1;
}


