#include "experiment.h"

Experiment::Experiment(const std::string& name, const std::string& comments, const std::string& date,
    Atmosphere* atmosphere, const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod) 

    : Flight(name, comments, atmosphere, height_pad, angle_launch_rod, length_launch_rod),
      date_(date) {

}

Experiment::~Experiment() {

    for (auto exp_stage : stages_) {
        //for (auto command : sim_stage->UserCommands()) {
        //    DeleteUserCommand(command);
        //}
        delete exp_stage;
    }
}

void Experiment::SetDate(const std::string& date) {
    date_ = date;
}

void Experiment::AddStage(Stage* stage) {

    ExperimentalStage* to_add = new ExperimentalStage();
    to_add->stage = stage;
    stages_.push_back(to_add);
}

void Experiment::RemoveStage(Stage* stage) {
    
    for (auto it = stages_.begin(); it != stages_.end(); it++) {
        if ((*it)->stage == stage) {
            delete (*it);
            stages_.erase(it);
            break;
        }
    }
}

void Experiment::SetMotor(Motor* motor, Stage* stage) {    
    
    ExperimentalStage* temp = GetExperimentalStage(stage);
    if (temp != nullptr) {
        temp->motor = motor;
    }
}

void Experiment::SetMeasuredMassTotal(Stage* stage, const double& mass) {
    
    ExperimentalStage* temp = GetExperimentalStage(stage);
    if (temp != nullptr) {
        temp->mass_total_measured = mass;
    }
}

void Experiment::SetMeasuredMassPropellant(Stage* stage, const double& mass) {
    
    ExperimentalStage* temp = GetExperimentalStage(stage);
    if (temp != nullptr) {
        temp->mass_propellant_measured = mass;
    }
}

std::string Experiment::Date() const {
    return date_;
}

Motor* Experiment::AssignedMotor(Stage* stage) const {

    ExperimentalStage* temp = GetExperimentalStage(stage);
    if (temp == nullptr) {
        return nullptr;
    }
    else {
        return temp->motor;
    }
}

std::vector<Stage*> Experiment::Stages() const {

    std::vector<Stage*> result;
    for (auto exp_stage : stages_) {
        result.push_back(exp_stage->stage);
    }
    return result;
}

std::vector<Motor*> Experiment::Motors() const {

    std::vector<Motor*> result;
    for (auto exp_stage : stages_) {
        result.push_back(exp_stage->motor);
    }
    return result;
}

double Experiment::MassMeasuredStageTotal(Stage* stage) {

    ExperimentalStage* temp = GetExperimentalStage(stage);
    if (temp == nullptr) {
        return -1.0;
    }
    else {
        return temp->mass_total_measured;
    }
}

double Experiment::MassMeasuredPropellant(Stage* stage) {

    ExperimentalStage* temp = GetExperimentalStage(stage);
    if (temp == nullptr) {
        return -1.0;
    }
    else {
        return temp->mass_propellant_measured;
    }
}

void Experiment::ProcessData() {

    for (auto stage : stages_) {
        
        double mass_propellant;
        double mass_total;

        if (stage->mass_propellant_measured == -1.0) {
            mass_propellant = stage->motor->MassPropellant();
        }
        else {
            mass_propellant = stage->mass_propellant_measured;
        }
        
        if (stage->mass_total_measured == -1.0) {
            mass_total = stage->stage->MassEmpty(true) + mass_propellant + stage->motor->MassCase();
        }
        else {
            mass_total = stage->mass_total_measured;
        }        
        stage->flight_data.Process(atmosphere_, stage->stage->AreaReference(true), mass_total, mass_propellant, stage->altimeter_commands.AltitudeMain());
    }
}

ExperimentalData Experiment::Results(Stage* stage) const {

    ExperimentalStage* exp_stage = GetExperimentalStage(stage);
    if (exp_stage != nullptr) {
        return exp_stage->flight_data;
    }
}

void Experiment::GetDataFromFile(Stage* stage, const std::string& file_path) {

    std::string data_string = Parse::GetDataString(file_path);
    GetDataFromAltimeterDownload(stage, data_string);
}

void Experiment::GetDataFromAltimeterDownload(Stage* stage, const std::string& data_string) {

    ExperimentalStage* exp_stage = GetExperimentalStage(stage);

    std::istringstream iss(data_string);
    std::string line;
    std::string command;

    double version = 0.0;

    //parse data lines and pad sensor readings
    exp_stage->flight_data.Parse(data_string);

    //parse user commands 
    while (std::getline(iss, line)) {

        //command
        if (line.at(0) == '*') {
            command = Parse::Split(line, ',', false)[0];
        }

        if (command == "*VERSION") {
            std::vector<std::string> line_list = Parse::Split(line, ',', false);
            version = std::stod(line_list[1]);
        }
        else if (command == "*OUTPUT") {
            std::vector<std::string> line_list = Parse::Split(line, ',', false);

            for (auto input : line_list) {
                std::vector<std::string> param = Parse::Split(input, '=', false);
                AltimeterOutput output = AltimeterOutput::NONE;

                if (param[0] == "NUMBER") {
                    output = AltimeterUserCommands::GetOutput(param[1]);
                }
                else if (param[0] == "EVENT") {
                    exp_stage->altimeter_commands.SetOutputEvent(output, FlightData::GetEvent(param[1]));
                }
                else if (param[0] == "DELAY") {
                    exp_stage->altimeter_commands.SetOutputDelay(output, 0.001 * std::stod(param[1]));
                }
                else if (param[0] == "ALTITUDE_MAIN") {
                    exp_stage->altimeter_commands.SetOutputAltitudeMain(output, 0.001 * std::stod(param[1]));
                }
            }
        }
    }
}

ExperimentalStage* Experiment::GetExperimentalStage(Stage* stage) const {

    ExperimentalStage* result;
    for (auto exp_stage : stages_) {
        if (exp_stage->stage == stage) {
            return exp_stage;
        }
    }
    return nullptr;
}


