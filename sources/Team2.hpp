#include <iostream>
#include <vector>
#include <stdexcept>
#include "Team.hpp"
#pragma once
using namespace std;

namespace ariel
{
    class Team2 : public Team
    {
    private:
      
       
    public:
        Team2(Character *leader);
        //~Team2();
        void trans(Team *team);
        

    };

}