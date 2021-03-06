#ifndef _ENTITY_MANAGER_H
#define _ENTITY_MANAGER_H

#include <vector>

#include "atmosphere.h"
#include "atmosphere_isa.h"
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

    Material* CreateMaterial();
    void AddMaterial(Material* material);
    void DeleteMaterial(Material* material);
    Material* GetMaterial(const std::string& name);
    Material* GetDefaultMaterial() const;

    Rocket* CreateRocket();
    void AddRocket(Rocket* rocket);
    void DeleteRocket(Rocket* rocket);
    //Rocket* GetRocket(const int& id);
    Rocket* GetRocket(const std::string& name);

    template <class T>
    T* CreatePart(Rocket* rocket);
    void AddPart(Part* part, Rocket* rocket);
    void DeletePart(Part* part);
    Part* GetPart(const std::string& rocket_name, const std::string& part_name);
    template <class T>
    T* GetPart(const std::string& rocket_name, const std::string& part_name) {
        return reinterpret_cast<T*>(GetPart(rocket_name, part_name));
    }

    Configuration* CreateConfiguration(Rocket* rocket);
    void AddConfiguration(Configuration* configuration, Rocket* rocket);
    void DeleteConfiguration(Configuration* configuration);
    Configuration* GetConfiguration(const std::string& rocket_name, const std::string& configuration_name);

    Stage* CreateStage(Configuration* configuration);
    void AddStage(Stage* stage, Configuration* configuration);
    void DeleteStage(Stage* stage);
    Stage* GetStage(const std::string& rocket_name, const std::string& configuration_name, const std::string& stage_name);
    
    PartInstance* CreatePartInstance(Part* part, PartInstance* parent);
    void AddPartInstance(PartInstance* instance);
    void DeletePartInstance(PartInstance* instance);
    PartInstance* GetPartInstance(const std::string& rocket_name, const std::string& instance_name);
    std::vector<PartInstance*> GetPartInstances(Part* part);

    Simulation* CreateSimulation(Configuration* configuration);
    void AddSimulation(Simulation* simulation, Configuration* configuration);
    void DeleteSimulation(Simulation* simulation);
    Simulation* GetSimulation(const std::string& rocket_name, const std::string& configuration_name, const std::string& simulation_name);
    
    Experiment* CreateFlight(Configuration* configuration);
    void AddFlight(Experiment* flight, Configuration* configuration);
    void DeleteFlight(Experiment* flight);
    Experiment* GetFlight(const std::string& rocket_name, const std::string& configuration_name, const std::string& flight_name);
    
    Motor* CreateMotor(const std::string& file_path);
    void AddMotor(Motor* motor);
    Motor* CreateMotor();
    void DeleteMotor(Motor* motor);
    Motor* GetMotor(const std::string& name);
    Motor* GetDefaultMotor() const;

    //void CreateAtmosphere(need path to data here?);
    Atmosphere* CreateAtmosphereISA();
    void DeleteAtmosphere(Atmosphere* atmosphere);
    //Atmosphere* GetAtmosphere(const std::string& name) const;
    Atmosphere* GetDefaultAtmosphere() const;

    //void CreateDrag(Rocket* rocket);     

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

	std::vector<Rocket*> rockets_;
    std::vector<Configuration*> configurations_;
    std::vector<Stage*> stages_;
    std::vector<Simulation*> simulations_;
    std::vector<Experiment*> flights_;
    std::vector<PartInstance*> instances_;    
    std::vector<Material*> materials_;
    std::vector<Motor*> motors_;
    std::vector<Atmosphere*> atmosphere_models_;
    std::vector<Drag*> drag_models_;
    std::vector<Part*> parts_;
    std::vector<SimulationUserCommand*> user_commands_;
    //std::vector<Bulkhead*> bulkheads_;
    //std::vector<Fins*> fins_;
    //std::vector<PointMass*> masses_;
    //std::vector<Nosecone*> nosecones_;
    //std::vector<Parachute*> parachutes_;
    //std::vector<TubeBody*> body_tubes_;
    //std::vector<TubeInner*> inner_tubes_;
};
#endif

