/*
 Name:		ALT_H3LIS331DL.h

*/

#ifndef _H3LIS331DL_h
#define _H3LIS331DL_h

#include "I2C.h"

#define H3LIS331DL_DEFAULT_ADDRESS	  0x18 //0x19 //0x32
#define H3LIS331DL_CTRL_REG1		  0x20
#define H3LIS331DL_CTRL_REG2          0x21
#define H3LIS331DL_CTRL_REG3          0x22
#define H3LIS331DL_CTRL_REG4          0x23
#define H3LIS331DL_CTRL_REG5          0x24
#define H3LIS331DL_OUT_X_L            0x28
#define H3LIS331DL_OUT_X_H            0x29
#define H3LIS331DL_OUT_Y_L            0x2A
#define H3LIS331DL_OUT_Y_H            0x2B
#define H3LIS331DL_OUT_Z_L            0x2C
#define H3LIS331DL_OUT_Z_H            0x2D

class H3LIS331DL {
public:
	H3LIS331DL();

	void initialize(); //initialize sensor, get calibration coefficients
	int16_t getAccelerationY();

private:
	uint8_t devAddr;
	uint8_t buffer[2];

	void set_CTRL_REG1();
	void set_CTRL_REG2();
	void set_CTRL_REG3();
	void set_CTRL_REG4();
};

#endif