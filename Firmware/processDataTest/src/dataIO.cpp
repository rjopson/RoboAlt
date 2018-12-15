/*
 * dataIO.h
 *
 * File I/O for test data. Read and write text file like embedded hardware outputs
 */

#include "dataIO.h"

/* Default constructor
 */
dataIO::dataIO(string filePathReadIn, string filePathWriteIn) {
	filePathRead = filePathReadIn;
	filePathWrite = filePathWriteIn;
}

vector<savedFlightData> dataIO::readFromCSV() {
	
	//Define variables used to read data 
	const int bufferLength = 100;
	char buffer[bufferLength];
	vector<vector<int>> flightDataArray;

	stringstream ss;
	ifstream readFile(filePathRead);

	if (!readFile.is_open()) {
		cout << "Unable to open file" << '\n';
	}
	else {

		//read file
		while (ss) {
			vector<int> row;
			readFile.getline(buffer, bufferLength);
			ss << buffer;

			for (int j = 0; j != columns; j++) {
				ss.getline(buffer, 20, ',');
				row.push_back(atoi(buffer));
			}
			flightDataArray.push_back(row);

			ss << "";
			ss.clear();
		}
	}

}

void dataIO::writeToCSV(vector<savedFlightData> flightData) {

}

/*
0	uint32_t time; //(ms) //time used for filtering functions
1	uint8_t flightStatus;
2	int32_t altitude; //(cm) Kalman filtered altitude used in flight logic
3	int32_t velocity; //(cm/s) Kalman filtered velocity used in flight logic
4	int32_t acceleration; //(cm/s^2) Kalman filtered acceleration used in flight logic
5	int32_t altitudeBaro; //(cm) unfiltered barometric altitude
6	int32_t accelAxial; //(cm/s^2) axial acceleration, chosen between MPU and H3LIS converted to engineering units, gravity subtracted
7	uint32_t pressure; //(Pascal)
8	int32_t temperature; //(100*degC)
9	int16_t MPU_accelX;
10	int16_t MPU_accelY;
11	int16_t MPU_accelZ; //(16bit at 16g resolution) low g accelerometer measurements
12	int16_t MPU_gyroX;
13	int16_t MPU_gyroY;
14	int16_t MPU_gyroZ; //(16bit at 2000deg/s resolution) gyro measurements
15	int16_t H3LIS_accelY; //16bit at 200g seolution high g accelerometer
16	uint32_t MS5607_pressure; //raw 4 byte pressure value from sensor
17	uint32_t MS5607_temperature; //raw 4 byte temperature value from sensor
18	uint16_t voltageAnalog; //10 bit arduino
19	uint16_t continuityApo;
20	uint16_t continuityMain;
21	uint16_t continuityThird; */

vector<vector<int>> dataIO::mapStructureToArray(vector<savedFlightData> flightDataStructure) {

	vector<vector<int>> flightDataArray;

	for (int i = 0; i != flightDataStructure.size(); i++) {

		flightDataArray[i][0] = flightDataStructure[i].time;
		flightDataArray[i][1] = flightDataStructure[i].flightStatus;
		flightDataArray[i][2] = flightDataStructure[i].altitude;
		flightDataArray[i][3] = flightDataStructure[i].velocity;
		flightDataArray[i][4] = flightDataStructure[i].acceleration;
		flightDataArray[i][5] = flightDataStructure[i].altitudeBaro;
		flightDataArray[i][6] = flightDataStructure[i].accelAxial;
		flightDataArray[i][7] = flightDataStructure[i].pressure;
		flightDataArray[i][8] = flightDataStructure[i].temperature;
		flightDataArray[i][9] = flightDataStructure[i].MPU_accelX;
		flightDataArray[i][10] = flightDataStructure[i].MPU_accelY;
		flightDataArray[i][11] = flightDataStructure[i].MPU_accelZ;
		flightDataArray[i][12] = flightDataStructure[i].MPU_gyroX;
		flightDataArray[i][13] = flightDataStructure[i].MPU_gyroY;
		flightDataArray[i][14] = flightDataStructure[i].MPU_gyroZ;
		flightDataArray[i][15] = flightDataStructure[i].H3LIS_accelY;
		flightDataArray[i][16] = flightDataStructure[i].MS5607_pressure;
		flightDataArray[i][17] = flightDataStructure[i].MS5607_temperature;
		flightDataArray[i][18] = flightDataStructure[i].voltageAnalog;
		flightDataArray[i][19] = flightDataStructure[i].continuityApo;
		flightDataArray[i][20] = flightDataStructure[i].continuityMain;
		flightDataArray[i][21] = flightDataStructure[i].continuityThird;
	}
	return flightDataArray;
}

vector<savedFlightData> dataIO::mapArrayToStructure(vector<vector<int>> flightDataArray) {

	vector<savedFlightData> flightDataStructure;

	for (int i = 0; i != flightDataArray.size(); i++) {

		flightDataStructure[i].time =				flightDataArray[i][0];
		flightDataStructure[i].flightStatus =		flightDataArray[i][1];
		flightDataStructure[i].altitude =			flightDataArray[i][2];
		flightDataStructure[i].velocity =			flightDataArray[i][3];
		flightDataStructure[i].acceleration =		flightDataArray[i][4];
		flightDataStructure[i].altitudeBaro =		flightDataArray[i][5];
		flightDataStructure[i].accelAxial =			flightDataArray[i][6];
		flightDataStructure[i].pressure =			flightDataArray[i][7];
		flightDataStructure[i].temperature =		flightDataArray[i][8];
		flightDataStructure[i].MPU_accelX =			flightDataArray[i][9];
		flightDataStructure[i].MPU_accelY =			flightDataArray[i][10];
		flightDataStructure[i].MPU_accelZ =			flightDataArray[i][11];
		flightDataStructure[i].MPU_gyroX =			flightDataArray[i][12];
		flightDataStructure[i].MPU_gyroY =			flightDataArray[i][13];
		flightDataStructure[i].MPU_gyroZ =			flightDataArray[i][14];
		flightDataStructure[i].H3LIS_accelY =		flightDataArray[i][15];
		flightDataStructure[i].MS5607_pressure =	flightDataArray[i][16];
		flightDataStructure[i].MS5607_temperature = flightDataArray[i][17];
		flightDataStructure[i].voltageAnalog =		flightDataArray[i][18];
		flightDataStructure[i].continuityApo =		flightDataArray[i][19];
		flightDataStructure[i].continuityMain =		flightDataArray[i][20];
		flightDataStructure[i].continuityThird =	flightDataArray[i][21];
	}
	return flightDataStructure;
}
