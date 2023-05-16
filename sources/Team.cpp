
#include "Team.hpp"


using namespace std;

namespace ariel
{

      
    Team::Team(Character *leader)
    {
        this->leader = leader;
    }
    //Team::~Team(){}
    void Team::creat_team(){}
    void Team::add (Character *player){
        if(team.size()< 10)
       // {
            team.push_back(player);
       // } runtime_error(" The team is f
        //throwull");
    }
    void Team::attack(Team *enemy){
        if(team_counter != 0){
            --enemy->team_counter;
        }

    }
    int Team::stillAlive()
    {
        return team_counter;
    }
    string Team::print()
    {
        return "name";
    }
    void Team::trans(Team *team){}
        


       
        
    };

