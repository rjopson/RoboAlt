
#ifndef _ROCKET_H
#define _ROCKET_H

#include <iostream>

class Rocket
{
public:
	Rocket(std::string in_name, std::string in_comments);
	~Rocket();

private:
	std::string name;
	std::string comments;

	//configuration list
	//instance list
	//part list
	//material list
	//motor list
	//simulation list
	//flight list

};
#endif


