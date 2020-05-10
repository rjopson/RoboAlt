#ifndef _ALTIMETER_USER_COMMANDS_H
#define _ALTIMETER_USER_COMMANDS_H

#include <vector>

#include "flight_data.h"

enum class AltimeterOutput {
    ONE,
    TWO,
    THREE,
    NONE
};

struct AltimeterCommand {
    AltimeterOutput output;
    Event event;
    double delay;
    double altitude_main;
    AltimeterCommand(AltimeterOutput _output, Event _event, double _delay, double _altitude_main) {
        output = _output; event = _event; delay = _delay; altitude_main = _altitude_main;
    }
};

class AltimeterUserCommands {
  public:
    AltimeterUserCommands();
    ~AltimeterUserCommands();

    void SetOutputEvent(AltimeterOutput output, Event event);
    void SetOutputDelay(AltimeterOutput output, const double& delay);
    void SetOutputAltitudeMain(AltimeterOutput output, const double& altitude_main);
    
    Event OutputEvent(AltimeterOutput output);
    double OutputDelay(AltimeterOutput output);
    double OutputAltitudeMain(AltimeterOutput output);

    std::string CommandsString();
    static AltimeterOutput GetOutput(const std::string& val);
    double AltitudeMain() const;

  private:
      std::vector<AltimeterCommand> commands_;
};
#endif

