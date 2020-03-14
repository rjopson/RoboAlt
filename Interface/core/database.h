
#ifndef _DATABASE_H
#define _DATABASE_H

#include <vector>

#include "atmosphere.h"
#include "material.h"
#include "motor.h"
#include "rocket.h"

class Database
{
public:
	Database();
	~Database();

	std::vector<Atmosphere*> atmosphereList;
	std::vector<Material*> materialList;
	std::vector<Motor*> motorList;
	std::vector<Rocket*> rocketList;

	void addDatabaseMaterials(std::string in_path);
	void addDatabaseMotors(std::string in_path);
	void addUserMaterials(std::string in_path);
	void addUserMotors(std::string in_path);

	void createRocket();
	void deleteRocket();
};
#endif

