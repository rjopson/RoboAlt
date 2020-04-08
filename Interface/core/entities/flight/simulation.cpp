#include "simulation.h"

Simulation::Simulation(std::string name, std::string comments,
    const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod)

    : Entity(name, comments),
      height_pad_(height_pad),
      angle_launch_rod_(angle_launch_rod),
      length_launch_rod_(length_launch_rod) {

    time_max_ = 500.0;

    //Create default atmosphere to use 
    atmosphere_ = new Atmosphere();
    AtmosphereISA atmosphere_model;
    *atmosphere_ = atmosphere_model.GetModel();
    atmosphere_internal_calc_ = true;
}

Simulation::~Simulation() {

    if (atmosphere_internal_calc_) {
        delete atmosphere_;
    }

    for (auto sim_stage : stages_) {
        delete sim_stage;
    }
}

void Simulation::AddStage(Stage* stage) {
    stages_.push_back(new SimulationStage(stage));
}

void Simulation::RemoveStage(Stage* stage) {

    for (auto it = stages_.begin(); it != stages_.end(); it++) {
        
        if ((*it)->stage_ == stage) {
            delete (*it);
            stages_.erase(it);
        }
    }
}

void Simulation::AddUserCommand(SimulationUserCommand* user_command, Stage* stage) {

    for (auto it = stages_.begin(); it != stages_.end(); it++) {
        if ((*it)->stage_ == stage) {
            (*it)->AddUserCommand(user_command);
        }
    }
}

void Simulation::RemoveUserCommand(SimulationUserCommand* user_command, Stage* stage) {

    for (auto it = stages_.begin(); it != stages_.end(); it++) {
        if ((*it)->stage_ == stage) {
            (*it)->RemoveUserCommand(user_command);
        }
    }
}

void Simulation::SetMotor(Motor* motor, Stage* stage) {
    
    for (auto it = stages_.begin(); it != stages_.end(); it++) {
        if ((*it)->stage_ == stage) {
            (*it)->motor_ = motor;
        }
    }
}


void Simulation::SetHeightPad(const double& height_pad) {
    height_pad_ = height_pad;
}

void Simulation::SetAngleLaunchRod(const double& angle_launch_rod) {
    angle_launch_rod_ = angle_launch_rod;
}

void Simulation::SetLengthLaunchRod(const double& length_launch_rod) {
    length_launch_rod_ = length_launch_rod;
}

Motor* Simulation::AssignedMotor(Stage* stage) const {

    for (auto it = stages_.begin(); it != stages_.end(); it++) {
        if ((*it)->stage_ == stage) {
            return (*it)->motor_;
        }
    }   
    return nullptr;
}

double Simulation::HeightPad() const {
    return height_pad_;
}

double Simulation::AngleLaunchRod() const {
    return angle_launch_rod_;
}

double Simulation::LengthLaunchRod() const {
    return length_launch_rod_;
}

void Simulation::Run(const double& step_ascent, const double& step_descent) {

    //data which will be returned from function. For use in future stages
    std::vector<double> initial_data { 0.0, height_pad_, 0.0, 0.0 };
    Matrix<double> result_current_stage(0, 4, initial_data);
    Matrix<double> result_next_stage(0, 4);
    bool result_next_stage_saved = false;

    //initialize times
    double time_start = 0.0;
    double time_end = time_max_;
    time_motor_lit_ = time_start;

    //initial conditions for ode
    std::vector<double> initial_conditions { height_pad_, 0.0 };
    Phase phase = Phase::DETECT_LAUNCH;

    //loop through each stage starting with booster
    for (auto it = stages_.rbegin(); it != stages_.rend(); ++it) {

        stage_current_ = (*it);
        stage_current_->PopulateModelDrag();

        //run full simulation for this stage until it's back on the ground. Then start the next one
        while (phase != Phase::GROUND) {

            Event event;
            Matrix<double> result_phase(0, 4);				

            if (phase == Phase::DESCENT_DROGUE ||
                phase == Phase::DESCENT_MAIN) {

                event = RunPhase(result_phase, phase, initial_conditions, time_start, time_end, step_descent); //calculate current phase
            }
            else {
                event = RunPhase(result_phase, phase, initial_conditions, time_start, time_end, step_ascent); //calculate current phase
            }
            
            //Update initial conditions for next phase
            initial_conditions.clear();
            initial_conditions.push_back(result_phase.GetLastRow()[1]);
            initial_conditions.push_back(result_phase.GetLastRow()[2]);

            //Determine next phase of flight and times to use
            time_start = result_phase.GetLastRow()[0];
            phase = GetNextPhase(event, time_start);			
            time_end = stage_current_->GetTimeForNearestDelayedUserCommand(time_start + time_max_);
            
            //Add data from current phase to current stage flight data
            result_current_stage.ExpandRows(result_phase);

            //If stages haven't separated, save data to pass to next stage simulation
            if (!result_next_stage_saved) { //stages haven't separated yet, keep saving data for next stage
                result_next_stage = result_current_stage;
            }
            if (phase == Phase::ASCENT_UNPOWERED_UNSTACKED && !result_next_stage_saved) {
                result_next_stage_saved = true;
            }			
        }

        //Housekeeping to prepare for next stage
        //stage_current_->flight_data_ = PopulateStageFlightData(result_current_stage);
        result_current_stage = result_next_stage; //begin with results up until this stage separates. Now continue simulation with separated stage 
        result_next_stage_saved = false;

        //Update initial conditions for next stage
        initial_conditions.clear();
        initial_conditions.push_back(result_current_stage.GetLastRow()[1]);
        initial_conditions.push_back(result_current_stage.GetLastRow()[2]); 
        phase = Phase::ASCENT_UNPOWERED_STACKED;
    }	
}

