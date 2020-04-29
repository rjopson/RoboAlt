#ifndef _CONFIGURATION_H
#define _CONFIGURATION_H

#include <iostream>
#include <string>
#include <vector>

#include "atmosphere.h"
#include "atmosphere_isa.h"
#include "entity.h"
#include "experiment.h"
#include "simulation.h"
#include "stage.h"

class Configuration : public Entity {
  public:
    Configuration(std::string name, std::string comments);
    ~Configuration();

    //Datanames
    std::vector<Stage*> Stages() const;
    std::vector<Simulation*> Simulations() const;
    std::vector<Experiment*> Flights() const;

    //Core functions
    void AddStage(Stage* stage);
    void RemoveStage(Stage* stage);
    void AddSimulation(Simulation* simulation);
    void RemoveSimulation(Simulation* simulation);
    void AddFlight(Experiment* flight);
    void RemoveFlight(Experiment* flight);

  private:
    std::vector<Stage*> GetStageListWithStagesAbove(Stage* stage) const;

    std::vector<Stage*> stages_; //{sustainer, stage2, booster}	
    std::vector<Simulation*> simulations_;      
    std::vector<Experiment*> flights_;
};
#endif