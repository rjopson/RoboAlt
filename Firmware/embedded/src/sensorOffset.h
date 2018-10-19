/*
 * sensorOffset.h
 *
 * This class manages the offset for each sensor while on the pad, before takeoff detection.
 * Offset is calculated by running simple low pass filter on sensor data, then storing that data.
 * Offsets are updated every UPDATE_TIME interval, so that data is current, but not affected by takeoff
 *
 */

#ifndef _ALT_MANAGEOFFSETS_h
#define _ALT_MANAGEOFFSETS_h

#include <inttypes.h>

#define UPDATE_TIME 4000 //update sensor offset every 2000 ms

template <class T> // T will be used for either int16_t (accelerometers) or uint32_t (pressure)
class sensorOffset {

public:
	sensorOffset();

	T offsetCurrent; //value of current offset to be used in data reduction calculations in other classes

	void initialize(const T& offsetInitial, const uint8_t& filterGainIn); //set initial offset and filter gain	
	void updateOffset(const T& sensorData, const uint32_t& time); //update offset with new data and time

private:
	uint32_t timeOffsetCurrent; //time of most recent set, current offset
	uint8_t filterGain; //user specified filter gain (0 < gain < 255), low gain favors previous data
	T offsetFuture; //constantly updated future offset, to be used when time delta > UPDATE_TIME

	T lowPassFilter(const T& sensorData, const T& previousData, const uint8_t& gain); //simple low pass filter
};
#endif