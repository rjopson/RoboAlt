#ifndef _ENTITY_MANAGER_H
#define _ENTITY_MANAGER_H

#include <vector>

#include "atmosphere.h"
#include "material.h"
#include "motor.h"
#include "rocket.h"

class EntityManager {
  public:
	EntityManager();
	~EntityManager();

    //bool CurrentConfiguration(const int& id);
    //Configuration* CurrentConfiguration();
    //Rocket* CurrentRocket();

    Material* CreateMaterial(const std::string& name);
    void DeleteMaterial(Material* material);
    Material* GetMaterial(const std::string& name);

    Rocket* CreateRocket(const std::string& name);
    void DeleteRocket(Rocket* rocket);
    //Rocket* GetRocket(const int& id);
    Rocket* GetRocket(const std::string& name);

    template <class T>
    T* CreatePart(const std::string& name, Rocket* rocket);
    void DeletePart(Part* part);
    Part* GetPart(const std::string& rocket_name, const std::string& part_name);
    template <class T>
    T* GetPart(const std::string& rocket_name, const std::string& part_name) {
        return reinterpret_cast<T*>(GetPart(rocket_name, part_name));
    }

    Configuration* CreateConfiguration(const std::string& name, Rocket* rocket);
    void DeleteConfiguration(Configuration* configuration);
    Configuration* GetConfiguration(const std::string& rocket_name, const std::string& configuration_name);

    Stage* CreateStage(const std::string& name, Configuration* configuration);
    void DeleteStage(Stage* stage);
    Stage* GetStage(const std::string& rocket_name, const std::string& configuration_name, const std::string& stage_name);
    
    PartInstance* CreatePartInstance(const std::string& name, Part* part, PartInstance* parent);
    void DeletePartInstance(PartInstance* instance);
    PartInstance* GetPartInstance(const std::string& rocket_name, const std::string& instance_name);
    std::vector<PartInstance*> GetPartInstances(Part* part);

    Simulation* CreateSimulation(const std::string& name, Configuration* configuration);
    void DeleteSimulation(Simulation* simulation);
    Simulation* GetSimulation(const std::string& rocket_name, const std::string& configuration_name, const std::string& simulation_name);
    void CreateSimulationUserCommand(Simulation* simulation, Stage* stage);
    void DeleteSimulationuserCommand(SimulationUserCommand* command);
    SimulationUserCommand* GetSimulationUserCommand();
    
    Motor* CreateMotor(const std::string& file_path);
    void DeleteMotor(Motor* motor);
    Motor* GetMotor(const std::string& name);

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
        //throw std::invalid_argument("Entity does not exist.");
        return nullptr;
    }

    template <class T>
    void DeleteEntity(std::vector<T*>& list, T* entity) {
        auto it = std::find(list.begin(), list.end(), entity);
        if (it != list.end()) {
            delete (*it);
            (*it) = nullptr;
            list.erase(it);
        }
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
    std::vector<PartInstance*> instances_;    
    std::vector<Material*> materials_;
    std::vector<Motor*> motors_;
    std::vector<Atmosphere*> atmosphere_models_;
    std::vector<Drag*> drag_models_;

    //Parts
    std::vector<Part*> parts_;
    //std::vector<Bulkhead*> bulkheads_;
    //std::vector<Fins*> fins_;
    //std::vector<PointMass*> masses_;
    //std::vector<Nosecone*> nosecones_;
    //std::vector<Parachute*> parachutes_;
    //std::vector<TubeBody*> body_tubes_;
    //std::vector<TubeInner*> inner_tubes_;
};
#endif

