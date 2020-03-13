
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

	//create/delete part
	//create/delete configuration



};
#endif


