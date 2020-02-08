#include "FlightData.h"



FlightData::FlightData(std::string in_name, std::string in_comments, const double& in_massPad, const double& in_elevationPad) {

	name = in_name;
	comments = in_comments;
	massPad = in_massPad;
	elevationPad = in_elevationPad;
}

FlightData::~FlightData() {

}
