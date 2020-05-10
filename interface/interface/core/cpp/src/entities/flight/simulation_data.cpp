#include "simulation_data.h"

SimulationData::SimulationData()
    : FlightData() {

}

SimulationData::~SimulationData() {

} 

void SimulationData::Populate(std::vector<SolverResult> solver_result) {

    for (int i = 0; i != solver_result.size(); i++) {
        reduced_.phase.push_back(solver_result[i].phase);
        reduced_.time.push_back(solver_result[i].time);
        reduced_.altitude_msl.push_back(solver_result[i].altitude_msl);
        reduced_.altitude_agl.push_back(solver_result[i].altitude_agl);
        reduced_.velocity.push_back(solver_result[i].velocity);
        reduced_.acceleration.push_back(solver_result[i].acceleration);
        reduced_.mach_number.push_back(solver_result[i].mach_number);
        reduced_.dynamic_pressure.push_back(solver_result[i].dynamic_pressure);
        reduced_.drag.push_back(solver_result[i].drag);
        reduced_.drag_coefficient.push_back(solver_result[i].drag_coefficient);
        reduced_.mass.push_back(solver_result[i].mass);
        reduced_.pressure.push_back(solver_result[i].pressure);
        reduced_.temperature.push_back(solver_result[i].temperature);
        reduced_.thrust.push_back(solver_result[i].thrust);

        if (solver_result[i].event != Event::NONE) {
            reduced_.events[solver_result[i].event] = i;
        }
    }
}