
#include "Character.hpp"
using namespace std;

namespace ariel
{
    
    Character::Character() : place(0,0), points(0)
    {

    }
    
    Character::Character(const string &name, const Point &place,  int points) : name(name), place(place),
                                                                                points(points) 
    {
        
    }
    Character::~Character()
    {

    }
    bool Character::isAlive()
    {
        if (this->points == 0)
            return false;
        return true;
    }
    int Character::getPoints()
    {
        return this->points;
    }
    double Character::distance(Character &other)
    {
        return 1.0;
    }
    void Character::hit(int number)
    {
        this->points -= number;
    }
    string Character::getName()
    {
        return this->name;
    }
    Point Character::getLocation()
    {   
        
        return this->place;
    }
    string Character::print()
    {
        return "name";
    }


       
        
 

}