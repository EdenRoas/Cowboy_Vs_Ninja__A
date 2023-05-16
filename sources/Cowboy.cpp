
#include "Cowboy.hpp"
#include "Team.hpp"
using namespace std;

namespace ariel
{
    //Cowboy(){}
    
    Cowboy::Cowboy(const string &nameC ,Point location) : Character(nameC,location,110) , NumOfBullets(6)
    {
        
    }
    //Cowboy::~Cowboy(){}
    void Cowboy::shoot(Character *enemy)
    {

    }
    bool Cowboy::hasboolets()
    {   
        if (this->NumOfBullets > 0 )
            return true;
        return false;
    }
    void Cowboy::reload()
    {
        this->NumOfBullets += 6;
    }
    string Cowboy::print()
    {
        return "name";
    }
       
        
 
}