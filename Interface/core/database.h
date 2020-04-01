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

    bool CurrentConfiguration(const int& id);
    Configuration* CurrentConfiguration();
    Rocket* CurrentRocket();

    bool CreateRocket();
    bool CreateConfiguration(const int& id_rocket);
    bool CreateStage(const int& id_configuration);
    bool CreateSimulation(const int& id_configuration);
    bool CreateInstance(const int& id_instance_parent);
    bool CreatePart(PartType part_type, const int& id_rocket);
    bool CreateMaterial();
    bool CreateMotor();
    bool CreateAtmosphere();
    bool CreateDrag(const int& id_rocket);

    bool DeleteRocket(const int& id);
    bool DeleteConfiguration(const int& id);
    bool DeleteStage(const int& id);
    bool DeleteSimulation(const int& id);
    bool DeleteInstance(const int& id);
    bool DeletePart(const int& id);  

    //T* GetEntity(EntityType entity_type, const int& id);

private:     
    /*Rocket* GetRocket(const int& id);
    Configuration* GetConfiguration(const int& id);
    Stage* GetStage(const int& id);
    Simulation* GetSimulation(const int& id);
    Instance* GetInstance(const int& id);
    Part* GetPart(const int& id);
    Material* GetMaterial(const int& id);
    Motor* GetMotor(const int& id);
    Atmosphere* GetAtmosphere(const int& id);
    Drag* GetDrag(const int& id); */    

	std::vector<Rocket*> rockets_;
    std::vector<Configuration*> configurations_;
    std::vector<Stage*> stages_;
    std::vector<Simulation*> simulations_;
    std::vector<Instance*> instances_;
    std::vector<Part*> parts_;
    std::vector<Material*> materials_;
    std::vector<Motor*> motors_;
    std::vector<Atmosphere*> atmosphere_models_;
    std::vector<Drag*> drag_models_;
};
#endif

