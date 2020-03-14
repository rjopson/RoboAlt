#ifndef _INSTANCE_H
#define _INSTANCE_H

#include <vector>

#include "part.h"

enum class PartPosition {
    FOREWARD,
    AFT
};

class Instance {
  public:
    Instance(); //for root 
    Instance(Part* part, Instance* parent, PartPosition position_type, const double& position_from);	
    ~Instance();	    
    
    void CreateChild(Part* part, PartPosition position_type, const double& position_from);
    void AddChild(Instance* child);
    void DeleteChild(Instance* child);
    void Reposition(const double& index_parent_list);
    double PositionFromParentFront();

    Part* part_;
    Instance* parent_;
    std::vector<Instance*> children_;
    PartPosition position_type_;
    double position_from_;
};
#endif