#include "doctest.h"
#include <stdexcept>
#include <sstream>
#include "Point.hpp"
#include "Character.hpp"
#include "Team.hpp"

using namespace ariel;

 TEST_CASE("Valid Inputs")
{
    Point a(3.5, 1.0),b(5.5, 2.0);
    Point c(5.5, 3.0), d(3.5,0.0),o(0,0);
    Character e("Eden",a,0) , i("Itamar",o,0);
    Character p("pritz", c, 0), s("stav", b,10), sh("Shaked",d,20);
    SUBCASE("The Point is Valid")
    {
        

        CHECK(a.distance(c) == b.distance(d));
        CHECK(a.print() == "(3.5,1.0)");
        CHECK_NOTHROW(Point::moveTowards(a,b,2.0) = c);
        
    }
    SUBCASE("Valid Character"){
        CHECK(e.isAlive() == false);
        CHECK(p.isAlive() == false);
        CHECK(i.isAlive() == false);
        CHECK(sh.isAlive() == true);
        CHECK(s.isAlive() == true);
        CHECK(e.distance(i) == a.distance(o));
        CHECK(e.getName() == "Eden");
        CHECK(i.getName() == "Itamar");
        CHECK(p.getName() == "pritz");
        //CHECK(e.getLocation() = a);
        //CHECK(i.getLocation() = o);
        //CHECK(p.getLocation() = c);
        s.hit(8);
        sh.hit(7);
        CHECK(s.getPoints() == 3);

    }
    SUBCASE("Valid Cowboy"){
        Cowboy s("stav",b),sh("Shaked",d);
        s.reload();
        sh.reload();
        sh.reload();
        CHECK(s.hasboolets() == true);
        CHECK(sh.hasboolets() == true);
        CHECK(s.print() == "Stav");
        CHECK(sh.print() == "Shaked");

    }
    SUBCASE("Valid Ninja"){
        OldNinja e("Eden",a);
        TrainedNinja i("Itamar", o);
        YoungNinja s("Stav",b );
        
        CHECK_NOTHROW(e.move(&i));
        CHECK_NOTHROW(i.slash(&s));
        CHECK_NOTHROW(e.slash(&s));
    }

    SUBCASE("Valid Team"){
        OldNinja e("Eden",a);
        TrainedNinja i("Itamar", o);
        YoungNinja s("Stav",b );
        Cowboy p("pritz",b),sh("Shaked",d);
        Team team(&e);
        Team team2(&i);
        CHECK_NOTHROW(team.add(&s));
        CHECK(team.stillAlive()== 2);
        CHECK_NOTHROW(team.print());
        CHECK_NOTHROW(team.attack(&team2));

    }
}