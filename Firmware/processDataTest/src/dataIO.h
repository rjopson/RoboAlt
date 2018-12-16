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
	dataIO();

	//Full flight data information
	int version;
	int dataMemoryBank;
	calibrationData calibration;
	vector<debugFlightData> flightData;

	void readFromCSV(const string& filePathRead);
	void writeToCSV(const string& filePathWrite);

private:

	string filePath;
	char delimeter;

	vector<int> splitLine(const string& line);	
	string writeDelimeter(const int& i, const int& length);
	void mapHeaderArrayToStructure(const vector<int>& headerArray);
	vector<int> mapHeaderArrayToStructure();
	vector<vector<int>> mapFlightStructureToArray();
	void mapFlightArrayToStructure(const vector<vector<int>>& flightDataArray);
};
#endif