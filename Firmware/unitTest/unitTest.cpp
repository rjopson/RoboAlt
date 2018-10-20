// unitTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "gtest/gtest.h"

#include "IMU.h"

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

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	std::getchar(); // keep console window open until Return keystroke
}