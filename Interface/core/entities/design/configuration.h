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

    //Properties
    void SetName(const std::string& name);
    void SetComments(const std::string& comments);
    std::string Name() const;
    std::string Comments() const;
    int Id() const;

  private:
    static int id_counter;

    std::vector<Stage*> GetStageListWithStagesAbove(Stage* stage) const;

    std::string name_;
    std::string comments_;
    int id_;
    std::vector<Stage*> stages_; //{sustainer, stage2, booster}	
    std::vector<Simulation*> simulations_;       
};
#endif

/*
    void CreateSimulation(std::string name, std::string comments,
        const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod);
    void DeleteSimulation();
    */

