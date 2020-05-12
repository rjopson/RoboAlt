#include <pybind11/pybind11.h>
#include <pybind11/attr.h>
#include <pybind11/stl.h>
#include <pybind11/pytypes.h>

#include "entity_manager.h"

namespace py = pybind11;
using namespace pybind11::literals;

template<class T>
void SetAttributes(T* entity, py::dict dict) {
    py::object obj = py::cast(entity);
    for (auto item : dict) {
        obj.attr(item.first) = item.second;      
    }
    entity = py::cast<T*>(obj);
}

void init_entity_manager(py::module& m) {
    py::class_<EntityManager>(m, "EntityManager")
        .def(py::init<>())
        .def("create_material", [](EntityManager* self, py::kwargs kwargs) -> Material* {            
            Material* material = self->CreateMaterial();
            SetAttributes<Material>(material, kwargs);
            return material;
            }, py::return_value_policy::reference_internal)
        .def("delete_material", &EntityManager::DeleteMaterial, "material"_a)
        .def("get_material", &EntityManager::GetMaterial, "name"_a, py::return_value_policy::reference_internal)

        .def("get_default_atmosphere", &EntityManager::GetDefaultAtmosphere, py::return_value_policy::reference_internal)

        .def("create_motor", (Motor* (EntityManager::*)(const std::string&))& EntityManager::CreateMotor, "file_path"_a, py::return_value_policy::reference_internal)
        .def("create_motor", [](EntityManager* self, py::kwargs kwargs) -> Motor* {
            Motor* motor = self->CreateMotor();
            SetAttributes<Motor>(motor, kwargs);
            return motor;
            }, py::return_value_policy::reference_internal)
        .def("delete_motor", &EntityManager::DeleteMotor, "motor"_a)
        .def("get_motor", &EntityManager::GetMotor, "name"_a, py::return_value_policy::reference_internal)

        .def("create_rocket", [](EntityManager* self, py::kwargs kwargs) -> Rocket* {
            Rocket* rocket = self->CreateRocket();
            SetAttributes<Rocket>(rocket, kwargs);
            return rocket;
        }, py::return_value_policy::reference_internal)
        .def("delete_rocket", &EntityManager::DeleteRocket, "rocket"_a)
        .def("get_rocket", &EntityManager::GetRocket, "name"_a, py::return_value_policy::reference_internal)

        .def("create_configuration", [](EntityManager* self, Rocket* rocket, py::kwargs kwargs) -> Configuration* {
            Configuration* configuration = self->CreateConfiguration(rocket);
            SetAttributes<Configuration>(configuration, kwargs);
            return configuration;
            }, "rocket"_a, py::return_value_policy::reference_internal)
        .def("delete_configuration", &EntityManager::DeleteConfiguration, "configuration"_a)
        .def("get_configuration", &EntityManager::GetConfiguration, "rocket_name"_a, "configuration_name"_a, py::return_value_policy::reference_internal)

        .def("create_stage", [](EntityManager* self, Configuration* configuration, py::kwargs kwargs) -> Stage* {
                Stage* stage = self->CreateStage(configuration);
                SetAttributes<Stage>(stage, kwargs);
                return stage;
        }, "configuration"_a, py::return_value_policy::reference_internal)
        .def("delete_stage", &EntityManager::DeleteStage, "stage"_a)
        .def("get_stage", &EntityManager::GetStage, "rocket_name"_a, "configuration_name"_a, "stage_name"_a, py::return_value_policy::reference_internal)

        .def("create_part_instance", [](EntityManager* self, Part* part, PartInstance* parent, py::kwargs kwargs) -> PartInstance* {
			PartInstance* instance = self->CreatePartInstance(part, parent);
			SetAttributes<PartInstance>(instance, kwargs);
			return instance;
		}, "part"_a, "parent"_a, py::return_value_policy::reference_internal)
        .def("delete_part_instance", &EntityManager::DeletePartInstance, "part_instance"_a)
        .def("get_part_instance", &EntityManager::GetPartInstance, "rocket_name"_a, "instance_name"_a, py::return_value_policy::reference_internal)

        .def("create_part", [](EntityManager* self, PartType type, Rocket* rocket, py::kwargs kwargs) {
			Part* part;
			switch (type) {
				case PartType::BULKHEAD:
					part = self->CreatePart<Bulkhead>(rocket);
					SetAttributes<Bulkhead>(static_cast<Bulkhead*>(part), kwargs);
					return part;
				case PartType::FINS:
					part = self->CreatePart<Fins>(rocket);
					SetAttributes<Fins>(static_cast<Fins*>(part), kwargs);
					return part;
				case PartType::NOSECONE:
					part = self->CreatePart<Nosecone>(rocket);
					SetAttributes<Nosecone>(static_cast<Nosecone*>(part), kwargs);
					return part;
				case PartType::PARACHUTE:
					part = self->CreatePart<Parachute>(rocket);
					SetAttributes<Parachute>(static_cast<Parachute*>(part), kwargs);
					return part;
				case PartType::TUBE_BODY:
					part = self->CreatePart<TubeBody>(rocket);
					SetAttributes<TubeBody>(static_cast<TubeBody*>(part), kwargs);
					return part;
			}
		}, "type"_a, "rocket"_a, py::return_value_policy::reference_internal)
        .def("delete_part", &EntityManager::DeletePart, "part"_a)
        .def("get_part", [](EntityManager* self, const std::string& rocket_name, const std::string& part_name) {
			Part* part = self->GetPart(rocket_name, part_name);
			return part;
		}, "rocket_name"_a, "part_name"_a, py::return_value_policy::reference_internal)

        .def("create_flight", [](EntityManager* self, Configuration* configuration, py::kwargs kwargs) {
			Experiment* flight = self->CreateFlight(configuration);
			SetAttributes<Experiment>(flight, kwargs);
			return flight;
		}, "configuration"_a, py::return_value_policy::reference_internal)
        .def("delete_flight", &EntityManager::DeleteFlight, "flight"_a)
        .def("get_flight", &EntityManager::GetFlight, "rocket_name"_a, "configuration_name"_a, "flight_name"_a, py::return_value_policy::reference_internal)

        .def("create_simulation", [](EntityManager* self, Configuration* configuration, py::kwargs kwargs) {
			Simulation* simulation = self->CreateSimulation(configuration);
			SetAttributes<Simulation>(simulation, kwargs);
			return simulation;
		}, "configuration"_a, py::return_value_policy::reference_internal)
        .def("delete_simulation", &EntityManager::DeleteSimulation, "simulation"_a)
        .def("get_simulation", &EntityManager::GetSimulation, "rocket_name"_a, "configuration_name"_a, "simulation_name"_a, py::return_value_policy::reference_internal);
}
