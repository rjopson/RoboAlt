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
    Instance(Part* part, Instance* parent, PartPosition position_type, const double& position_from);	
    ~Instance();	  

    //Properties
    void SetPositionType(PartPosition position_type);
    void MovePosition(const double& position);
    Part* AssignedPart() const;
    PartPosition PositionType() const;
    double PositionFrom() const;
    Instance* Parent() const;
    
    double PositionFromParentFront();
    std::vector<Instance*> Children(bool recursive);
    void AddChild(Instance* child);   
    void RemoveChild(Instance* child);
    void RemoveFromParent();

  private:
    static unsigned int id_counter;

    void InstanceFlatListRecursive(Instance* parent, std::vector<Instance*>& flat_list);
    
    unsigned int id_;
    std::vector<Instance*> children_;
    Part* part_;
    Instance* parent_;
    PartPosition position_type_;
    double position_from_;
};
#endif