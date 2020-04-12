/*
 * dataIO.h
 *
 * File I/O for test data. Read and write text file like embedded hardware outputs
 */

#include "dataIO.h"

/* Default constructor
 */
dataIO::dataIO(const string& filePathIn) {
	filePath = filePathIn;
}

void dataIO::readFromCSV(userSettings_benchTest* userSettings,
	calibrationData* calibration, vector<debugFlightData> &flightData) {

	ifstream file(filePath);
	string line;
	string command;

	if (!file.is_open()) {
		cout << "Unable to open file" << '\n';
	}
	else {

		while (getline(file, line)) {

			if (line.at(0) == '*') { //Get command line
				command = dataIO::parseCommand(line, userSettings, calibration);
			}

			else if (command == "*DATA") {
				flightData.push_back(dataIO::parseFlightDataLine(line));
			}
		}
	}
	file.close();
}

string dataIO::parseCommand(const string& line, userSettings_benchTest* userSettings, calibrationData* calibration) {
	
	istringstream dataStream(line);
	vector<string> stringList;
	string data;
	
	while (getline(dataStream, data, ',')) {
		stringList.push_back(data);
	}

	if (stringList[0] == "*PAD_MPU") {
		calibration->mpuPad = stoi(stringList[1]);
	}
	else if (stringList[0] == "*PAD_H3LIS") {
		calibration->h3lisPad = stoi(stringList[1]);
	}
	else if (stringList[0] == "*PAD_PRESSURE") {
		calibration->pressurePad = stoi(stringList[1]);
	}
	else if (stringList[0] == "*PAD_TEMPERATURE") {
		calibration->temperaturePad = stoi(stringList[1]);
	}
	else if (stringList[0] == "*CALIBRATION_MS5607") {
		for (int i = 0; i != 6; i++) {
			calibration->C[i] = stoi(stringList[i+1]);
		}
	}
	else if (stringList[0] == "*PAD_VOLTAGE") {
		calibration->voltageStartup = stoi(stringList[1]);
	}
	else if (stringList[0] == "*APO_EVENT") {
		userSettings->apoFlightEvent = stoi(stringList[1]);
	}
	else if (stringList[0] == "*APO_DELAY") {
		userSettings->apoTimeDelay = stoi(stringList[1]);
	}
	else if (stringList[0] == "*MAIN_EVENT") {
		userSettings->mainFlightEvent = stoi(stringList[1]);
	}
	else if (stringList[0] == "*MAIN_DELAY") {
		userSettings->mainTimeDelay = stoi(stringList[1]);
	}
	else if (stringList[0] == "*3RD_EVENT") {
		userSettings->thirdFlightEvent = stoi(stringList[1]);
	}
	else if (stringList[0] == "*3RD_DELAY") {
		userSettings->thirdTimeDelay = stoi(stringList[1]);
	}
	else if (stringList[0] == "*ALTITUDE_MAIN") {
		userSettings->altitudeMainDeploy = stoi(stringList[1]);
	}
	else if (stringList[0] == "*DATA") {
		dataLines = stoi(stringList[1]);
	}	
	return stringList[0];
}

debugFlightData dataIO::parseFlightDataLine(string line) {

	istringstream dataStream(line);
	vector<string> stringList;
	string data;

	while (getline(dataStream, data, ',')) {
		stringList.push_back(data);
	}

	debugFlightData flightDataLine;	

	flightDataLine.time = stoi(stringList[0]);
	flightDataLine.flightStatus = stoi(stringList[1]);
	flightDataLine.altitude = stoi(stringList[2]);
	flightDataLine.velocity = stoi(stringList[3]);
	flightDataLine.acceleration = stoi(stringList[4]);
	flightDataLine.altitudeBaro = stoi(stringList[5]);
	flightDataLine.accelAxial = stoi(stringList[6]);
	flightDataLine.pressure = stoi(stringList[7]);
	flightDataLine.temperature = stoi(stringList[8]);
	flightDataLine.MPU_accelX = stoi(stringList[9]);
	flightDataLine.MPU_accelY = stoi(stringList[10]);
	flightDataLine.MPU_accelZ = stoi(stringList[11]);
	flightDataLine.MPU_gyroX = stoi(stringList[12]);
	flightDataLine.MPU_gyroY = stoi(stringList[13]);
	flightDataLine.MPU_gyroZ = stoi(stringList[14]);
	flightDataLine.H3LIS_accelY = stoi(stringList[15]);
	flightDataLine.MS5607_pressure = stoi(stringList[16]);
	flightDataLine.MS5607_temperature = stoi(stringList[17]);
	flightDataLine.voltageAnalog = stoi(stringList[18]);
	flightDataLine.continuityApo = stoi(stringList[19]);
	flightDataLine.continuityMain = stoi(stringList[20]);
	flightDataLine.continuityThird = stoi(stringList[21]);

	return flightDataLine;
}


