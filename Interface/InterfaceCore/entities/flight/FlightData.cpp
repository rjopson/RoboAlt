#include "FlightData.h"



FlightData::FlightData() {

}

FlightData::~FlightData() {

}

void FlightData::print() {

	for (int i = 0; i != lengthVector; i++) {
		std::cout 
			<< time[i] << ", "
			<< altitudeMSL[i] << ", "
			<< velocity[i] << ", "
			<< acceleration[i]
			<< std::endl;
	}			
}