//this function runs just one flight phase (for example coast=burnout->apogee). It looks for an event to say the phase is finished,
//then stops and provides data for the phase and the event which was detected 
Event Simulation::RunPhase(Matrix<double>& result_phase, Phase phase, const std::vector<double>& initial_conditions,
    const double& time_start, const double& time_end, const double& step) {

    Event event;

    //Function definitons for events and EOM's which can change
    std::function<std::vector<double>(const double&, const std::vector<double>&)> eom;
    std::function<bool(const std::vector<double>&)> event_detect;

    //run appropriate phase of flight.
    switch (phase) {
        case Phase::DETECT_LAUNCH: {
            drag_current_ = stage_current_->GetDragWithStagesAbove();
            mass_empty_current_ = stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            eom = std::bind(&Simulation::EomAscent, this, std::placeholders::_1, std::placeholders::_2);
            result_phase = MathUtilities::RK45(initial_conditions, eom, Simulation::LaunchDetect, time_start, time_end, step);
            event = Event::LIFTOFF;
            break;
        }
        case Phase::ASCENT_POWERED: {
            drag_current_ = stage_current_->GetDragWithStagesAbove();
            mass_empty_current_ = stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            eom = std::bind(&Simulation::EomAscent, this, std::placeholders::_1, std::placeholders::_2);
            event_detect = std::bind(&Simulation::CoastDetect, this, std::placeholders::_1);
            result_phase = MathUtilities::RK45(initial_conditions, eom, event_detect, time_start, time_end, step);
            event = Event::BURNOUT;
            break;
        }
        case Phase::ASCENT_UNPOWERED_STACKED: {
            drag_current_ = stage_current_->GetDragWithStagesAbove();
            mass_empty_current_ = stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            eom = std::bind(&Simulation::EomAscent, this, std::placeholders::_1, std::placeholders::_2);
            result_phase = MathUtilities::RK45(initial_conditions, eom, Simulation::ApogeeDetect, time_start, time_end, step);
            event = Event::APOGEE;
            break;
        }
        case Phase::ASCENT_UNPOWERED_UNSTACKED: {
            drag_current_ = stage_current_->GetDragWithoutStagesAbove();
            mass_empty_current_ = stage_current_->stage_->MassEmpty(false);
            eom = std::bind(&Simulation::EomAscent, this, std::placeholders::_1, std::placeholders::_2);
            result_phase = MathUtilities::RK45(initial_conditions, eom, Simulation::ApogeeDetect, time_start, time_end, step);
            event = Event::APOGEE;
            break;
        }
        case Phase::DESCENT_UNPOWERED_STACKED: {
            drag_current_ = stage_current_->GetDragWithStagesAbove();
            mass_empty_current_ = stage_current_->stage_->MassEmpty(true) + GetMotorMassStagesAbove();
            eom = std::bind(&Simulation::EomDescent, this, std::placeholders::_1, std::placeholders::_2);
            event_detect = std::bind(&Simulation::GroundDetect, this, std::placeholders::_1);
            result_phase = MathUtilities::RK45(initial_conditions, eom, event_detect, time_start, time_end, step);
            event = Event::GROUND;
            break;
        }
        case Phase::DESCENT_UNPOWERED_UNSTACKED: {
            drag_current_ = stage_current_->GetDragWithoutStagesAbove();
            mass_empty_current_ = stage_current_->stage_->MassEmpty(false);
            eom = std::bind(&Simulation::EomDescent, this, std::placeholders::_1, std::placeholders::_2);
            event_detect = std::bind(&Simulation::GroundDetect, this, std::placeholders::_1);
            result_phase = MathUtilities::RK45(initial_conditions, eom, event_detect, time_start, time_end, step);
            event = Event::GROUND;
            break;
        }
        case Phase::DESCENT_DROGUE: {
            drag_current_ = stage_current_->GetDragDrogue();
            mass_empty_current_ = stage_current_->stage_->MassEmpty(false);
            eom = std::bind(&Simulation::EomDescent, this, std::placeholders::_1, std::placeholders::_2);
            event_detect = std::bind(&Simulation::MainDetect, this, std::placeholders::_1);
            result_phase = MathUtilities::RK45(initial_conditions, eom, event_detect, time_start, time_end, step);
            event = Event::ALTITUDE_MAIN;
            break;
        }
        case Phase::DESCENT_MAIN: {
            drag_current_ = stage_current_->GetDragMain();
            mass_empty_current_ = stage_current_->stage_->MassEmpty(false);
            eom = std::bind(&Simulation::EomDescent, this, std::placeholders::_1, std::placeholders::_2);
            event_detect = std::bind(&Simulation::GroundDetect, this, std::placeholders::_1);
            result_phase = MathUtilities::RK45(initial_conditions, eom, event_detect, time_start, time_end, step);
            event = Event::GROUND;
            break;
        }
    }

    //Check whether phase made it to end of input time. If it did, we're at a time delay event, not a flight phase event happened
    double time_current = result_phase.GetLastRow()[0];
    if (time_current == time_end) {
        event = Event::AT_TIME_DELAY;
    }

    return event;
}

