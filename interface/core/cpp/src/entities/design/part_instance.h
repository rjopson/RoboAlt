#ifndef _PART_INSTANCE_H
#define _PART_INSTANCE_H

#include <string>
#include <vector>

#include "part.h"

enum class PartPosition : uint32_t {
    FOREWARD,
    AFT
};

class PartInstance : public Entity {
  public:
    PartInstance();
    PartInstance(const std::string& name, Part* part, PartInstance* parent, PartPosition position_type, const double& position_from);
    ~PartInstance();	  

    //Values
    void SetPositionType(PartPosition position_type);
    void SetPositionFrom(const double& position);
    std::vector<PartInstance*> Children(bool recursive);

    //Datanames    
    Part* AssignedPart() const;
    PartPosition PositionType() const;
    double PositionFrom() const;
    PartInstance* Parent() const;
    double PositionFromParentFront();
    
    //Core Functions
    void AddChild(PartInstance* child, const int& index);   //-1 to add at end, 0 to insert at beginning
    void AddChildren(std::vector<PartInstance*> children, const int& index); //-1 to add at end, 0 to insert at beginning

  private:
    void InstanceFlatListRecursive(PartInstance* parent, std::vector<PartInstance*>& flat_list);

    std::vector<PartInstance*> children_;
    Part* part_;
    PartInstance* parent_;
    PartPosition position_type_;
    double position_from_;
};
#endif