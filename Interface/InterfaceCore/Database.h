
#ifndef _DATABASE_H
#define _DATABASE_H

#include "Atmosphere.h"
#include "Rocket.h"
#include <vector>

class Database
{
public:
	Database();
	~Database();

	std::vector<Atmosphere*> atmosphereList;
	std::vector<Rocket*> rocketList;

	/*Hold:
	-rockets
	-motors (read databases on open of program)
	-materials (read databases on open of program)
	-atmosphere models
	*/
};
#endif

