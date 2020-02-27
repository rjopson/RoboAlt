
#ifndef _ROCKET_H
#define _ROCKET_H

#include <iostream>
#include <vector>

#include "Configuration.h"
#include "Drag.h"
#include "Part.h"

class Rocket
{
public:
	Rocket(std::string in_name, std::string in_comments);
	~Rocket();

private:
	std::string name;
	std::string comments;

	std::vector<Configuration*> configurationList;
	std::vector<Part*> partList;
	std::vector<Drag*> dragRocketList; //external drag data 
	std::vector<Drag*> dragParachutesList; //external drag data 

	/*Hold:
	-configuration list
	-part list
	-drag list
	-
	*/

	//delete part - goes through rocket and deletes any instances
	//delete instance - nothing other than this
	//delete configuration - goes through rocket and deletes instances, simulations and flights within the configuration
	//delete drag - update simulation to use internal

};
#endif


