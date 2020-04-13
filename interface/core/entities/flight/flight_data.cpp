#include "flight_data.h"

FlightData::FlightData() {}

FlightData::~FlightData() {}

void FlightData::Print() {

	for (int i = 0; i != length_vector_; i++) {
		std::cout 
			<< time_[i] << ", "
			<< altitude_msl_[i] << ", "
			<< velocity_[i] << ", "
			<< acceleration_[i]
			<< std::endl;
	}			
}
