#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "motor.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesEntity(Entity* entity);
py::dict AttributesMotor(Motor* motor) {
    return py::dict(**AttributesEntity(motor),
        "manufacturer"_a = motor->Manufacturer(),
        "length"_a = motor->Length(),
        "delay"_a = motor->Delay(),
        "mass_propellant"_a = motor->MassPropellant(),
        "mass_total"_a = motor->MassTotal(),
        "data_time"_a = motor->DataTime(),
        "data_thrust"_a = motor->DataThrust());
}

void init_motor(py::module& m) {
    py::class_<Motor, Entity>(m, "Motor")
        .def(py::init<const std::string&, const std::string&,
            const std::string&, const double&, const double&, const std::vector<double>&, const double&, const double&,
            const std::vector<double>&, const std::vector<double>&>(),
            "name"_a, "comments"_a, 
            "manufacturer"_a, "diameter"_a, "length"_a, "delay"_a, "mass_propellant"_a, "mass_total"_a,
            "data_time"_a, "data_thrust"_a)
        .def(py::init<const std::string&>(), "file_path"_a)
        .def_property("manufacturer", &Motor::Manufacturer, &Motor::SetManufacturer)
        .def_property("diameter", &Motor::Diameter, &Motor::SetDiameter)
        .def_property("length", &Motor::Length, &Motor::SetLength)
        .def_property("delay", &Motor::Delay, &Motor::SetDelay)
        .def_property("mass_propellant", &Motor::MassPropellant, &Motor::SetMassPropellant)
        .def_property("mass_total", &Motor::MassTotal, &Motor::SetMassTotal)
        .def_property("data_time", &Motor::DataTime, &Motor::SetDataTime)
        .def_property("data_thrust", &Motor::DataThrust, &Motor::SetDataThrust)
        .def_property_readonly("mass_case", &Motor::MassCase)
        //.def_property_readonly("isp", &Motor::Isp)
        //.def_property_readonly("impulse", &Motor::ImpulseTotal)
        .def("attributes", AttributesMotor);
}