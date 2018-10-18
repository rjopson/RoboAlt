/*
 Name:		MS5607.h

*/

#ifndef _MS5607_h
#define _MS5607_h

#include "I2C.h"

#define MS5607_ADDRESS_HIGH				0x76 //address pin low (GND) for altimeter board
#define MS5607_ADDRESS_LOW				0x77 //address pin high (VCC) for altimeter board
#define MS5607_ADDRESS_DEFAULT			MS5607_ADDRESS_HIGH
#define MS5607_RESET	 				0x1E //reset

#define MS5607_PROM_READ  				0xA0 // initiate readout of PROM registers
#define MS5607_PROM_C1					0xA2 //calibration coefficient C1 read command
#define MS5607_PROM_C2					0xA4 //calibration coefficient C2 read command
#define MS5607_PROM_C3					0xA6 //calibration coefficient C3 read command
#define MS5607_PROM_C4					0xA8 //calibration coefficient C4 read command
#define MS5607_PROM_C5					0xAA //calibration coefficient C5 read command
#define MS5607_PROM_C6					0xAC //calibration coefficient C6 read command

#define MS5607_D1						0x48 //initiate digital conversion for pressure
#define MS5607_D2						0x58 //initiate digital conversion for temperature
#define MS5607_ADC_READ					0x00 //I2C ADC read sequence to get 24 bit raw pressure or temp data

#define MS5607_AVERAGE_VALUES			10 //number of values to average for getAverage functions. Careful of increasing this number past 32 bit overflow

class MS5607 {
public:
	MS5607();

};

#endif