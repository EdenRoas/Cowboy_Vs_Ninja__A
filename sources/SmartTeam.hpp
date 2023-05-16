#include <iostream>
#include <vector>
#include <stdexcept>
#pragma once
using namespace std;
#include"Team.hpp"

namespace ariel
{
    class SmartTeam : public Team
    {
    private:
      
       
    public:
        SmartTeam(Character *leader);
        //~SmartTeam();
        virtual void trans(Team *team);
        


       
        
    };

}