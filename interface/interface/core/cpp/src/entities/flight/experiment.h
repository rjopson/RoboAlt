#ifndef _EXPERIMENT_H
#define _EXPERIMENT_H

#include "altimeter_user_commands.h"
#include "entity.h"
#include "experimental_data.h"
#include "flight.h"
#include "motor.h"
#include "stage.h"

struct ExperimentalStage {
    Stage* stage = nullptr;
    Motor* motor = nullptr;
    ExperimentalData flight_data;
    double mass_total_measured = -1.0;
    double mass_propellant_measured = -1.0;
    AltimeterUserCommands altimeter_commands;
};

class Experiment : public Flight {
  public:
    Experiment(const std::string& name, const std::string& comments, const std::string& date,
        Atmosphere* atmosphere, const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod);
    ~Experiment();

    void SetDate(const std::string& date);
    void AddStage(Stage* stage);
    void RemoveStage(Stage* stage);
    void SetMotor(Motor* motor, Stage* stage);
    void SetMeasuredMassTotal(Stage* stage, const double& mass);
    void SetMeasuredMassPropellant(Stage* stage, const double& mass);   
    void SetAltimeterData(Stage* stage, const SensorData& data);

    std::string Date() const;
    Motor* AssignedMotor(Stage* stage) const;
    std::vector<Stage*> Stages() const;
    std::vector<Motor*> Motors() const;
    double MassMeasuredStageTotal(Stage* stage);
    double MassMeasuredPropellant(Stage* stage);

    void GetDataFromFile(Stage* stage, const std::string& file_path);
    void GetDataFromAltimeterDownload(Stage* stage, const std::string& data_string);    
    void ProcessData();
    ReducedData Results(Stage* stage) const;
    SensorData AltimeterData(Stage* stage) const;

  private:
    ExperimentalStage* GetExperimentalStage(Stage* stage) const;
    std::string date_;
    std::vector<ExperimentalStage*> stages_;


    //on experimental class:
    //name
    //comments
    //date
    //location (new class also - contains name/altitude/typical temperature)
    //pad angle?
    //wind speed? (what's his name wind descriptions - trees move etc)

};
#endif

