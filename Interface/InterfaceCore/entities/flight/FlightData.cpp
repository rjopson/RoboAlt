#include "FlightData.h"



FlightData::FlightData() {

}

FlightData::~FlightData() {

}

void FlightData::populate(const Matrix<double>& data) {

	time = data.getColumn(0);
	altitude = data.getColumn(1);
	velocity = data.getColumn(2);
	acceleration = data.getColumn(3);
}
