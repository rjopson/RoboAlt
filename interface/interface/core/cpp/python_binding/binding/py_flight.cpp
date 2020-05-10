#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "flight.h"
#include "flight_data.h"
#include "motor.h"
#include "stage.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesEntity(Entity* entity);
py::dict AttributesFlight(Flight* flight) {
    return py::dict(**AttributesEntity(flight),
        "height_pad"_a = flight->HeightPad(),
        "angle_launch_rod"_a = flight->AngleLaunchRod(),
        "length_launch_rod"_a = flight->LengthLaunchRod(),
        "atmosphere"_a = flight->AssignedAtmosphere()->Name());
}

class PyFlight : public Flight {
public:
    using Flight::Flight; // Inherit constructors
    void AddStage(Stage* stage) { PYBIND11_OVERLOAD_PURE(void, Flight, AddStage, stage); }
    void RemoveStage(Stage* stage) { PYBIND11_OVERLOAD_PURE(void, Flight, RemoveStage, stage); }
    void SetMotor(Motor* motor, Stage* stage) { PYBIND11_OVERLOAD_PURE(void, Flight, SetMotor, motor, stage); }
    Motor* AssignedMotor(Stage* stage) const { PYBIND11_OVERLOAD_PURE(Motor*, Flight, AssignedMotor, stage); }
    std::vector<Stage*> Stages() const { PYBIND11_OVERLOAD_PURE(std::vector<Stage*>, Flight, Stages,); }
    std::vector<Motor*> Motors() const { PYBIND11_OVERLOAD_PURE(std::vector<Motor*>, Flight, Motors,); }
};

void init_flight(py::module& m) {

    py::enum_<Event>(m, "Event")
        .value("LIFTOFF", Event::LIFTOFF)
        .value("BURNOUT", Event::BURNOUT)
        .value("APOGEE", Event::APOGEE)
        .value("ALTITUDE_MAIN", Event::ALTITUDE_MAIN)
        .value("GROUND", Event::GROUND)
        .value("AT_TIME_DELAY", Event::AT_TIME_DELAY)
        .value("NONE", Event::NONE);    

    py::class_<Flight, PyFlight, Entity>(m, "Flight", py::multiple_inheritance())
        .def(py::init<const std::string&, const std::string&, Atmosphere*,const double&, const double&, const double&>())
        .def_property("height_pad", &Flight::HeightPad, &Flight::SetHeightPad)
        .def_property("angle_launch_rod", &Flight::AngleLaunchRod, &Flight::SetAngleLaunchRod)
        .def_property("length_launch_rod", &Flight::LengthLaunchRod, &Flight::SetLengthLaunchRod)
        .def_property("atmosphere", &Flight::AssignedAtmosphere, &Flight::SetAtmosphere, py::return_value_policy::reference_internal);

    py::class_<ReducedData>(m, "FlightData")
        .def(py::init<>())
        .def_readonly("time", &ReducedData::time)
        .def_readonly("altitude_msl", &ReducedData::altitude_msl)
        .def_readonly("altitude_agl", &ReducedData::altitude_agl)
        .def_readonly("velocity", &ReducedData::velocity)
        .def_readonly("acceleration", &ReducedData::acceleration)
        .def_readonly("mach_number", &ReducedData::mach_number)
        .def_readonly("dynamic_pressure", &ReducedData::dynamic_pressure)
        .def_readonly("drag", &ReducedData::drag)
        .def_readonly("drag_coefficient", &ReducedData::drag_coefficient)
        .def_readonly("mass", &ReducedData::mass)
        .def_readonly("pressure", &ReducedData::pressure)
        .def_readonly("temperature", &ReducedData::temperature)
        .def_readonly("thrust", &ReducedData::thrust)
        .def_readonly("altitude_msl_max", &ReducedData::altitude_msl_max)
        .def_readonly("altitude_agl_max", &ReducedData::altitude_agl_max)
        .def_readonly("velocity_max", &ReducedData::velocity_max)
        .def_readonly("acceleration_max", &ReducedData::acceleration_max)
        .def_readonly("acceleration_min", &ReducedData::acceleration_min)
        .def_readonly("dynamic_pressure_max", &ReducedData::dynamic_pressure_max)
        .def_readonly("time_burnout", &ReducedData::time_burnout)
        .def_readonly("time_apogee", &ReducedData::time_apogee)
        .def_readonly("time_main_deploy", &ReducedData::time_main_deploy)
        .def_readonly("time_of_flight", &ReducedData::time_of_flight)
        .def_readonly("descent_rate_drogue", &ReducedData::descent_rate_drogue)
        .def_readonly("descent_rate_main", &ReducedData::descent_rate_main);
}
