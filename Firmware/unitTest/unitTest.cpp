// unitTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "gtest/gtest.h"

#include "IMU.h"
#include "baroAndTemp.h"
#include "calculateAltitude.h"
#include "matrixMath.h"

#define TWO_BYTES		32767

TEST(sample_test_case, sample_test)
{
	EXPECT_EQ(1, 1);
}

TEST(IMU, orientation) {
	IMU imu;
	//Orientation up
	EXPECT_EQ(1, imu.setOrientation(2050));
	//Orientation down
	EXPECT_EQ(-1, imu.setOrientation(-2050));
}
TEST(IMU, mapFunction) {
	IMU imu;
	//Positive
	EXPECT_EQ(70, imu.map(7, -10, 10, -100, 100));
	//Negative
	EXPECT_EQ(-60, imu.map(-6, -10, 10, -100, 100));
}
TEST(IMU, chooseAccelerometer) {
	IMU imu;
	//below 16 g's
	EXPECT_EQ(1, imu.chooseAccelerometer(TWO_BYTES - 6));
	//above 16 g's
	EXPECT_EQ(0, imu.chooseAccelerometer(TWO_BYTES - 4));
}
TEST(IMU, mapAcceleration_eitherAccelerometer) {
	IMU imu;
	//MPU positive
	EXPECT_EQ(15690, imu.mapAcceleration(TWO_BYTES, TWO_BYTES, 15690));
	//MPU negative
	EXPECT_EQ(-15690, imu.mapAcceleration(-TWO_BYTES, TWO_BYTES, 15690));
	//H3LIS positive
	EXPECT_EQ(196120, imu.mapAcceleration(TWO_BYTES, TWO_BYTES, 196120));
	//H3LIS positive
	EXPECT_EQ(-196120, imu.mapAcceleration(TWO_BYTES, TWO_BYTES, -196120));
}
TEST(baroAndTemp, temperatures) {
	uint16_t C[6] = { 46372, 43981, 29059, 27842, 31553, 28165 };
	baroAndTemp baroTemp;
	baroTemp.fetchCalibrationCoefficients(C);

	//Typical temperature
	EXPECT_EQ(2000, baroTemp.calculateTemperature(8077636));
	//low temperature
	EXPECT_EQ(657, baroTemp.calculateTemperature(7677636));
	//minimum temperature
	EXPECT_EQ(-25121, baroTemp.calculateTemperature(0));
	//maximum temperature
	EXPECT_EQ(31209, baroTemp.calculateTemperature(16777216));
}
TEST(baroAndTemp, pressures) {
	uint16_t C[6] = { 46372, 43981, 29059, 27842, 31553, 28165 };
	baroAndTemp baroTemp;
	baroTemp.fetchCalibrationCoefficients(C);

	//high pressure
	EXPECT_EQ(110002, baroTemp.calculatePressure(6465444, 8077636));
	//max pressure
	EXPECT_EQ(120174, baroTemp.calculatePressure(6695444, 8077636));
	//low pressure
	EXPECT_EQ(1000, baroTemp.calculatePressure(4000100, 7677636));
}
TEST(calculateAltitude, altitudes) {
	calculateAltitude alt;

	EXPECT_EQ(-39973, alt.calculateAltitudeMSL(106220));	//-400,
	EXPECT_EQ(1, alt.calculateAltitudeMSL(101325));			//0,
	EXPECT_EQ(149996, alt.calculateAltitudeMSL(84560));		//1500,
	EXPECT_EQ(299923, alt.calculateAltitudeMSL(70121));		//3000,
	EXPECT_EQ(449780, alt.calculateAltitudeMSL(57752));		//4500,
	EXPECT_EQ(599546, alt.calculateAltitudeMSL(47217));		//6000,
	EXPECT_EQ(749285, alt.calculateAltitudeMSL(38299));		//7500,
	EXPECT_EQ(898891, alt.calculateAltitudeMSL(30800));		//9000,
	EXPECT_EQ(1048437, alt.calculateAltitudeMSL(24540));	//10500
	EXPECT_EQ(1197819, alt.calculateAltitudeMSL(19399));	//12000
	EXPECT_EQ(1347260, alt.calculateAltitudeMSL(15327));	//13500
	EXPECT_EQ(1496874, alt.calculateAltitudeMSL(12112));	//15000
	EXPECT_EQ(1646694, alt.calculateAltitudeMSL(9571));		//16500
	EXPECT_EQ(1796432, alt.calculateAltitudeMSL(7565));		//18000
	EXPECT_EQ(1945545, alt.calculateAltitudeMSL(5980));		//19500
	EXPECT_EQ(2097157, alt.calculateAltitudeMSL(4727));		//21000
	EXPECT_EQ(2259910, alt.calculateAltitudeMSL(3680));		//22600
	EXPECT_EQ(2399704, alt.calculateAltitudeMSL(2955));		//24000
	EXPECT_EQ(2567501, alt.calculateAltitudeMSL(2302));		//25600
	EXPECT_EQ(2718480, alt.calculateAltitudeMSL(1856));		//27000
	EXPECT_EQ(2896149, alt.calculateAltitudeMSL(1458));		//28600
	EXPECT_EQ(3017572, alt.calculateAltitudeMSL(1186));		//30000
}
TEST(matrixMath, defineMatrix) {

	float elements[6] = { 1.3, 25048.51, 310.78, 0, 75.8, 108.1}; //define test elements
	matrixMath testMatrix(3, 2, elements); //define test matrix
	matrixMath test2(testMatrix); //define with alternate overload

	EXPECT_NEAR(1.3, testMatrix.getValue(0, 0), .05);
	EXPECT_NEAR(25048.51, testMatrix.getValue(0, 1), .05);
	EXPECT_NEAR(310.78, testMatrix.getValue(1, 0), .05);
	EXPECT_NEAR(0, testMatrix.getValue(1, 1), .05);
	EXPECT_NEAR(75.8, testMatrix.getValue(2, 0), .05);
	EXPECT_NEAR(108.1, testMatrix.getValue(2, 1), .05);
	EXPECT_NEAR(108.1, test2.getValue(2, 1), .05);
}
TEST(matrixMath, equals) {

	float elements[4] = { 1.5, 24.75, 210.8, 0 }; //define test elements
	matrixMath testMatrix(2, 2, elements); //define test matrix
	matrixMath test2(2, 2);
	test2 = testMatrix;

	EXPECT_NEAR(1.5, test2.getValue(0, 0), .05);
	EXPECT_NEAR(24.75, test2.getValue(0, 1), .05);
	EXPECT_NEAR(210.8, test2.getValue(1, 0), .05);
	EXPECT_NEAR(0, test2.getValue(1, 1), .05); 
}
TEST(matrixMath, addition2x2) {

	float elements1[4] = { 4, 2, 15, 0 }; //define test elements
	matrixMath test1(2, 2, elements1); //define test matrix
	float elements2[4] = { 1, 4, 0, 10 };
	matrixMath test2(2, 2, elements2);

	matrixMath result(test1 + test2);	

	EXPECT_NEAR(5, result.getValue(0, 0), .05);
	EXPECT_NEAR(6, result.getValue(0, 1), .05);
	EXPECT_NEAR(15, result.getValue(1, 0), .05);
	EXPECT_NEAR(10, result.getValue(1, 1), .05);
}
TEST(matrixMath, subtraction2x2) {

	float elements1[4] = { 4, 2, 15, 0 }; //define test elements
	matrixMath test1(2, 2, elements1); //define test matrix
	float elements2[4] = { 1, 4, 0, 10 };
	matrixMath test2(2, 2, elements2);

	matrixMath result(test1 - test2);

	EXPECT_NEAR(3, result.getValue(0, 0), .05);
	EXPECT_NEAR(-2, result.getValue(0, 1), .05);
	EXPECT_NEAR(15, result.getValue(1, 0), .05);
	EXPECT_NEAR(-10, result.getValue(1, 1), .05);
}
TEST(matrixMath, multiplication2x2) {

	float elements1[4] = { 4, 2, -15, 0 }; //define test elements
	matrixMath test1(2, 2, elements1); //define test matrix
	float elements2[4] = { 1, 4, 0, 10 };
	matrixMath test2(2, 2, elements2);

	matrixMath result(test1 * test2);

	EXPECT_NEAR(4, result.getValue(0, 0), .05);
	EXPECT_NEAR(36, result.getValue(0, 1), .05);
	EXPECT_NEAR(-15, result.getValue(1, 0), .05);
	EXPECT_NEAR(-60, result.getValue(1, 1), .05);
}
TEST(matrixMath, multiplication3x2_2x3) {

	float elements1[6] = { 4, 2, -15, 0, 8, 3}; //define test elements
	matrixMath test1(3, 2, elements1); //define test matrix
	float elements2[6] = { 1, 4, 28, 0, 10, 41 };
	matrixMath test2(2, 3, elements2);

	matrixMath result(test1 * test2);

	EXPECT_NEAR(4, result.getValue(0, 0), .05);
	EXPECT_NEAR(36, result.getValue(0, 1), .05);
	EXPECT_NEAR(194, result.getValue(0, 2), .05);
	EXPECT_NEAR(-15, result.getValue(1, 0), .05);
	EXPECT_NEAR(-60, result.getValue(1, 1), .05);
	EXPECT_NEAR(-420, result.getValue(1, 2), .05);
	EXPECT_NEAR(8, result.getValue(2, 0), .05);
	EXPECT_NEAR(62, result.getValue(2, 1), .05);
	EXPECT_NEAR(347, result.getValue(2, 2), .05);
}
TEST(matrixMath, transpose) {

	float elements1[6] = { 4, 2, -15, 0, 8, 3 }; //define test elements
	matrixMath test1(3, 2, elements1); //define test matrix

	matrixMath result(2, 3);

	result = test1.transpose();

	EXPECT_NEAR(4, result.getValue(0, 0), .05);
	EXPECT_NEAR(-15, result.getValue(0, 1), .05);
	EXPECT_NEAR(8, result.getValue(0, 2), .05);
	EXPECT_NEAR(2, result.getValue(1, 0), .05);
	EXPECT_NEAR(0, result.getValue(1, 1), .05);
	EXPECT_NEAR(3, result.getValue(1, 2), .05);
}
TEST(matrixMath, inverse2x2) {

	float elements1[6] = { 4, 2, 0, 8}; //define test elements
	matrixMath test1(2, 2, elements1); //define test matrix

	matrixMath result(2, 2);

	result = test1.inverse2x2();

	EXPECT_NEAR(0.25, result.getValue(0, 0), .05);
	EXPECT_NEAR(-0.0625, result.getValue(0, 1), .05);
	EXPECT_NEAR(0, result.getValue(1, 0), .05);
	EXPECT_NEAR(0.125, result.getValue(1, 1), .05);
}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	std::getchar(); // keep console window open until Return keystroke
}