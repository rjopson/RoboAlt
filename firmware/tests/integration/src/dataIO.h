/*
 * dataIO.h
 *
 * File I/O for test data. Read and write text file like embedded hardware outputs
 */

#ifndef _DATAIO_h
#define _DATAIO_h

#include <inttypes.h>
#include <iostream>
#include <fstream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

#include "dataStructures.h"

using namespace std;

struct flightData {

};

class dataIO {

public:
	dataIO(const string& filePathIn);

	void readFromCSV(userSettings_benchTest* userSettings,
		calibrationData* calibration, vector<debugFlightData> &flightData);

	void writeToCSV(const userSettings_benchTest& userSettings,
		const calibrationData& calibration, vector<debugFlightData> flightData);
	
	int dataLines;

private:
	string parseCommand(const string& line, userSettings_benchTest* userSettings, calibrationData* calibration);
	debugFlightData parseFlightDataLine(string line);

	string writeHeader(const userSettings_benchTest& userSettings, const calibrationData& calibration, const int& dataLength);
	string writeHeaderLine(const string& command, const vector<int> data);
	string writeHeaderLine(const string& command, const int& data);
	string writeFlightDataLine(const debugFlightData& dataLine);

	string filePath;
};
#endif