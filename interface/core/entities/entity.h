
#ifndef _ENTITY_H
#define _ENTITY_H

#include <iostream>

class Entity {

  public:
    Entity(const std::string& name, const std::string& comments);
    ~Entity();

    //Values
    void SetName(const std::string& name);
    void SetComments(const std::string& comments);
    void AddToComments(const std::string& addition);

    //Datanames
    std::string Name() const;
    std::string Comments() const;
    unsigned int Id() const;

  private:
    std::string name_;
    std::string comments_;

  protected:
    unsigned int id_;
};
#endif
