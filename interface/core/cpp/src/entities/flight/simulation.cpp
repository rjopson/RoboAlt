#include "simulation.h"

Simulation::Simulation(const std::string& name, const std::string& comments, Atmosphere* atmosphere,
    const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod,
    const double& step_ascent, const double& step_descent)

    : Flight(name, comments, atmosphere, height_pad, angle_launch_rod, length_launch_rod),
      step_ascent_(step_ascent),
      step_descent_(step_descent),
      time_max_(500.0),
      mass_empty_current_(-1.0),
      phase_(Phase::DETECT_LAUNCH),
      time_motor_lit_(-1.0),
      drag_current_(new Drag()),
      stage_current_(nullptr) {
}

Simulation::~Simulation() {

    for (auto sim_stage : stages_) {
        for (auto command : sim_stage->user_commands_) {
            DeleteUserCommand(sim_stage->stage_, command);
        }
        delete sim_stage;
    }
    delete drag_current_;
}

void Simulation::AddStage(Stage* stage) {
    stages_.push_back(new SimulationStage());
    stages_.back()->stage_ = stage;
}

void Simulation::RemoveStage(Stage* stage) {

    for (auto it = stages_.begin(); it != stages_.end(); it++) {        
        if ((*it)->stage_ == stage) {
            delete (*it);
            stages_.erase(it);
            break;
        }
    }
}

SimulationUserCommand* Simulation::CreateUserCommand(Stage* stage) {

    SimulationUserCommand* user_command = new SimulationUserCommand(Event::APOGEE, Command::NONE, 0.0, nullptr, 0.0);
    SimulationStage* sim_stage = GetSimulationStage(stage);

    if (sim_stage != nullptr) {
        sim_stage->user_commands_.push_back(user_command);
    }
    else {
        delete user_command;
        user_command = nullptr;
    }
    return user_command;
}

void Simulation::DeleteUserCommand(Stage* stage, SimulationUserCommand* user_command) {

    SimulationStage* sim_stage = GetSimulationStage(stage);

    if (sim_stage != nullptr) {

        auto it = std::find(sim_stage->user_commands_.begin(), sim_stage->user_commands_.end(), user_command);
        if (it != sim_stage->user_commands_.end()) {
            sim_stage->user_commands_.erase(it);
            delete user_command;
        }
    }
}

void Simulation::SetMotor(Motor* motor, Stage* stage) {

    SimulationStage* sim_stage = GetSimulationStage(stage);
    if (sim_stage != nullptr) {
        sim_stage->motor_ = motor;
    }
}

void Simulation::SetStepAscent(const double& step_ascent) {
    step_ascent_ = step_ascent;
}

void Simulation::SetStepDescent(const double& step_descent) {
    step_descent_ = step_descent;
}

Motor* Simulation::AssignedMotor(Stage* stage) const {

    SimulationStage* sim_stage = GetSimulationStage(stage);
    if (sim_stage != nullptr) {
        return sim_stage->motor_;
    }
    return nullptr;
}

std::vector<Stage*> Simulation::Stages() const {
    
    std::vector<Stage*> result;
    for (auto sim_stage : stages_) {
        result.push_back(sim_stage->stage_);
    }
    return result;
}

std::vector<Motor*> Simulation::Motors() const {

    std::vector<Motor*> result;
    for (auto sim_stage : stages_) {
        result.push_back(sim_stage->motor_);
    }
    return result;
}

double Simulation::StepAscent() const {
    return step_ascent_;
}

double Simulation::StepDescent() const {
    return step_descent_;
}

std::vector<SimulationUserCommand*> Simulation::UserCommands(Stage* stage) const {

    SimulationStage* sim_stage = GetSimulationStage(stage);
    if (sim_stage != nullptr) {
        return sim_stage->user_commands_;
    }
    else {
        std::vector<SimulationUserCommand*> result;
        return result;
    }
}

SimulationData Simulation::Results(Stage* stage) const {

    SimulationStage* sim_stage = GetSimulationStage(stage);
    if (sim_stage != nullptr) {
        return sim_stage->simulation_data_;
    }
}