//determines the next phase of rocket flight based in event which just happend and a time of flight
Phase Simulation::GetNextPhase(Event event_current, const double& time_of_flight) {

    Phase phase;

    switch (stage_current_->UpdateUserCommands(event_current, time_of_flight)) {        
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
        mass += (*it)->motor_->mass_total_;
    }
    return mass;
}

std::vector<double> Simulation::EomAscent(const double& time, const std::vector<double>& state) {

    bool motor_thrusting = stage_current_->motor_->CurrentlyThrusting(time - time_motor_lit_);

    //Get acceleration
    double force_sum = stage_current_->motor_->GetThrust(time - time_motor_lit_) - drag_current_->GetDrag(motor_thrusting, atmosphere_->Density(state[0]), std::abs(state[1]), atmosphere_->SpeedOfSound(state[0]));
    double mass = mass_empty_current_ + stage_current_->motor_->GetMass(time);
    double acceleration = (force_sum / mass) - kGravity;

    //output solution to step
    std::vector<double> result_state{ state[1], acceleration};    

    return result_state;
}

std::vector<double> Simulation::EomDescent(const double& time, const std::vector<double>& state) {

    //Get acceleration
    double force_sum = drag_current_->GetDrag(false, atmosphere_->Density(state[0]), std::abs(state[1]), atmosphere_->SpeedOfSound(state[0]));
    double mass = mass_empty_current_ + stage_current_->motor_->mass_total_ - stage_current_->motor_->mass_propellant_;
    double acceleration = (force_sum / mass) - kGravity;

    //output solution to step
    std::vector<double> result_state{ state[1], acceleration };
    return result_state;
}

bool Simulation::LaunchDetect(const std::vector<double>& state) {

    if (state[2] > kVelocityLaunchDetect && state[3] > kAccelerationLaunchDetect) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::CoastDetect(const std::vector<double>& state) {

    if (!stage_current_->motor_->CurrentlyThrusting(state[0]-time_motor_lit_)) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::ApogeeDetect(const std::vector<double>& state) {

    if (state[2] < kVelocityApogeeDetect) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::MainDetect(const std::vector<double>& state) {

    double altitude_main_deploy = stage_current_->AltitudeMainDeploy();

    if (state[1] < altitude_main_deploy) {
        return true;
    }
    else {
        return false;
    }
}

bool Simulation::GroundDetect(const std::vector<double>& state) {

    if (state[1] <= height_pad_) {
        return true;
    }
    else {
        return false;
    }
}

FlightData Simulation::PopulateStageFlightData(Matrix<double> stage_result) {

    FlightData result;	

    result.time_ = stage_result.GetColumn(0);
    result.altitude_msl_ = stage_result.GetColumn(1);
    //result.altitudeAGL = result.altitudeMSL
    result.velocity_ = stage_result.GetColumn(2);
    result.acceleration_ = stage_result.GetColumn(3);
    result.length_vector_ = result.time_.size();

    return result;
}
