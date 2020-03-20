#ifndef _ROCKET_H
#define _ROCKET_H

#include <iostream>
#include <string>
#include <vector>

#include "configuration.h"
#include "drag.h"
#include "part.h"
#include "part_bulkhead.h"
#include "part_fins.h"
#include "part_mass.h"
#include "part_nosecone.h"
#include "part_parachute.h"
#include "part_tube_body.h"
#include "part_tube_inner.h"

class Rocket {
  public:
    Rocket(std::string name, std::string comments);
    ~Rocket();    

    void CreateConfiguration(std::string name, std::string comments);
    std::vector<Part*> GetPartList();
    void CreateBulkhead(std::string name, std::string comments, Material* material,
        const double& diameter, const double& thickness,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    void CreateFins(std::string name, std::string comments, Material* material,
        const FinCrossSection& cross_section,
        const int& number, const double& thickness, const double& radius_fillet,
        const double& chord_root, const double& chord_tip, const double& span, const double& length_sweep,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    void CreateMass(std::string name, std::string comments, Material* material, const double& mass);
    void CreateNosecone(std::string name, std::string comments, Material* material,
        NoseconeType nose_type, const double& shape_parameter,
        const double& length_nose, const double& length_base, const double& length_shoulder,
        const double& thickness, const double& thickness_shoulder,
        const double& diameter_outer, const double& diameter_shoulder,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    void CreateParachute(std::string name, std::string comments, Material* material,
        const double& diameter, const double& thickness,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    void CreateTubeBody(std::string name, std::string comments, Material* material,
        const double& length, const double& diameter_outer, const double& thickness,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    void CreateTubeInner(std::string name, std::string comments, Material* material,
        const double& length, const double& diameter_outer, const double& thickness,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    //void DeletePart();

    std::string name_;
    std::string comments_;
    std::vector<Configuration*> configurations_;
    std::vector<Drag*> drag_rockets_; //external drag data 
    std::vector<Drag*> drag_parachutes_; //external drag data 
    int id_;

private:
    std::vector<Bulkhead*> bulkheads_;
    std::vector<Fins*> fins_;
    std::vector<Mass*> masses_;
    std::vector<Nosecone*> nosecones_;
    std::vector<Parachute*> parachutes_;
    std::vector<TubeBody*> body_tubes_;
    std::vector<TubeInner*> inner_tubes_;
    static int id_counter;
};
#endif


