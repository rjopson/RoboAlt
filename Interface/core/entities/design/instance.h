#ifndef _INSTANCE_H
#define _INSTANCE_H

#include <string>
#include <vector>

#include "part.h"

enum class PartPosition {
    FOREWARD,
    AFT
};

class Instance : public Entity {
  public:
    Instance();
    Instance(const std::string& name, Part* part, Instance* parent, PartPosition position_type, const double& position_from);
    ~Instance();	  

    //Values
    void SetPositionType(PartPosition position_type);
    void MovePosition(const double& position);
    std::vector<Instance*> Children(bool recursive);

    //Datanames    
    Part* AssignedPart() const;
    PartPosition PositionType() const;
    double PositionFrom() const;
    Instance* Parent() const;
    double PositionFromParentFront();
    
    //Core Functions
    void AddChild(Instance* child, const int& index);   //-1 to add at end, 0 to insert at beginning
    void AddChildren(std::vector<Instance*> children, const int& index); //-1 to add at end, 0 to insert at beginning

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