void dataIO::writeToCSV(const userSettings_benchTest& userSettings,
	const calibrationData& calibration, vector<debugFlightData> flightData) {

	ofstream file(filePath);
	file.clear();

	if (!file.is_open()) {
		cout << "Unable to open file" << '\n';
	}
	else {
		file << dataIO::writeHeader(userSettings, calibration, flightData.size());

		for (int i = 0; i != flightData.size()-1; i++) {
			file << dataIO::writeFlightDataLine(flightData[i]);
		}
	}
	file.close();
}

string dataIO::writeHeader(const userSettings_benchTest& userSettings, const calibrationData& calibration, const int& dataLength) {

	string header;

	header.append("*VERSION,0.2\n");
	header.append(dataIO::writeHeaderLine("*PAD_MPU", calibration.mpuPad));
	header.append(dataIO::writeHeaderLine("*PAD_H3LIS", calibration.h3lisPad));
	header.append(dataIO::writeHeaderLine("*PAD_PRESSURE", calibration.pressurePad));
	header.append(dataIO::writeHeaderLine("*PAD_TEMPERATURE", calibration.temperaturePad));
	header.append(dataIO::writeHeaderLine("*CALIBRATION_MS5607", vector<int>(calibration.C, calibration.C + sizeof calibration.C / sizeof calibration.C[0])));
	header.append(dataIO::writeHeaderLine("*PAD_VOLTAGE", calibration.voltageStartup));
	header.append(dataIO::writeHeaderLine("*APO_EVENT", userSettings.apoFlightEvent));
	header.append(dataIO::writeHeaderLine("*APO_DELAY", userSettings.apoTimeDelay));
	header.append(dataIO::writeHeaderLine("*MAIN_EVENT", userSettings.mainFlightEvent));
	header.append(dataIO::writeHeaderLine("*MAIN_DELAY", userSettings.mainTimeDelay));
	header.append(dataIO::writeHeaderLine("*3RD_EVENT", userSettings.thirdFlightEvent));
	header.append(dataIO::writeHeaderLine("*3RD_DELAY", userSettings.thirdTimeDelay));
	header.append(dataIO::writeHeaderLine("*ALTITUDE_MAIN", userSettings.altitudeMainDeploy));
	header.append(dataIO::writeHeaderLine("*DATA", dataLength));

	return header;
}

string dataIO::writeHeaderLine(const string& command, const int& data) {

	string line;
	line.append(command + ',');
	line.append(to_string(data) + '\n');
	return line;
}

string dataIO::writeHeaderLine(const string& command, const vector<int> data) {

	string line;
	line.append(command + ',');

	for (int i = 0; i != data.size(); i++) {
		line.append(to_string(data[i]));
		
		if (i != data.size() - 1) {
			line.append(",");
		}
		else {
			line.append("\n");
		}
	}
	return line;
}

string dataIO::writeFlightDataLine(const debugFlightData& dataLine) {

	string dataString;

	dataString.append(to_string(dataLine.time) + ',');
	dataString.append(to_string(dataLine.flightStatus) + ',');
	dataString.append(to_string(dataLine.altitude) + ',');
	dataString.append(to_string(dataLine.velocity) + ',');
	dataString.append(to_string(dataLine.acceleration) + ',');
	dataString.append(to_string(dataLine.altitudeBaro) + ',');
	dataString.append(to_string(dataLine.accelAxial) + ',');
	dataString.append(to_string(dataLine.pressure) + ',');
	dataString.append(to_string(dataLine.temperature) + ',');
	dataString.append(to_string(dataLine.MPU_accelX) + ',');
	dataString.append(to_string(dataLine.MPU_accelY) + ',');
	dataString.append(to_string(dataLine.MPU_accelZ) + ',');
	dataString.append(to_string(dataLine.MPU_gyroX) + ',');
	dataString.append(to_string(dataLine.MPU_gyroY) + ',');
	dataString.append(to_string(dataLine.MPU_gyroZ) + ',');
	dataString.append(to_string(dataLine.H3LIS_accelY) + ',');
	dataString.append(to_string(dataLine.MS5607_pressure) + ',');
	dataString.append(to_string(dataLine.MS5607_temperature) + ',');
	dataString.append(to_string(dataLine.voltageAnalog) + ',');
	dataString.append(to_string(dataLine.continuityApo) + ',');
	dataString.append(to_string(dataLine.continuityMain) + ',');
	dataString.append(to_string(dataLine.continuityThird) + "\n");

	return dataString;
}

