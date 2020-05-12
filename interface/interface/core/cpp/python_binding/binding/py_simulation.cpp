#include <pybind11/pybind11.h>
#include <pybind11/attr.h>
#include <pybind11/stl.h>
#include <pybind11/pytypes.h>

#include "simulation.h"
#include "simulation_data.h"
#include "simulation_user_command.h"

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

py::dict AttributesFlight(Flight* flight);
py::dict AttributesSimulation(Simulation* simulation) {
    return py::dict(**AttributesFlight(simulation),
        "step_ascent"_a = simulation->StepAscent(),
        "step_descent"_a = simulation->StepDescent());
}

class PySimulation : public Simulation {
public:
    using Simulation::Simulation; // Inherit constructors
    void AddStage(Stage* stage) { PYBIND11_OVERLOAD(void, Simulation, AddStage, stage); }
    void RemoveStage(Stage* stage) { PYBIND11_OVERLOAD(void, Simulation, RemoveStage, stage); }
    void SetMotor(Motor* motor, Stage* stage) { PYBIND11_OVERLOAD(void, Simulation, SetMotor, motor, stage); }
    Motor* AssignedMotor(Stage* stage) const { PYBIND11_OVERLOAD(Motor*, Simulation, AssignedMotor, stage); }
    std::vector<Stage*> Stages() const { PYBIND11_OVERLOAD(std::vector<Stage*>, Simulation, Stages, ); }
    std::vector<Motor*> Motors() const { PYBIND11_OVERLOAD(std::vector<Motor*>, Simulation, Motors, ); }
};

void init_simulation(py::module& m) {

    py::enum_<Command>(m, "Command")
        .value("NONE", Command::NONE)
        .value("SEPARATE_STAGE", Command::SEPARATE_STAGE)
        .value("LIGHT_STAGE", Command::LIGHT_STAGE)
        .value("DEPLOY_DROGUE", Command::DEPLOY_DROGUE)
        .value("DEPLOY_MAIN", Command::DEPLOY_MAIN);

    py::class_<SimulationUserCommand>(m, "SimulationUserCommand")
        .def(py::init<Event, Command, const double&,
            Parachute*, const double&>(),
            "event"_a, "command"_a, "time_delay"_a, "parachute"_a, "altitude_main_deploy"_a)
        .def_property("event", &SimulationUserCommand::AssignedEvent, &SimulationUserCommand::SetEvent)
        .def_property("command", &SimulationUserCommand::AssignedCommand, &SimulationUserCommand::SetCommand)
        .def_property("time_delay", &SimulationUserCommand::TimeDelay, &SimulationUserCommand::SetTimeDelay)
        .def_property("parachute", &SimulationUserCommand::AssignedParachute, &SimulationUserCommand::SetParachute, py::return_value_policy::reference_internal)
        .def_property("altitude_main_deploy", &SimulationUserCommand::AltitudeMainDeploy, &SimulationUserCommand::SetAltitudeMainDeploy)

        .def("attributes", [](SimulationUserCommand* self) -> py::dict {
            return py::dict("event"_a = self->AssignedEvent(),
                            "command"_a = self->AssignedCommand(),
                            "time_delay"_a = self->TimeDelay(),
                            "parachute"_a = self->AssignedParachute()->Name(),
                            "altitude_main_deploy"_a = self->AltitudeMainDeploy());
        });

        py::class_<Simulation, PySimulation, Flight>(m, "Simulation", py::multiple_inheritance())
            .def(py::init<const std::string&, const std::string&, Atmosphere*,
                const double&, const double&, const double&,
                const double&, const double&>(),
                "name"_a, "comments"_a, "atmosphere"_a, "height_pad"_a, "angle_launch_rod"_a, "length_launch_rod"_a,
                "step_ascent"_a, "step_descent"_a)
        .def_property("step_ascent", &Simulation::StepAscent, &Simulation::SetStepAscent)
        .def_property("step_descent", &Simulation::StepDescent, &Simulation::SetStepDescent)
        .def("add_stage", &Simulation::AddStage, "stage"_a)
        .def("remove_stage", &Simulation::RemoveStage, "stage"_a)
        .def("create_user_command", [](Simulation* self, Stage* stage, py::kwargs kwargs) -> SimulationUserCommand* {
            SimulationUserCommand* command = self->CreateUserCommand(stage);
            SetAttributes<SimulationUserCommand>(command, kwargs);
            return command;
                }, "stage"_a, py::return_value_policy::reference_internal)
        .def("delete_user_command", &Simulation::DeleteUserCommand, "stage"_a, "user_command"_a)
        .def("user_commands", &Simulation::UserCommands, "stage"_a, py::return_value_policy::reference_internal)
        .def("set_motor", &Simulation::SetMotor, "motor"_a, "stage"_a)
        .def("motor", &Simulation::AssignedMotor, "stage"_a, py::return_value_policy::reference_internal)
        .def_property_readonly("stages", &Simulation::Stages, py::return_value_policy::reference_internal)
        .def_property_readonly("motors", &Simulation::Motors, py::return_value_policy::reference_internal)
        .def("run", &Simulation::Run)
        .def("results", &Simulation::Results, "stage"_a)
        .def("attributes", &AttributesSimulation)
        .def("attributes_stage", [](Simulation* self, Stage* stage) -> py::dict {
            return py::dict("motor"_a = self->AssignedMotor(stage)->Name());
        });

    //py::class_<SimulationData, FlightData>(m, "SimulationData")
    //    .def(py::init<>());
}
