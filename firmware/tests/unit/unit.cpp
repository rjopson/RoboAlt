// unitTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "gtest/gtest.h"

#define TEST_SWITCH 1

#include "IMU.h"
#include "baroAndTemp.h"
#include "calculateAltitude.h"
#include "matrixMath.h"
#include "flightLogic.h"
#include "voltage.h"

#define TWO_BYTES		32767

TEST(sample_test_case, sample_test)
{
	EXPECT_EQ(1, 1);
}

TEST(voltage, analogTo_mV)
{
	voltage voltage_mV;
	int32_t output = voltage_mV.battery(282);
	EXPECT_EQ(4271, output);
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
	EXPECT_EQ(156900, imu.mapAcceleration(TWO_BYTES, TWO_BYTES, 156900));
	//MPU negative
	EXPECT_EQ(-156900, imu.mapAcceleration(-TWO_BYTES, TWO_BYTES, 156900));
	//H3LIS positive
	EXPECT_EQ(1961200, imu.mapAcceleration(TWO_BYTES, TWO_BYTES, 1961200));
	//H3LIS positive
	EXPECT_EQ(-1961200, imu.mapAcceleration(TWO_BYTES, TWO_BYTES, -1961200));
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

	int tolerance = 362000; //362 m tolerance (error becomes larger at very low pressures)
	EXPECT_NEAR(-400000, alt.calculateAltitudeMSL(106220), tolerance);		//-400,
	EXPECT_NEAR(0, alt.calculateAltitudeMSL(101325), tolerance);			//0,
	EXPECT_NEAR(1500000, alt.calculateAltitudeMSL(84560), tolerance);		//1500,
	EXPECT_NEAR(3000000, alt.calculateAltitudeMSL(70121), tolerance);		//3000,
	EXPECT_NEAR(4500000, alt.calculateAltitudeMSL(57752), tolerance);		//4500,
	EXPECT_NEAR(6000000, alt.calculateAltitudeMSL(47217), tolerance);		//6000,
	EXPECT_NEAR(7500000, alt.calculateAltitudeMSL(38299), tolerance);		//7500,
	EXPECT_NEAR(9000000, alt.calculateAltitudeMSL(30800), tolerance);		//9000,
	EXPECT_NEAR(10500000, alt.calculateAltitudeMSL(24540), tolerance);		//10500
	EXPECT_NEAR(12000000, alt.calculateAltitudeMSL(19399), tolerance);		//12000
	EXPECT_NEAR(13500000, alt.calculateAltitudeMSL(15327), tolerance);		//13500
	EXPECT_NEAR(15000000, alt.calculateAltitudeMSL(12112), tolerance);		//15000
	EXPECT_NEAR(16500000, alt.calculateAltitudeMSL(9571), tolerance);		//16500
	EXPECT_NEAR(18000000, alt.calculateAltitudeMSL(7565), tolerance);		//18000
	EXPECT_NEAR(19500000, alt.calculateAltitudeMSL(5980), tolerance);		//19500
	EXPECT_NEAR(21000000, alt.calculateAltitudeMSL(4727), tolerance);		//21000
	EXPECT_NEAR(22600000, alt.calculateAltitudeMSL(3680), tolerance);		//22600
	EXPECT_NEAR(24000000, alt.calculateAltitudeMSL(2955), tolerance);		//24000
	EXPECT_NEAR(25600000, alt.calculateAltitudeMSL(2302), tolerance);		//25600
	EXPECT_NEAR(27000000, alt.calculateAltitudeMSL(1856), tolerance);		//27000
	EXPECT_NEAR(28600000, alt.calculateAltitudeMSL(1458), tolerance);		//28600
	EXPECT_NEAR(30000000, alt.calculateAltitudeMSL(1186), tolerance);		//30000
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

	float dT = 4.0;
	float test_data[9] = { 1.0, dT, dT*dT / 2.0, 0, 1.0, dT, 0, 0, 1.0 };
	matrixMath Test(3, 3, test_data);
	EXPECT_NEAR(1.0, Test.getValue(0, 0), .05);
	EXPECT_NEAR(4.0, Test.getValue(0, 1), .05);
	EXPECT_NEAR(8.0, Test.getValue(0, 2), .05);
	EXPECT_NEAR(0.0, Test.getValue(1, 0), .05);
	EXPECT_NEAR(1.0, Test.getValue(1, 1), .05);
	EXPECT_NEAR(4.0, Test.getValue(1, 2), .05);
	EXPECT_NEAR(0, Test.getValue(2, 0), .05);
	EXPECT_NEAR(0, Test.getValue(2, 1), .05);
	EXPECT_NEAR(1.0, Test.getValue(2, 2), .05);

	dT = 0.0158;
	float omega_data[9] = { 1.0, dT, dT*dT / 2.0, 0, 1.0, dT, 0, 0, 1.0 };
	matrixMath Omega(3, 3, omega_data);
	EXPECT_NEAR(1.0, Omega.getValue(0, 0), .001);
	EXPECT_NEAR(0.0158, Omega.getValue(0, 1), .001);
	EXPECT_NEAR(0.00012482, Omega.getValue(0, 2), .001);

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