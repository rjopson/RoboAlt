#include "Experimental.h"

Experimental::Experimental(std::string in_name, std::string in_comments, const double& in_massPad, const double& in_elevationPad) :
	FlightData(in_name, in_comments, in_massPad, in_elevationPad) {

}

Experimental::~Experimental()
{
}
