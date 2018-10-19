/*
 * sensorOffset.cpp
 *
 */

#include "sensorOffset.h"

 /* Default constructor
 */
template <class T>
sensorOffset<T>::sensorOffset() {

}

/*Set initial offset and filter gain	
 *
 */
template <class T>
void sensorOffset<T>::initialize(const T& offsetInitial, const uint8_t& filterGainIn) {
	offsetCurrent = offsetInitial;
	offsetFuture = offsetInitial;
	filterGain = filterGainIn;
	timeOffsetCurrent = 0;
}

/* Update offset with new data and time
 * Filter data, if it's been longer than UPDATE_TIME, set future offset to current
 */
template <class T>
void sensorOffset<T>::updateOffset(const T& sensorData, const uint32_t& time) {

	//Filter incoming sensor data
	offsetFuture = lowPassFilter(sensorData, offsetFuture, filterGain);

	//If it's been long enough, update current offset
	uint32_t timeDelta = time - timeOffsetCurrent;
	if (timeDelta > (uint32_t)UPDATE_TIME) {
		offsetCurrent = offsetFuture;
		timeOffsetCurrent = time;
	}
}

/* Implements simple low pass filter where gain is a value 0 < gain < 255 for int
 * low gain favors previous data
 */
template <class T>
T sensorOffset<T>::lowPassFilter(const T& sensorData, const T& previousData, const uint8_t& gain) {

	int32_t weightedPreviousData = (255 - gain)*previousData;
	int32_t weightedNewData = gain * sensorData;

	return (T)((weightedPreviousData + weightedNewData) / (int32_t)255);
}

//Explicit instantiation
template class sensorOffset<int16_t>;
template class sensorOffset<int32_t>;
