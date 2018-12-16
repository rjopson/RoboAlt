/*
 * dataIO.h
 *
 * File I/O for test data. Read and write text file like embedded hardware outputs
 */

#include "dataIO.h"

/* Default constructor
 */
dataIO::dataIO() {
	delimeter = ',';
}

void dataIO::readFromCSV(const string& filePathRead) {
	
	vector<int> headerArray;
	vector<vector<int>> flightDataArray;
	
	ifstream file(filePathRead);

	if (!file.is_open()) {
		cout << "Unable to open file" << '\n';
	}
	else {

		//Iterate through each line, split at delimeter, sort into data structure
		string line = "";
		int count = 0;
		while (getline(file, line)) {
			
			vector<int> row;
			row = splitLine(line);
			if (count == 0) { headerArray = row; }
			if (count > 0) { flightDataArray.push_back(row); }
			count++;
		}
		mapHeaderArrayToStructure(headerArray);
		mapFlightArrayToStructure(flightDataArray);
	}
}

void dataIO::writeToCSV(const string& filePathWrite) {
	
	ofstream file(filePathWrite);
	file.clear();

	if (!file.is_open()) {
		cout << "Unable to open file" << '\n';
	}
	else {

		vector<int> header = mapHeaderArrayToStructure();
		for (int i = 0; i != header.size(); i++) {
			file << header[i];
			file << writeDelimeter(i, header.size());
		}

		vector<vector<int>> flightDataArray = mapFlightStructureToArray();
		for (int i = 0; i != flightDataArray.size(); i++) {
			for (int j = 0; j != flightDataArray[0].size(); j++) {
				file << flightDataArray[i][j];
				file << writeDelimeter(j, flightDataArray[0].size());
			}
		}
	}
	file.close();
}

string dataIO::writeDelimeter(const int& i, const int& length) {

	if (i < length-1) {
		return string(1, delimeter);
	}
	else {
		return "\n";
	}
}

vector<int> dataIO::splitLine(const string& line) {

	vector<int> dataLine;
	string data;
	istringstream dataStream(line);

	while (getline(dataStream, data, delimeter)) {
		dataLine.push_back(atoi(data.c_str()));
	}
	return dataLine;
}

void dataIO::mapHeaderArrayToStructure(const vector<int>& headerArray) {

	version = headerArray[0];
	dataMemoryBank = headerArray[1];
	lineCount = headerArray[2];
	calibration.mpuPad = headerArray[3];
	calibration.h3lisPad = headerArray[4];
	calibration.pressurePad = headerArray[5];
	calibration.temperaturePad = headerArray[6];
	calibration.C[0] = headerArray[7];
	calibration.C[1] = headerArray[8];
	calibration.C[2] = headerArray[9];
	calibration.C[3] = headerArray[10];
	calibration.C[4] = headerArray[11];
	calibration.C[5] = headerArray[12];
}

vector<int> dataIO::mapHeaderArrayToStructure() {

	vector<int> headerArray;

	headerArray.push_back(version);
	headerArray.push_back(dataMemoryBank);
	headerArray.push_back(lineCount);
	headerArray.push_back(calibration.mpuPad);
	headerArray.push_back(calibration.h3lisPad);
	headerArray.push_back(calibration.pressurePad);
	headerArray.push_back(calibration.temperaturePad);
	headerArray.push_back(calibration.C[0]);
	headerArray.push_back(calibration.C[1]);
	headerArray.push_back(calibration.C[2]);
	headerArray.push_back(calibration.C[3]);
	headerArray.push_back(calibration.C[4]);
	headerArray.push_back(calibration.C[5]);

	return headerArray; 
}

vector<vector<int>> dataIO::mapFlightStructureToArray() {

	vector<vector<int>> flightDataArray;

	for (int i = 0; i != flightData.size(); i++) {

		vector<int> flightDataLine;
		flightDataLine.push_back(flightData[i].time);
		flightDataLine.push_back(flightData[i].flightStatus);
		flightDataLine.push_back(flightData[i].altitude);
		flightDataLine.push_back(flightData[i].velocity);
		flightDataLine.push_back(flightData[i].acceleration);
		flightDataLine.push_back(flightData[i].altitudeBaro);
		flightDataLine.push_back(flightData[i].accelAxial);
		flightDataLine.push_back(flightData[i].pressure);
		flightDataLine.push_back(flightData[i].temperature);
		flightDataLine.push_back(flightData[i].MPU_accelX);
		flightDataLine.push_back(flightData[i].MPU_accelY);
		flightDataLine.push_back(flightData[i].MPU_accelZ);
		flightDataLine.push_back(flightData[i].MPU_gyroX);
		flightDataLine.push_back(flightData[i].MPU_gyroY);
		flightDataLine.push_back(flightData[i].MPU_gyroZ);
		flightDataLine.push_back(flightData[i].H3LIS_accelY);
		flightDataLine.push_back(flightData[i].MS5607_pressure);
		flightDataLine.push_back(flightData[i].MS5607_temperature);
		flightDataLine.push_back(flightData[i].voltageAnalog);
		flightDataLine.push_back(flightData[i].continuityApo);
		flightDataLine.push_back(flightData[i].continuityMain);
		flightDataLine.push_back(flightData[i].continuityThird);

		flightDataArray.push_back(flightDataLine);
	}
	return flightDataArray;
}

void dataIO::mapFlightArrayToStructure(const vector<vector<int>>& flightDataArray) {

	for (int i = 0; i != flightDataArray.size(); i++) {

		debugFlightData flightDataLine;
		flightDataLine.time =				flightDataArray[i][0];
		flightDataLine.flightStatus =		flightDataArray[i][1];
		flightDataLine.altitude =			flightDataArray[i][2];
		flightDataLine.velocity =			flightDataArray[i][3];
		flightDataLine.acceleration =		flightDataArray[i][4];
		flightDataLine.altitudeBaro =		flightDataArray[i][5];
		flightDataLine.accelAxial =			flightDataArray[i][6];
		flightDataLine.pressure =			flightDataArray[i][7];
		flightDataLine.temperature =		flightDataArray[i][8];
		flightDataLine.MPU_accelX =			flightDataArray[i][9];
		flightDataLine.MPU_accelY =			flightDataArray[i][10];
		flightDataLine.MPU_accelZ =			flightDataArray[i][11];
		flightDataLine.MPU_gyroX =			flightDataArray[i][12];
		flightDataLine.MPU_gyroY =			flightDataArray[i][13];
		flightDataLine.MPU_gyroZ =			flightDataArray[i][14];
		flightDataLine.H3LIS_accelY =		flightDataArray[i][15];
		flightDataLine.MS5607_pressure =	flightDataArray[i][16];
		flightDataLine.MS5607_temperature = flightDataArray[i][17];
		flightDataLine.voltageAnalog =		flightDataArray[i][18];
		flightDataLine.continuityApo =		flightDataArray[i][19];
		flightDataLine.continuityMain =		flightDataArray[i][20];
		flightDataLine.continuityThird =	flightDataArray[i][21];

		flightData.push_back(flightDataLine);
	} 
}
