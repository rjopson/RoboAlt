/*
 Name:		ALT_H3LIS331DL.cpp

*/

#include "H3LIS331DL.h"

/* Default constructor
 */
H3LIS331DL::H3LIS331DL() {
	devAddr = H3LIS331DL_DEFAULT_ADDRESS;
}

/* Initialize sensor
 * Control power mode, data rate, output scaling, endian
 *
 */
void H3LIS331DL::initialize() {

	set_CTRL_REG1();
	set_CTRL_REG2();
	set_CTRL_REG3();
	set_CTRL_REG4();
}

/* Get y axis accelerometer readings as 16bit integers, (set to 200g's in configuration)
 * min value = -32768
 * max value = 32767
 * typical = 160 (can have +/- 2g offset, look for range of 320
 */
int16_t H3LIS331DL::getAccelerationY() {

	//Something going on with reading multiple bytes, so read data one byte at a time which works fine
	I2C::read(devAddr, H3LIS331DL_OUT_Y_H, 1, &buffer[0]);
	I2C::read(devAddr, H3LIS331DL_OUT_Y_L, 1, &buffer[1]);
	return (((int16_t)buffer[0]) << 8) | buffer[1];
}

/* Configure control register 1
 * register = 20
 * 0 bit7 = powerMode2
 * 0 bit6 = powerMode1
 * 1 bit5 = powerMode0
 * 0 bit4 = dataRate1
 * 0 bit3 = dataRate0
 * 1 bit2 = zEnable
 * 1 bit1 = yEnable
 * 1 bit0 = xEnable
 *
 * Power mode: 001 is normal mode
 * Data rate: 00 is 50hz output
 */
void H3LIS331DL::set_CTRL_REG1() {
	uint8_t registerWrite = 0x27; //00100111
	I2C::writeByte(devAddr, H3LIS331DL_CTRL_REG1, registerWrite);
}

/* Configure control register 2
* register = 21
* 0 bit7 = boot
* 0 bit6 = highPassFilterMode1
* 0 bit5 = highPassFilterMode0
* 0 bit4 = filteredDataSelection
* 0 bit3 = highPassFilterEnabledInterrupt2_1
* 0 bit2 = highPassFilterEnabledInterrupt2_0
* 0 bit1 = highPassFilterEnabledInterrupt1_1
* 0 bit0 = highPassFilterEnabledInterrupt1_0
*
*/
void H3LIS331DL::set_CTRL_REG2() {
	uint8_t registerWrite = 0x00; //00000000
	I2C::writeByte(devAddr, H3LIS331DL_CTRL_REG2, registerWrite);
}

/* Configure control register 3
* register = 22
* 0 bit7 = interruptActive (0 is high)
* 0 bit6 = drainSelection
* 0 bit5 = latchInterrupt2
* 0 bit4 = dataSignalInt2_1
* 0 bit3 = dataSignalInt2_0
* 0 bit2 = latchInterrupt1
* 0 bit1 = dataSignalInt1_1
* 0 bit0 = dataSignalInt1_0
*
*/
void H3LIS331DL::set_CTRL_REG3() {
	uint8_t registerWrite = 0x00; //00000000
	I2C::writeByte(devAddr, H3LIS331DL_CTRL_REG3, registerWrite);
}

/* Configure control register 4
* register = 23
* 1 bit7 = blockDataUpdate (1 requires high and low register to have new update)
* 0 bit6 = bigLittleEndianSelection (1 MSB @ lower)
* 0 bit5 = fullScale1
* 1 bit4 = fullScale0
* 0 bit3 = -
* 0 bit2 = -
* 0 bit1 = -
* 0 bit0 = SPI_interfaceMode
*
* Full scale: 01 is +/-200g
*/
void H3LIS331DL::set_CTRL_REG4() {
	uint8_t registerWrite = 0x10; //00010000  old value ->  0x90; //10010000
	I2C::writeByte(devAddr, H3LIS331DL_CTRL_REG4, registerWrite);
}