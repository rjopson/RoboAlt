#include "altimeter_user_commands.h"

AltimeterUserCommands::AltimeterUserCommands() {

    AltimeterCommand one(AltimeterOutput::ONE, Event::APOGEE, 0.0, 0.0);
    AltimeterCommand two(AltimeterOutput::TWO, Event::ALTITUDE_MAIN, 0.0, 500.0);
    AltimeterCommand three(AltimeterOutput::THREE, Event::APOGEE, 0.5, 0.0);

    commands_.push_back(one);
    commands_.push_back(two);
    commands_.push_back(three);
}

AltimeterUserCommands::~AltimeterUserCommands() {

}

void AltimeterUserCommands::SetOutputEvent(AltimeterOutput output, Event event) {

    for (auto it = commands_.begin(); it != commands_.end(); it++) {
        if ((*it).output == output) {
            (*it).event = event;
        }
    }
}

void AltimeterUserCommands::SetOutputDelay(AltimeterOutput output, const double& delay) {

    for (auto it = commands_.begin(); it != commands_.end(); it++) {
        if ((*it).output == output) {
            (*it).delay = delay;
        }
    }
}

void AltimeterUserCommands::SetOutputAltitudeMain(AltimeterOutput output, const double& altitude_main) {

    for (auto it = commands_.begin(); it != commands_.end(); it++) {
        if ((*it).output == output) {
            (*it).altitude_main = altitude_main;
        }
    }
}

Event AltimeterUserCommands::OutputEvent(AltimeterOutput output) {

    for (auto it = commands_.begin(); it != commands_.end(); it++) {
        if ((*it).output == output) {
            return (*it).event;
        }
    }
    return Event::NONE;
}

double AltimeterUserCommands::OutputDelay(AltimeterOutput output) {
    
    for (auto it = commands_.begin(); it != commands_.end(); it++) {
        if ((*it).output == output) {
            return (*it).delay;
        }
    }
    return -1.0;
}

double AltimeterUserCommands::OutputAltitudeMain(AltimeterOutput output) {

    for (auto it = commands_.begin(); it != commands_.end(); it++) {
        if ((*it).output == output) {
            return (*it).altitude_main;
        }
    }
    return -1.0;
}

AltimeterOutput AltimeterUserCommands::GetOutput(const std::string& val) {

    static std::map<std::string, AltimeterOutput> string_to_output{
       { "ONE", AltimeterOutput::ONE },
       { "TWO", AltimeterOutput::TWO },
       { "THREE", AltimeterOutput::THREE },
       { "NONE", AltimeterOutput::NONE }
    };
    auto x = string_to_output.find(val);
    if (x != std::end(string_to_output)) {
        return x->second;
    }
    //throw std::invalid_argument("");
}

double AltimeterUserCommands::AltitudeMain() const {

    double altitude_main = 0.0;

    for (auto it = commands_.begin(); it != commands_.end(); it++) {
        if ((*it).event == Event::ALTITUDE_MAIN) {
            if ((*it).altitude_main > altitude_main) {
                altitude_main = (*it).altitude_main;
            }
        }
    }
    return altitude_main;
}

