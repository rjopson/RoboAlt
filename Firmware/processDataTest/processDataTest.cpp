// processDataTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
//#include "src/sensors.h" //dummy class which replaces sensor drivers with text read functions for existing flight data
#include "dataIO.h" //reads existing flight data. Used by sensor class 
#include "sensors.h"
#include <iostream>

manageSensorsAndControl sensorsAndControl;

dataIO testDataIn;
dataIO processedDataOut;

void setup() {

	//get test data into dummy sensor class 
	testDataIn.readFromCSV("../flightTests/L3_shakedown.csv");
	sensorsAndControl.drivers.getDataIO(&testDataIn);
	processedDataOut.getDataInfo(testDataIn.version, testDataIn.dataMemoryBank, testDataIn.lineCount);
	processedDataOut.getCalibration(testDataIn.calibration);

	/////////////////////////////////////////////////////////////////////////
	//This is the line that is run on hardware!
	sensorsAndControl.initialize(500000);
	/////////////////////////////////////////////////////////////////////////
}

void loop() {

	//testDataIn.lineCount-1
	for (int i = 0; i != testDataIn.lineCount - 2; i++) {
		
		/////////////////////////////////////////////////////////////////////////
		//This is the line that is run on hardware!
		sensorsAndControl.update();
		/////////////////////////////////////////////////////////////////////////

		//Manage data output to text file 
		debugFlightData processedDataLine = sensorsAndControl.getDebugFlightData();
		processedDataLine.continuityApo = testDataIn.flightData[sensorsAndControl.drivers.count].continuityApo;
		processedDataLine.continuityMain = testDataIn.flightData[sensorsAndControl.drivers.count].continuityMain;
		processedDataLine.continuityThird = testDataIn.flightData[sensorsAndControl.drivers.count].continuityThird;
		processedDataOut.getDataLine(processedDataLine);

		//Print data to command line
		
		/*std::cout 
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
	setup();
	loop();
	processedDataOut.writeToCSV("Output/processData_output.csv");
	
	return 1;
}


