
#ifndef _EXPERIMENTAL_H
#define _EXPERIMENTAL_H

#include "FlightData.h"

class Experimental :
	public FlightData
{
public:
	Experimental(std::string in_name, std::string in_comments, const double& in_massPad, const double& in_elevationPad);
	~Experimental();


};
#endif

