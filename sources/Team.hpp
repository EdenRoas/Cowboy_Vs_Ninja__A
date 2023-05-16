#include <iostream>
#include <vector>
#include <stdexcept>
#include "Character.hpp"
#include "Ninja.hpp"
#include "Cowboy.hpp"
#pragma once
using namespace std;

namespace ariel
{
    class Team : public Character
    {
    private:
        Character *leader;
        //Character team[10];
        vector<Character*> team;
        int team_counter;

       
    public:
        Team(Character *leader);
        //~Team();
        void creat_team();
        void add (Character *player);
        void attack(Team *enemy);
        int stillAlive();
        virtual string print();
        void virtual trans(Team *team) ;
        


       
        
    };

}