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
#include <sstream>
#include <string>
#include <vector>

#include "dataStructures.h"

using namespace std;

class dataIO {

public:
	dataIO(string filePathRead, string filePathWrite);
	vector<savedFlightData> readFromCSV();
	void writeToCSV(vector<savedFlightData>);
	vector<vector<int>> mapStructureToArray(vector<savedFlightData> flightDataStructure);
	vector<savedFlightData> mapArrayToStructure(vector<vector<int>> flightDataArray);
};
#endif