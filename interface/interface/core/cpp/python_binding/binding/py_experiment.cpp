#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "experiment.h"
#include "experimental_data.h"

namespace py = pybind11;
using namespace pybind11::literals;

py::dict AttributesFlight(Flight* flight);
py::dict AttributesExperiment(Experiment* experiment) {
    return py::dict(**AttributesFlight(experiment),
        "date"_a = experiment->Date());
}

class PyExperiment : public Experiment {
public:
    using Experiment::Experiment; // Inherit constructors
    void AddStage(Stage* stage) { PYBIND11_OVERLOAD(void, Experiment, AddStage, stage); }
    void RemoveStage(Stage* stage) { PYBIND11_OVERLOAD(void, Experiment, RemoveStage, stage); }
    void SetMotor(Motor* motor, Stage* stage) { PYBIND11_OVERLOAD(void, Experiment, SetMotor, motor, stage); }
    Motor* AssignedMotor(Stage* stage) const { PYBIND11_OVERLOAD(Motor*, Experiment, AssignedMotor, stage); }
    std::vector<Stage*> Stages() const { PYBIND11_OVERLOAD(std::vector<Stage*>, Experiment, Stages, ); }
    std::vector<Motor*> Motors() const { PYBIND11_OVERLOAD(std::vector<Motor*>, Experiment, Motors, ); }
};

void init_experiment(py::module& m) {

    py::class_<Experiment, PyExperiment, Flight>(m, "Experiment", py::multiple_inheritance())
        .def(py::init<const std::string&, const std::string&, const std::string&, Atmosphere*,
            const double&, const double&, const double&>(),
            "name"_a, "comments"_a, "date"_a, "atmosphere"_a, "height_pad"_a, "angle_launch_rod"_a, "length_launch_rod"_a)
        .def_property("date", &Experiment::Date, &Experiment::SetDate)
        .def("add_stage", &Experiment::AddStage, "stage"_a)
        .def("remove_stage", &Experiment::RemoveStage, "stage"_a)
        .def("set_motor", &Experiment::SetMotor, "motor"_a, "stage"_a)
        .def("motor", &Experiment::AssignedMotor, "stage"_a, py::return_value_policy::reference_internal)
        .def_property_readonly("stages", &Experiment::Stages, py::return_value_policy::reference_internal)
        .def_property_readonly("motors", &Experiment::Motors, py::return_value_policy::reference_internal)
        //.def_property("mass_measured_stage_total", &Experiment::MassMeasuredStageTotal, &Experiment::SetMeasuredMassTotal, "stage"_a)
        //.def_property("mass_measured_propellant", &Experiment::MassMeasuredPropellant, &Experiment::SetMeasuredMassPropellant, "stage"_a)
        .def("get_data_from_file", &Experiment::GetDataFromFile, "stage"_a, "file_path"_a)
        .def("get_data_from_alt_download", &Experiment::GetDataFromAltimeterDownload, "stage"_a, "data_string"_a)
        .def("process_data", &Experiment::ProcessData)
        .def("results", &Experiment::Results, "stage"_a)
        .def("attributes", &AttributesExperiment)
        .def("attributes_stage", [](Experiment* self, Stage* stage) -> py::dict {
            return py::dict("motor"_a = self->AssignedMotor(stage)->Name());
        });

    py::class_<ExperimentalData, FlightData>(m, "ExperimentalData")
        .def(py::init<>())
        .def("attributes", [](const ExperimentalData& self) -> py::dict {
            SensorData data = self.AltimeterData();
            return py::dict("pad_mpu6050"_a = data.pad_mpu,
                "pad_h3lis331dl"_a = data.pad_h3lis,
                "pad_ms5607_pressure"_a = data.pad_pressure,
                "pad_ms5607_temperature"_a = data.pad_temperature,
                "pad_ms5607_calibration"_a = data.pad_ms5607_calibration,
                "pad_voltage"_a = data.pad_voltage,
                "time"_a = data.time,
                "phase"_a = data.phase,
                "altitude"_a = data.altitude,
                "velocity"_a = data.velocity,
                "acceleration"_a = data.acceleration,
                "altitude_baro"_a = data.altitude_baro,
                "acceleration_axial"_a = data.acceleration_axial,
                "pressure"_a = data.pressure,
                "temperature"_a = data.temperature,
                "accel_low_x"_a = data.accel_low_x,
                "accel_low_y"_a = data.accel_low_y,
                "accel_low_z"_a = data.accel_low_z,
                "rotation_x"_a = data.rotation_x,
                "rotation_y"_a = data.rotation_y,
                "rotation_z"_a = data.rotation_z,
                "accel_high"_a = data.accel_high,
                "pressure_raw"_a = data.pressure_raw,
                "temperature_raw"_a = data.temperature_raw,
                "voltage"_a = data.voltage,
                "continuity_one"_a = data.continuity_one,
                "continuity_two"_a = data.continuity_two,
                "continuity_three"_a = data.continuity_three);
        });
}

