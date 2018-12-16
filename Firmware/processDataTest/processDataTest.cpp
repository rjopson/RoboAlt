// processDataTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "baroAndTemp.h"
#include "calculateAltitude.h"
#include "dataStructures.h"
#include "flightLogic.h"
#include "IMU.h"
#include "kalman.h"
#include "matrixMath.h"
#include "sensorOffset.h"
#include "voltage.h"
#include "processData.h"

//These classes drop in to replace interaction with hardware
#include "sensors.h" //dummy class which replaces sensor drivers with text read functions for existing flight data
#include "dataIO.h" //reads existing flight data. Used by sensor class 

#include <iostream>

dataIO testDataIn;
//dataIO testDataOut("../flightTests/test.csv");

void setup() {

	testDataIn.readFromCSV("../flightTests/L3_shakedown.csv");
	testDataIn.writeToCSV("../flightTests/processData_output.csv");
}

void loop() {

}

int main()
{
    std::cout << "Hello World!\n"; 
	setup();
	loop();
}


