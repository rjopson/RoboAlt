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
	
	vector<int> startupArray;
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
			if (count == 1) { startupArray = row; }
			if (count > 2) { flightDataArray.push_back(row); }
			count++;
		}
		mapStartupArrayToStructure(startupArray);
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

		vector<string> startupHeader = setStartupHeader();
		for (int i = 0; i != startupHeader.size(); i++) {
			file << startupHeader[i];
			file << writeDelimeter(i, startupHeader.size());
		}

		vector<int> startup = mapStartupArrayToStructure();
		for (int i = 0; i != startup.size(); i++) {
			file << startup[i];
			file << writeDelimeter(i, startup.size());
		}

		vector<string> flightDataHeader = setFlightDataHeader();
		for (int i = 0; i != flightDataHeader.size(); i++) {
			file << flightDataHeader[i];
			file << writeDelimeter(i, flightDataHeader.size());
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

void dataIO::getDataInfo(const int& versionIn, const int& dataMemoryBankIn, const int& lineCountIn) {
	version = versionIn;
	dataMemoryBank = dataMemoryBankIn;
	lineCount = lineCountIn;
}
void dataIO::getCalibration(const calibrationData& calibrationIn) {
	calibration.mpuPad = calibrationIn.mpuPad;
	calibration.h3lisPad = calibrationIn.h3lisPad;
	calibration.pressurePad = calibrationIn.pressurePad;
	calibration.temperaturePad = calibrationIn.temperaturePad;

	for (int i = 0; i != 6; i++) {
		calibration.C[i] = calibrationIn.C[i];
	}
}
void dataIO::getDataLine(const debugFlightData& data) {
	
	debugFlightData dataLine;
	
	dataLine.time = data.time;
	dataLine.flightStatus = data.flightStatus;
	dataLine.altitude = data.altitude;
	dataLine.velocity = data.velocity;
	dataLine.acceleration = data.acceleration;
	dataLine.altitudeBaro = data.altitudeBaro;
	dataLine.accelAxial = data.accelAxial;
	dataLine.pressure = data.pressure;
	dataLine.temperature = data.temperature;
	dataLine.MPU_accelX = data.MPU_accelX;
	dataLine.MPU_accelY = data.MPU_accelY;
	dataLine.MPU_accelZ = data.MPU_accelZ;
	dataLine.MPU_gyroX = data.MPU_gyroX;
	dataLine.MPU_gyroY = data.MPU_gyroY;
	dataLine.MPU_gyroZ = data.MPU_gyroZ;
	dataLine.H3LIS_accelY = data.H3LIS_accelY;
	dataLine.MS5607_pressure = data.MS5607_pressure;
	dataLine.MS5607_temperature = data.MS5607_temperature;
	dataLine.voltageAnalog = data.voltageAnalog;
	dataLine.continuityApo = data.continuityApo;
	dataLine.continuityMain = data.continuityMain;
	dataLine.continuityThird = data.continuityThird;

	flightData.push_back(dataLine);
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

void dataIO::mapStartupArrayToStructure(const vector<int>& startupArray) {

	//version = startupArray[0];
	//dataMemoryBank = startupArray[1];
	//lineCount = startupArray[2];
	//calibration.mpuPad = startupArray[3];
	//calibration.h3lisPad = startupArray[4];
	//calibration.pressurePad = startupArray[5];
	//calibration.temperaturePad = startupArray[6];
	//calibration.C[0] = startupArray[7];
	//calibration.C[1] = startupArray[8];
	//calibration.C[2] = startupArray[9];
	//calibration.C[3] = startupArray[10];
	//calibration.C[4] = startupArray[11];
	//calibration.C[5] = startupArray[12];

	
	calibration.mpuPad = startupArray[0];
	calibration.h3lisPad = startupArray[1];
	calibration.pressurePad = startupArray[2];
	calibration.temperaturePad = startupArray[3];
	calibration.voltageStartup = startupArray[4];
	calibration.C[0] = startupArray[5];
	calibration.C[1] = startupArray[6];
	calibration.C[2] = startupArray[7];
	calibration.C[3] = startupArray[8];
	calibration.C[4] = startupArray[9];
	calibration.C[5] = startupArray[10];
	lineCount = startupArray[11];
}

vector<int> dataIO::mapStartupArrayToStructure() {

	vector<int> startupArray;

	//startupArray.push_back(version);
	//startupArray.push_back(dataMemoryBank);
	//startupArray.push_back(lineCount);
	//startupArray.push_back(calibration.mpuPad);
	//startupArray.push_back(calibration.h3lisPad);
	//startupArray.push_back(calibration.pressurePad);
	//startupArray.push_back(calibration.temperaturePad);
	//startupArray.push_back(calibration.C[0]);
	//startupArray.push_back(calibration.C[1]);
	//startupArray.push_back(calibration.C[2]);
	//startupArray.push_back(calibration.C[3]);
	//startupArray.push_back(calibration.C[4]);
	//startupArray.push_back(calibration.C[5]);
	
	startupArray.push_back(calibration.mpuPad);
	startupArray.push_back(calibration.h3lisPad);
	startupArray.push_back(calibration.pressurePad);
	startupArray.push_back(calibration.temperaturePad);
	startupArray.push_back(calibration.voltageStartup);
	startupArray.push_back(calibration.C[0]);
	startupArray.push_back(calibration.C[1]);
	startupArray.push_back(calibration.C[2]);
	startupArray.push_back(calibration.C[3]);
	startupArray.push_back(calibration.C[4]);
	startupArray.push_back(calibration.C[5]);
	startupArray.push_back(lineCount);

	return startupArray; 
}

vector<string> dataIO::setStartupHeader() {

	vector<string> startupHeader;

	//startupHeader.push_back("Version");
	//startupHeader.push_back("Memory Bank");
	//startupHeader.push_back("Line Count");
	//startupHeader.push_back("MPU Pad");
	//startupHeader.push_back("H3LIS Pad");
	//startupHeader.push_back("MS5607 Pressure Pad");
	//startupHeader.push_back("Ms5607 Temperature Pad");
	//startupHeader.push_back("C1");
	//startupHeader.push_back("C2");
	//startupHeader.push_back("C3");
	//startupHeader.push_back("C4");
	//startupHeader.push_back("C5");
	//startupHeader.push_back("C6");

	startupHeader.push_back("MPU Pad");
	startupHeader.push_back("H3LIS Pad");
	startupHeader.push_back("MS5607 Pressure Pad");
	startupHeader.push_back("MS5607 Temperature Pad");
	startupHeader.push_back("Voltage Pad");
	startupHeader.push_back("C1");
	startupHeader.push_back("C2");
	startupHeader.push_back("C3");
	startupHeader.push_back("C4");
	startupHeader.push_back("C5");
	startupHeader.push_back("C6");
	startupHeader.push_back("Line Count");

	return startupHeader;
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

vector<string> dataIO::setFlightDataHeader() {

	vector<string> flightDataHeader;

	flightDataHeader.push_back("Time (ms)");
	flightDataHeader.push_back("Status");
	flightDataHeader.push_back("Altitude (mm)");
	flightDataHeader.push_back("Velocity (mm/s)");
	flightDataHeader.push_back("Acceleration (mm/s2)");
	flightDataHeader.push_back("Altitude Barometric (mm)");
	flightDataHeader.push_back("Acceleration Axial (mm/s2)");
	flightDataHeader.push_back("Pressure (Pa)");
	flightDataHeader.push_back("Temperature (100*degC)");
	flightDataHeader.push_back("Acceleration MPU_X (2byte 16g)");
	flightDataHeader.push_back("Acceleration MPU_Y (2byte 16g)");
	flightDataHeader.push_back("Acceleration MPU_Z (2byte 16g)");
	flightDataHeader.push_back("Rotation MPU_X (2byte 2000deg/s)");
	flightDataHeader.push_back("Rotation MPU_Y (2byte 2000deg/s)");
	flightDataHeader.push_back("Rotation MPU_Z (2byte 2000deg/s)");
	flightDataHeader.push_back("Acceleration H3LIS Y (2byte 200g)");
	flightDataHeader.push_back("MS5607 Pressure (4byte)");
	flightDataHeader.push_back("MS5607 Temperature (4byte)");
	flightDataHeader.push_back("Voltage (10bit)");
	flightDataHeader.push_back("Continuity Apogee (10bit)");
	flightDataHeader.push_back("Continuity Main (10bit)");
	flightDataHeader.push_back("Continuity Third (10bit)");

	return flightDataHeader;
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
