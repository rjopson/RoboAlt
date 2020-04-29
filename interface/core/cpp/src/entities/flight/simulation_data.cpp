#include "simulation_data.h"

SimulationData::SimulationData()
    : FlightData() {

}

SimulationData::~SimulationData() {

} 

void SimulationData::Populate(std::vector<SolverResult> solver_result) {

    for (int i = 0; i != solver_result.size(); i++) {
        phase_.push_back(solver_result[i].phase);
        time_.push_back(solver_result[i].time);
        altitude_msl_.push_back(solver_result[i].altitude_msl);
        altitude_agl_.push_back(solver_result[i].altitude_agl);
        velocity_.push_back(solver_result[i].velocity);
        acceleration_.push_back(solver_result[i].acceleration);
        mach_number_.push_back(solver_result[i].mach_number);
        dynamic_pressure_.push_back(solver_result[i].dynamic_pressure);
        drag_.push_back(solver_result[i].drag);
        drag_coefficient_.push_back(solver_result[i].drag_coefficient);
        mass_.push_back(solver_result[i].mass);
        pressure_.push_back(solver_result[i].pressure);
        temperature_.push_back(solver_result[i].temperature);
        thrust_.push_back(solver_result[i].thrust);

        if (solver_result[i].event != Event::NONE) {
            events_[solver_result[i].event] = i;
        }
    }
}