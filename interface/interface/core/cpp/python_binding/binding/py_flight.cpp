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

    py::class_<FlightData>(m, "FlightData")
        .def(py::init<>());
        //.def_property_readonly("time", &FlightData::Time)
        //.def_property_readonly("altitude_msl", &FlightData::AltitudeMsl)
        //.def_property_readonly("altitude_agl", &FlightData::AltitudeAgl)
        //.def_property_readonly("velocity", &FlightData::Velocity)
        //.def_property_readonly("acceleration", &FlightData::Acceleration)
        //.def_property_readonly("mach_number", &FlightData::MachNumber)
        //.def_property_readonly("dynamic_pressure", &FlightData::DynamicPressure)
        //.def_property_readonly("drag", &FlightData::Drag)
        //.def_property_readonly("drag_coefficient", &FlightData::DragCoefficient)
        //.def_property_readonly("mass", &FlightData::Mass)
        //.def_property_readonly("pressure", &FlightData::Pressure)
        //.def_property_readonly("temperature", &FlightData::Temperature)
        //.def_property_readonly("thrust", &FlightData::Thrust)
        //.def_property_readonly("altitude_msl_max", &FlightData::AltitudeMslMax)
        //.def_property_readonly("altitude_agl_max", &FlightData::AltitudeAglMax)
        //.def_property_readonly("velocity_max", &FlightData::VelocityMax)
        //.def_property_readonly("acceleration_max", &FlightData::AccelerationMax)
        //.def_property_readonly("acceleration_min", &FlightData::AccelerationMin)
        //.def_property_readonly("dynamic_pressure_max", &FlightData::DynamicPressureMax)
        //.def_property_readonly("time_burnout", &FlightData::TimeBurnout)
        //.def_property_readonly("time_apogee", &FlightData::TimeApogee)
        //.def_property_readonly("time_main_deploy", &FlightData::TimeMainDeploy)
        //.def_property_readonly("time_of_flight", &FlightData::TimeOfFlight)
        //.def_property_readonly("descent_rate_drogue", &FlightData::DescentRateDrogue)
        //.def_property_readonly("descent_rate_main", &FlightData::DescentRateMain);
}
