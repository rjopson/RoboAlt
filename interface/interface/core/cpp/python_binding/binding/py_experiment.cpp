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
        .def("altimeter_data", &Experiment::AltimeterData, "stage"_a)
        .def("set_altimeter_data", &Experiment::SetAltimeterData, "stage"_a, "altimeter_data"_a)
        .def("attributes", &AttributesExperiment)
        .def("attributes_stage", [](Experiment* self, Stage* stage) -> py::dict {
            return py::dict("motor"_a = self->AssignedMotor(stage)->Name());
        });

        py::class_<SensorData>(m, "SensorData")
            .def(py::init<>())
            .def_readwrite("pad_mpu6050", &SensorData::pad_mpu)
            .def_readwrite("pad_h3lis331dl", &SensorData::pad_h3lis)
            .def_readwrite("pad_ms5607_pressure", &SensorData::pad_pressure)
            .def_readwrite("pad_ms5607_temperature", &SensorData::pad_temperature)
            .def_readwrite("pad_ms5607_calibration", &SensorData::pad_ms5607_calibration)
            .def_readwrite("pad_voltage", &SensorData::pad_voltage)
            .def_readwrite("time", &SensorData::time)
            .def_readwrite("phase", &SensorData::phase)
            .def_readwrite("altitude", &SensorData::altitude)
            .def_readwrite("velocity", &SensorData::velocity)
            .def_readwrite("acceleration", &SensorData::acceleration)
            .def_readwrite("altitude_baro", &SensorData::altitude_baro)
            .def_readwrite("acceleration_axial", &SensorData::acceleration_axial)
            .def_readwrite("pressure", &SensorData::pressure)
            .def_readwrite("temperature", &SensorData::temperature)
            .def_readwrite("accel_low_x", &SensorData::accel_low_x)
            .def_readwrite("accel_low_y", &SensorData::accel_low_y)
            .def_readwrite("accel_low_z", &SensorData::accel_low_z)
            .def_readwrite("rotation_x", &SensorData::rotation_x)
            .def_readwrite("rotation_y", &SensorData::rotation_y)
            .def_readwrite("rotation_z", &SensorData::rotation_z)
            .def_readwrite("accel_high", &SensorData::accel_high)
            .def_readwrite("pressure_raw", &SensorData::pressure_raw)
            .def_readwrite("temperature_raw", &SensorData::temperature_raw)
            .def_readwrite("voltage", &SensorData::voltage)
            .def_readwrite("continuity_one", &SensorData::continuity_one)
            .def_readwrite("continuity_two", &SensorData::continuity_two)
            .def_readwrite("continuity_three", &SensorData::continuity_three)

            .def("set_attributes", [](SensorData& self, py::kwargs kwargs) {
                py::object obj = py::cast(self);
                for (auto item : kwargs) {
                    obj.attr(item.first) = item.second;
                }
                self = py::cast<SensorData>(obj);
            })

            .def("attributes", [](const SensorData& self) -> py::dict {                
                return py::dict("pad_mpu6050"_a = self.pad_mpu,
                    "pad_h3lis331dl"_a = self.pad_h3lis,
                    "pad_ms5607_pressure"_a = self.pad_pressure,
                    "pad_ms5607_temperature"_a = self.pad_temperature,
                    "pad_ms5607_calibration"_a = self.pad_ms5607_calibration,
                    "pad_voltage"_a = self.pad_voltage,
                    "time"_a = self.time,
                    "phase"_a = self.phase,
                    "altitude"_a = self.altitude,
                    "velocity"_a = self.velocity,
                    "acceleration"_a = self.acceleration,
                    "altitude_baro"_a = self.altitude_baro,
                    "acceleration_axial"_a = self.acceleration_axial,
                    "pressure"_a = self.pressure,
                    "temperature"_a = self.temperature,
                    "accel_low_x"_a = self.accel_low_x,
                    "accel_low_y"_a = self.accel_low_y,
                    "accel_low_z"_a = self.accel_low_z,
                    "rotation_x"_a = self.rotation_x,
                    "rotation_y"_a = self.rotation_y,
                    "rotation_z"_a = self.rotation_z,
                    "accel_high"_a = self.accel_high,
                    "pressure_raw"_a = self.pressure_raw,
                    "temperature_raw"_a = self.temperature_raw,
                    "voltage"_a = self.voltage,
                    "continuity_one"_a = self.continuity_one,
                    "continuity_two"_a = self.continuity_two,
                    "continuity_three"_a = self.continuity_three);
            });

    //py::class_<ExperimentalData, FlightData>(m, "ExperimentalData")
    //    .def(py::init<>())
    //    .def("attributes", [](const ExperimentalData& self) -> py::dict {
    //        SensorData data = self.AltimeterData();
    //        return py::dict("pad_mpu6050"_a = data.pad_mpu,
    //            "pad_h3lis331dl"_a = data.pad_h3lis,
    //            "pad_ms5607_pressure"_a = data.pad_pressure,
    //            "pad_ms5607_temperature"_a = data.pad_temperature,
    //            "pad_ms5607_calibration"_a = data.pad_ms5607_calibration,
    //            "pad_voltage"_a = data.pad_voltage,
    //            "time"_a = data.time,
    //            "phase"_a = data.phase,
    //            "altitude"_a = data.altitude,
    //            "velocity"_a = data.velocity,
    //            "acceleration"_a = data.acceleration,
    //            "altitude_baro"_a = data.altitude_baro,
    //            "acceleration_axial"_a = data.acceleration_axial,
    //            "pressure"_a = data.pressure,
    //            "temperature"_a = data.temperature,
    //            "accel_low_x"_a = data.accel_low_x,
    //            "accel_low_y"_a = data.accel_low_y,
    //            "accel_low_z"_a = data.accel_low_z,
    //            "rotation_x"_a = data.rotation_x,
    //            "rotation_y"_a = data.rotation_y,
    //            "rotation_z"_a = data.rotation_z,
    //            "accel_high"_a = data.accel_high,
    //            "pressure_raw"_a = data.pressure_raw,
    //            "temperature_raw"_a = data.temperature_raw,
    //            "voltage"_a = data.voltage,
    //            "continuity_one"_a = data.continuity_one,
    //            "continuity_two"_a = data.continuity_two,
    //            "continuity_three"_a = data.continuity_three);
    //    });
}

