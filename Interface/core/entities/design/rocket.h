#ifndef _ROCKET_H
#define _ROCKET_H

#include <iostream>
#include <vector>

#include "configuration.h"
#include "drag.h"
#include "part.h"

class Rocket {
  public:
    Rocket(std::string name, std::string comments);
    ~Rocket();

  private:
    std::string name_;
    std::string comments_;
    std::vector<Configuration*> configurations_;
    std::vector<Part*> parts_;
    std::vector<Drag*> drag_rockets_; //external drag data 
    std::vector<Drag*> drag_parachutes_; //external drag data 

    //create/delete part
    //create/delete configuration
};
#endif


