#include <iostream>
#include <vector>
#include <stdexcept>
#include "Character.hpp"
#pragma once
using namespace std;

namespace ariel
{
    class Ninja : public Character
    {
    private:
       int speed;
       int flag; // to know which type the ninja
       string name;
    public:
        //Ninja();
        Ninja(const string &nameN ,const Point &location);
        //~Ninja();
        void move(Character *enemy);
        void slash(Character *enemy);
        virtual string print();
    };

    class OldNinja : public Ninja
    {
        private:
        const int speed = 12;
       
        public:
        //Ninja();
        OldNinja(const string &nameN ,const Point &location);
        // {
        //~OldNinja(); 
        
    };

    class YoungNinja : public Ninja
        {
        private:
        const int speed = 14;
       
        public:
        //Ninja();
        YoungNinja(const string &nameN ,const Point &location);
        //~YoungNinja(); 
        
        
    };
    class TrainedNinja : public Ninja
    {
        private:
        const int speed = 8;
       
        public:
        //Ninja();
        TrainedNinja(const string &nameN ,const Point &location);
        //~TrainedNinja();
        
    };

}