void Simulation::Run() {

    //data which will be returned from function. For use in future stages
    bool result_next_stage_saved = false;
    std::vector<SolverResult> results_current_stage;
    std::vector<SolverResult> results_next_stage;    

    //initialize times
    double time_start = 0.0;
    double time_end = time_max_;
    time_motor_lit_ = time_start;

    //initial conditions for ode
    std::vector<double> initial_conditions { altitude_pad_, 0.0 };
    phase_ = Phase::DETECT_LAUNCH; 

    //loop through each stage starting with booster
    for (auto it = stages_.rbegin(); it != stages_.rend(); ++it) {

        stage_current_ = (*it);

        //run full simulation for this stage until it's back on the ground. Then start the next one
        while (phase_ != Phase::GROUND) {            

            Event event;
            std::vector<SolverResult> results_phase;
            
            if (phase_ == Phase::DESCENT_DROGUE ||
                phase_ == Phase::DESCENT_MAIN) {

                event = RunPhase(results_phase, phase_, initial_conditions, time_start, time_end, step_descent_); //calculate current phase
            }
            else {
                event = RunPhase(results_phase, phase_, initial_conditions, time_start, time_end, step_ascent_); //calculate current phase
            }

            //Add data from current phase to current stage flight data
            if (phase_ != Phase::DETECT_LAUNCH) {
                results_current_stage.insert(results_current_stage.end(), results_phase.begin() + 1, results_phase.end());
            }
            else {
                results_current_stage.insert(results_current_stage.end(), results_phase.begin(), results_phase.end());
            }

            //Update initial conditions for next phase
            initial_conditions.clear();
            initial_conditions.push_back(results_phase.back().altitude_msl);
            initial_conditions.push_back(results_phase.back().velocity);

            //Determine next phase of flight and times to use
            time_start = results_phase.back().time;
            phase_ = GetNextPhase(event, time_start);			
            time_end = GetTimeForNearestDelayedUserCommand(stage_current_, time_start, time_start + time_max_);                    

            //If stages haven't separated, save data to pass to next stage simulation
            if (!result_next_stage_saved) { //stages haven't separated yet, keep saving data for next stage
                results_next_stage = results_current_stage;
            }
            if (phase_ == Phase::ASCENT_UNPOWERED_UNSTACKED && !result_next_stage_saved) {
                result_next_stage_saved = true;
            }            
        }   

        //Housekeeping to prepare for next stage
        results_current_stage = results_next_stage; //begin with results up until this stage separates. Now continue simulation with separated stage 
        result_next_stage_saved = false;

        //Update initial conditions for next stage
        initial_conditions.clear();
        initial_conditions.push_back(results_current_stage.back().altitude_msl);
        initial_conditions.push_back(results_current_stage.back().velocity); 
        phase_ = Phase::ASCENT_UNPOWERED_STACKED; 

        //save results for stage
        stage_current_->simulation_data_.Populate(results_current_stage);
        results_current_stage.clear();
    }	    
}

