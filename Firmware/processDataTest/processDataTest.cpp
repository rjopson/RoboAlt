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

void setup() {
	sensorsAndControl.initialize(500000);
}

void loop() {

	for (int i = 0; i != sensorsAndControl.drivers.sensorTestData.lineCount-1200; i++) {
		sensorsAndControl.update();

		//Print data to command line
		std::cout 
			<< sensorsAndControl.engineering_data.time << " "
			<< (int)sensorsAndControl.logic.flightStatus << " "
			<< sensorsAndControl.state_data.altitude << " "
			<< sensorsAndControl.state_data.velocity  << " "
			<< sensorsAndControl.state_data.acceleration << " " 
			<< std::endl; 
	}
}

int main()
{    
	setup();
	loop();
	//sensorsAndControl.drivers.sensorTestData.writeToCSV("../flightTests/processData_output.csv");
	std::cout << "Hello World!\n";
}


