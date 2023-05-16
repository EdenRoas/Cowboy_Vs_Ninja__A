#include "Ninja.hpp"

using namespace std;

namespace ariel
{
    //Ninja(){}
    
    
    Ninja::Ninja(const string &nameN ,const Point &location)  :  Character(name,location,10)
    {
        this->name = nameN;
        
    }
    //Ninja::~Ninja(){}
    void Ninja::move(Character *enemy)
    {

    }
    void Ninja::slash(Character *enemy)
    {

    }
    string Ninja::print()
    {
        return "name";
    }
    OldNinja::OldNinja(const string &nameN ,const Point &location): Ninja(nameN,location)
    {
           
    }
    //OldNinja::~OldNinja(){}

    YoungNinja::YoungNinja(const string &nameN, const Point &location) : Ninja(nameN,location)
    {
    }
    // YoungNinja::~YoungNinja()
    // {

    // }
    TrainedNinja::TrainedNinja(const string &nameN, const Point &location) :Ninja(nameN,location)
    {
    }
    //TrainedNinja::~TrainedNinja(){}

}