//this function runs just one flight phase (for example coast=burnout->apogee). It looks for an event to say the phase is finished,
//then stops and provides data for the phase and the event which was detected 
Event Simulation::RunPhase(std::vector<SolverResult>& results, Phase phase, const std::vector<double>& initial_conditions,
    const double& time_start, const double& time_end, const double& step) {

    Event event;    

    //Function definitons for events and EOM's which can change
    std::function<std::vector<double>(SolverResult&, const double&, const std::vector<double>&)> eom = 
        std::bind(&Simulation::Eom, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
    std::function<bool(const SolverResult&)> event_function;   

    //run appropriate phase of flight.
    switch (phase) {
        case Phase::DETECT_LAUNCH: {
            *drag_current_ = GetDragStageStacked(stage_current_);
            mass_empty_current_ = stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            event_function = std::bind(&Simulation::LaunchDetect, this, std::placeholders::_1);
            event = Event::LIFTOFF;
            break;
        }
        case Phase::ASCENT_POWERED: {
            *drag_current_ = GetDragStageStacked(stage_current_);
            mass_empty_current_ = stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            event_function = std::bind(&Simulation::CoastDetect, this, std::placeholders::_1);
            event = Event::BURNOUT;
            break;
        }
        case Phase::ASCENT_UNPOWERED_STACKED: {
            *drag_current_ = GetDragStageStacked(stage_current_);
            mass_empty_current_ = stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            event_function = std::bind(&Simulation::ApogeeDetect, this, std::placeholders::_1);
            event = Event::APOGEE;
            break;
        }
        case Phase::ASCENT_UNPOWERED_UNSTACKED: {
            *drag_current_ = GetDragStageUnstacked(stage_current_);
            mass_empty_current_ = stage_current_->stage_->MassEmpty(false);
            event_function = std::bind(&Simulation::ApogeeDetect, this, std::placeholders::_1);
            event = Event::APOGEE;
            break;
        }
        case Phase::DESCENT_UNPOWERED_STACKED: {
            *drag_current_ = GetDragStageStacked(stage_current_);
            mass_empty_current_ = stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            event_function = std::bind(&Simulation::GroundDetect, this, std::placeholders::_1);
            event = Event::GROUND;
            break;
        }
        case Phase::DESCENT_UNPOWERED_UNSTACKED: {
            *drag_current_ = GetDragStageUnstacked(stage_current_);
            mass_empty_current_ = stage_current_->stage_->MassEmpty(false);
            event_function = std::bind(&Simulation::GroundDetect, this, std::placeholders::_1);
            event = Event::GROUND;
            break;
        }
        case Phase::DESCENT_DROGUE: {
            *drag_current_ = GetDragDrogueParachute(stage_current_);
            mass_empty_current_ = stage_current_->stage_->MassEmpty(false);
            event_function = std::bind(&Simulation::MainDetect, this, std::placeholders::_1);
            event = Event::ALTITUDE_MAIN;
            break;
        }
        case Phase::DESCENT_MAIN: {
            *drag_current_ = GetDragMainParachute(stage_current_);
            mass_empty_current_ = stage_current_->stage_->MassEmpty(false);
            event_function = std::bind(&Simulation::GroundDetect, this, std::placeholders::_1);
            event = Event::GROUND;
            break;
        }
    }

    results = MathUtilities::RK45<SolverResult>(initial_conditions, eom, event_function, time_start, time_end, step);

    //Check whether phase made it to end of input time. If it did, we're at a time delay event, not a flight phase event happened
    double time_current = results.back().time;
    if (time_current == time_end) {
        event = Event::AT_TIME_DELAY;
    }

    results.back().event = event;

    return event;
}

//determines the next phase of rocket flight based in event which just happend and a time of flight
Phase Simulation::GetNextPhase(Event event_current, const double& time_of_flight) {

    Phase phase = Phase::GROUND;
    Command command = UpdateUserCommands(stage_current_, event_current, time_of_flight);
    switch (command) {            
        case Command::DEPLOY_DROGUE: {
            phase = Phase::DESCENT_DROGUE;
            break;
        }
        case Command::DEPLOY_MAIN: {
            phase = Phase::DESCENT_MAIN;
            break;
        }
        case Command::SEPARATE_STAGE: {
            phase = Phase::ASCENT_UNPOWERED_UNSTACKED;
            break;
        }
        case Command::LIGHT_STAGE: {
            time_motor_lit_ = time_of_flight;
            phase = Phase::ASCENT_POWERED;
            break;
        }
        case Command::NONE: {

            //there are no user actions to determine new phase of flight. Go to next default phase
            switch (event_current) {
                case Event::LIFTOFF: {
                    phase = Phase::ASCENT_POWERED;
                    break;
                }
                case Event::BURNOUT: {
                    phase = Phase::ASCENT_UNPOWERED_STACKED;
                    break;
                }
                case Event::APOGEE: {
                    phase = Phase::DESCENT_UNPOWERED_STACKED;
                    break;
                }
                case Event::ALTITUDE_MAIN: {
                    phase = Phase::DESCENT_MAIN;
                    break;
                }
                case Event::GROUND: {
                    phase = Phase::GROUND;
                    break;
                }
            }
        }
    }
    return phase;
}

//get mass of all motors in stages above the current one. 
double Simulation::GetMotorMassStagesAbove() {

    double mass = 0.0;

    for (auto it = stages_.begin(); it != std::find(stages_.begin(), stages_.end(), stage_current_); it++) {
        mass += (*it)->motor_->MassTotal();
    }
    return mass;
}

SimulationStage* Simulation::GetSimulationStage(Stage* stage) const {

    SimulationStage* result;

    for (auto it = stages_.begin(); it != stages_.end(); it++) {
        if ((*it)->stage_ == stage) {
            return (*it);
        }
    }
    return nullptr;
}

double Simulation::AltitudeMainDeploy(SimulationStage* stage) const {

    double altitude_main_deploy = -1.0;

    for (auto user_command : stage->user_commands_) {
        if (user_command->AssignedEvent() == Event::ALTITUDE_MAIN) {
            altitude_main_deploy = user_command->AltitudeMainDeploy();
            break;
        }
    }      
    return altitude_main_deploy;
}

Command Simulation::UpdateUserCommands(SimulationStage* stage, Event event, const double& time_of_flight) {

    Command command = Command::NONE;

    for (auto user_command : stage->user_commands_) {

        //Return the command which would result in the latest flight phase (any other user commands found are processed but irrelevent for simulation)
        Command command_test = user_command->Update(event, time_of_flight);
        if (command_test > command) {
            command = command_test;
        }
    }    
    return command;
}

double Simulation::GetTimeForNearestDelayedUserCommand(SimulationStage* stage, const double& time_of_flight, const double& time_max) const {

    double time = time_max;

    for (auto user_command : stage->user_commands_) {
        if (user_command->TimeToActivateCommand() != -1.0) {
            if (user_command->TimeToActivateCommand() < time_max) {
                time = user_command->TimeToActivateCommand();
            }
        }
    }    
    return time;
}

Drag Simulation::GetDragStageStacked(SimulationStage* stage) {
    
    if (stage->drag_with_stages_above_ != nullptr) {
        return *stage->drag_with_stages_above_;
    }
    else {
        return stage->stage_->DragModel(true, stage->motor_->Area(), 0.0, 5.0, 1000);
    }    
}

Drag Simulation::GetDragStageUnstacked(SimulationStage* stage) {

    if (stage->drag_without_stages_above_ != nullptr) {
        return *stage->drag_without_stages_above_;
    }
    else {
        return stage->stage_->DragModel(false, stage->motor_->Area(), 0.0, 5.0, 1000);
    }
}

Drag Simulation::GetDragDrogueParachute(SimulationStage* stage) {

    if (stage->drag_drogue_ != nullptr) {
        return *stage->drag_drogue_;
    }
    else {
        for (auto command : stage->user_commands_) {
            if (command->AssignedCommand() == Command::DEPLOY_DROGUE) {
                return command->AssignedParachute()->DragModel();
            }

        }
    }    
}

Drag Simulation::GetDragMainParachute(SimulationStage* stage) {

    if (stage->drag_main_ != nullptr) {
        return *stage->drag_main_;
    }
    else {
        for (auto command : stage->user_commands_) {
            if (command->AssignedCommand() == Command::DEPLOY_MAIN) {
                return command->AssignedParachute()->DragModel();
            }

        }
    }    
}

std::vector<double> Simulation::Eom(SolverResult& results_step, const double& time, const std::vector<double>& state) {

    double time_this_stage = time - time_motor_lit_;

    bool motor_thrusting = stage_current_->motor_->CurrentlyThrusting(time_this_stage);
    double thrust = stage_current_->motor_->GetThrust(time_this_stage);

    double density = atmosphere_->Density(state[0]);

    double dynamic_pressure = Aerodynamics::DynamicPressure(density, state[1]);
    double mach_number = state[1] / atmosphere_->SpeedOfSound(state[0]);
    double drag = drag_current_->GetDrag(motor_thrusting, dynamic_pressure, mach_number);
    double drag_coefficient = drag_current_->GetCd(motor_thrusting, mach_number);

    double force_sum;
    if (phase_ == Phase::DETECT_LAUNCH ||
        phase_ == Phase::ASCENT_POWERED ||
        phase_ == Phase::ASCENT_UNPOWERED_STACKED ||
        phase_ == Phase::ASCENT_UNPOWERED_UNSTACKED) {

        force_sum = thrust - drag;
    }
    else {
        force_sum = drag;
    }        
    double mass = mass_empty_current_ + stage_current_->motor_->GetMass(time_this_stage);
    double acceleration = (force_sum / mass) - kGravity;

    //SolverResult results_step;
    results_step.phase = phase_;
    results_step.time = time;
    results_step.altitude_msl = state[0];
    results_step.altitude_agl = state[0] - altitude_pad_;
    results_step.velocity = state[1];
    results_step.acceleration = acceleration;
    results_step.mach_number = mach_number;
    results_step.dynamic_pressure = dynamic_pressure;
    results_step.drag = drag;
    results_step.drag_coefficient = drag_coefficient;
    results_step.pressure = atmosphere_->Pressure(state[0]);
    results_step.temperature = atmosphere_->Temperature(state[0]);
    results_step.thrust = thrust;
    results_step.event = Event::NONE;

    //output solution to step
    std::vector<double> result_state{ state[1], acceleration};    
    return result_state;
}

bool Simulation::LaunchDetect(const SolverResult& result_step) {

    if (result_step.velocity > kVelocityLaunchDetect && result_step.acceleration > kAccelerationLaunchDetect) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::CoastDetect(const SolverResult& result_step) {

    if (!stage_current_->motor_->CurrentlyThrusting(result_step.time-time_motor_lit_)) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::ApogeeDetect(const SolverResult& result_step) {

    if (result_step.velocity < kVelocityApogeeDetect) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::MainDetect(const SolverResult& result_step) {

    double altitude_main_deploy = AltitudeMainDeploy(stage_current_);

    if (result_step.altitude_agl < altitude_main_deploy) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::GroundDetect(const SolverResult& result_step) {

    if (result_step.altitude_msl <= altitude_pad_) {
        return true;
    }
    else {
        return false;
    }
}
