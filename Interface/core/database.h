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

    void CreateMaterial();
    void DeleteMaterial(Material* material);
    Material* GetMaterial(const int& id);

    void CreateRocket();
    void DeleteRocket(Rocket* rocket);
    Rocket* GetRocket(const int& id);
    Rocket* GetRocket(const std::string& name);

    void CreateConfiguration(Rocket* rocket);
    void DeleteConfiguration(Configuration* configuration);
    Configuration* GetConfiguration(const int& id);

    void CreateStage(Configuration* configuration);
    void DeleteStage(Stage* stage);
    void CreateSimulation(Configuration* configuration);
    void DeleteSimulation(Simulation* simulation);
    void CreateInstance(Part* part, Instance* parent);
    void DeleteInstance(Instance* instance);
    void CreatePart(PartType part_type, Rocket* rocket);
    void DeletePart(Part* part);
    
    void CreateMotor();
    void CreateAtmosphere();
    void CreateDrag(Rocket* rocket);       

private:     
    //Rocket* GetRocket(const int& id);

    template <class T>
    T* GetEntity(std::vector<T*> list, const int& id) {
        for (auto it = list.begin(); it != list.end(); it++) {
            if ((*it)->Id() == id) {
                return (*it);
            }
        }
        throw std::invalid_argument("Entity does not exist.");
    }

    template <class T>
    T* GetEntity(std::vector<T*> list, const std::string& name) {
        for (auto it = list.begin(); it != list.end(); it++) {
            if ((*it)->Name() == name) {
                return (*it);
            }
        }
        throw std::invalid_argument("Entity does not exist.");
    }

    /*
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

