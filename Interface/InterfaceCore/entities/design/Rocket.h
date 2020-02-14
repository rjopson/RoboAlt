
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

	/*Hold:
	-configuration list
	-part list
	*/

};
#endif


