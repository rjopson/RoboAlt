#include <pybind11/pybind11.h>
#include <pybind11/functional.h>
#include <pybind11/pytypes.h>

#include "entity_manager.h"

namespace py = pybind11;
using namespace pybind11::literals;

void init_entity_manager(py::module& m) {
    py::class_<EntityManager>(m, "EntityManager")
        .def(py::init<>())

        .def("create_material", &EntityManager::CreateMaterial, py::return_value_policy::reference_internal)
        .def("add_material", &EntityManager::AddMaterial, "material"_a)
        .def("delete_material", &EntityManager::DeleteMaterial, "material"_a)
        .def("get_material", &EntityManager::GetMaterial, "name"_a, py::return_value_policy::reference_internal)

        .def("create_motor", (Motor* (EntityManager::*)(const std::string&)) &EntityManager::CreateMotor, "file_path"_a, py::return_value_policy::reference_internal)
        .def("create_motor", (Motor* (EntityManager::*)()) &EntityManager::CreateMotor, py::return_value_policy::reference_internal)
        .def("add_motor", &EntityManager::AddMotor, "motor"_a)
        .def("delete_motor", &EntityManager::DeleteMotor, "motor"_a)
        .def("get_motor", &EntityManager::GetMotor, "name"_a, py::return_value_policy::reference_internal)

        .def("create_rocket", &EntityManager::CreateRocket, py::return_value_policy::reference_internal)
        .def("add_rocket", &EntityManager::AddRocket, "rocket"_a)
        .def("delete_rocket", &EntityManager::DeleteRocket, "rocket"_a)
        .def("get_rocket", &EntityManager::GetRocket, "name"_a, py::return_value_policy::reference_internal)

        .def("create_configuration", &EntityManager::CreateConfiguration, "rocket"_a, py::return_value_policy::reference_internal)
        .def("add_configuration", &EntityManager::AddConfiguration, "configuration"_a)
        .def("delete_configuration", &EntityManager::DeleteConfiguration, "configuration"_a)
        .def("get_configuration", &EntityManager::GetConfiguration, "rocket_name"_a, "configuration_name"_a, py::return_value_policy::reference_internal)

        .def("create_stage", &EntityManager::CreateStage, "configuration"_a, py::return_value_policy::reference_internal)
        .def("add_stage", &EntityManager::AddStage, "stage"_a)
        .def("delete_stage", &EntityManager::DeleteStage, "stage"_a)
        .def("get_stage", &EntityManager::GetStage, "rocket_name"_a, "configuration_name"_a, "stage_name"_a, py::return_value_policy::reference_internal)

        .def("create_part_instance", &EntityManager::CreatePartInstance, "part"_a, "parent"_a, py::return_value_policy::reference_internal)
        .def("add_part_instance", &EntityManager::AddPartInstance, "part_instance"_a)
        .def("delete_part_instance", &EntityManager::DeletePartInstance, "part_instance"_a)
        .def("get_part_instance", &EntityManager::GetPartInstance, "rocket_name"_a, "instance_name"_a, py::return_value_policy::reference_internal)

        .def("create_part", [](EntityManager* db, PartType type, Rocket* rocket) -> Part* {
                switch (type) {
                    case PartType::BULKHEAD:
                        return db->CreatePart<Bulkhead>(rocket);
                    case PartType::FINS:
                        return db->CreatePart<Fins>(rocket);
                    case PartType::NOSECONE:
                        return db->CreatePart<Nosecone>(rocket);
                    case PartType::PARACHUTE:
                        return db->CreatePart<Parachute>(rocket);
                    case PartType::TUBE_BODY:
                        return db->CreatePart<TubeBody>(rocket);
                }
            }, "type"_a, "rocket"_a, py::return_value_policy::reference_internal)
        .def("add_part", &EntityManager::AddPart, "part"_a)
        .def("delete_part", &EntityManager::DeletePart, "part"_a, py::return_value_policy::reference_internal)

        .def("create_flight", &EntityManager::CreateFlight, "configuration"_a, py::return_value_policy::reference_internal)
        .def("add_flight", &EntityManager::AddFlight, "flight"_a)
        .def("delete_flight", &EntityManager::DeleteFlight, "flight"_a)
        .def("get_flight", &EntityManager::GetFlight, "rocket_name"_a, "configuration_name"_a, "flight_name"_a, py::return_value_policy::reference_internal)

        .def("create_simulation", &EntityManager::CreateSimulation, "configuration"_a, py::return_value_policy::reference_internal)
        .def("add_simulation", &EntityManager::AddSimulation, "simulation"_a)
        .def("delete_simulation", &EntityManager::DeleteSimulation, "simulation"_a)
        .def("get_simulation", &EntityManager::GetSimulation, "rocket_name"_a, "configuration_name"_a, "simulation_name"_a, py::return_value_policy::reference_internal);
}
