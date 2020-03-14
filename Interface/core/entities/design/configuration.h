
#ifndef _CONFIGURATION_H
#define _CONFIGURATION_H

#include <iostream>
#include <string>
#include <vector>

#include "atmosphere.h"
#include "atmosphere_isa.h"

#include "simulation.h"
#include "stage.h"

class Configuration {
  public:
    Configuration(std::string name, std::string comments);
    ~Configuration();

    void AddStage();
    void DeleteStage();
    void CreateSimulation(std::string name, std::string comments,
        const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod);
    void DeleteSimulation();

    std::string name_;
    std::string comments_;
    std::vector<Stage*> stages_; //{sustainer, stage2, booster}	
    std::vector<Simulation*> simulations_;    

  private:
    std::vector<Stage*> GetStageListWithStagesAbove(Stage* stage);
};
#endif

