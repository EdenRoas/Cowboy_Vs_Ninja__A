
#include "Point.hpp"
using namespace std;

namespace ariel
{
        //Point p(1,1);
        
        Point::Point(double x_l , double y_r) :  x(x_l), y(y_r)
        {
            
        }
        //Point::~Point(){}
        double Point::distance(Point p)
        {
            return -1;
        }
        string Point::winner()
        {
            return "";
        }
        string Point::print()
        {
           return "stam";
        }
        Point Point::moveTowards(Point a, Point b ,double dis)
        {   
            Point p(1,1);
            return p;
        }
        

}