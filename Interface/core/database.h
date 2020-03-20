#ifndef _DATABASE_H
#define _DATABASE_H

#include <vector>

#include "atmosphere.h"
#include "material.h"
#include "motor.h"
#include "rocket.h"

class Database {
  public:
	Database();
	~Database();

	void CreateRocket(std::string name, std::string comments);
	Rocket* GetRocket(const int& id);
	Configuration* GetConfiguration(const int& id);
	Stage* GetStage(const int& id);
	Instance* GetInstance(const int& id);
	Part* GetPart(const int& id);
	SimulationStage* GetSimulationStage(const int& id);	

private:
	std::vector<Rocket*> rockets_;

};
#endif

//std::vector<Atmosphere*> atmosphereList;
	//std::vector<Material*> materialList;
	//std::vector<Motor*> motorList;


	//void addDatabaseMaterials(std::string in_path);
	//void addDatabaseMotors(std::string in_path);
	//void addUserMaterials(std::string in_path);
	//void addUserMotors(std::string in_path);

