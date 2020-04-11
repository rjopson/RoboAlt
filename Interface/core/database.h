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

    //bool CurrentConfiguration(const int& id);
    //Configuration* CurrentConfiguration();
    //Rocket* CurrentRocket();

    void CreateMaterial(const std::string& name);
    void DeleteMaterial(Material* material);
    Material* GetMaterial(const std::string& name);

    void CreateRocket(const std::string& name);
    void DeleteRocket(Rocket* rocket);
    //Rocket* GetRocket(const int& id);
    Rocket* GetRocket(const std::string& name);

    void CreatePart(PartType part_type, const std::string& name, Rocket* rocket);
    void DeletePart(Part* part);
    Part* GetPart(const std::string& rocket_name, const std::string& part_name);
    Fins* GetFins(const std::string& rocket_name, const std::string& part_name);
    Nosecone* GetNosecone(const std::string& rocket_name, const std::string& part_name);
    TubeBody* GetTubeBody(const std::string& rocket_name, const std::string& part_name);

    void CreateConfiguration(const std::string& name, Rocket* rocket);
    void DeleteConfiguration(Configuration* configuration);
    Configuration* GetConfiguration(const std::string& rocket_name, const std::string& configuration_name);

    void CreateStage(const std::string& name, Configuration* configuration);
    void DeleteStage(Stage* stage);
    Stage* GetStage(const std::string& rocket_name, const std::string& configuration_name, const std::string& stage_name);
    
    void CreateInstance(const std::string& name, Part* part, Instance* parent);
    void CreateInstance(const std::string& name, Part* part, Stage* stage);
    void DeleteInstance(Instance* instance);
    Instance* GetInstance(const std::string& rocket_name, const std::string& instance_name);

    void CreateSimulation(const std::string& name, Configuration* configuration);
    void DeleteSimulation(Simulation* simulation);
    Simulation* GetSimulation(const std::string& rocket_name, const std::string& configuration_name, const std::string& simulation_name);
    void CreateSimulationUserCommand(Simulation* simulation, Stage* stage);
    void DeleteSimulationuserCommand(SimulationUserCommand* command);
    SimulationUserCommand* GetSimulationUserCommand();
    
    void CreateMotor();
    void CreateAtmosphere();
    void CreateDrag(Rocket* rocket);     

    double test_function(double input) {
        return input * 5.0;
    }

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
    void DeleteEntity(std::vector<T*> list, T* entity) {

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
    std::vector<Instance*> instances_;    
    std::vector<Material*> materials_;
    std::vector<Motor*> motors_;
    std::vector<Atmosphere*> atmosphere_models_;
    std::vector<Drag*> drag_models_;

    //Parts
    std::vector<Part*> parts_;
    std::vector<Bulkhead*> bulkheads_;
    std::vector<Fins*> fins_;
    std::vector<PointMass*> masses_;
    std::vector<Nosecone*> nosecones_;
    std::vector<Parachute*> parachutes_;
    std::vector<TubeBody*> body_tubes_;
    std::vector<TubeInner*> inner_tubes_;
};
#endif

