#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>

#include "sources/Team.hpp"
#include "sources/Team2.hpp"


using namespace std;
using namespace ariel;

TEST_CASE("Test 1 :Distance between two points"){
    Point p1(1, 2);
    Point p2(2, 4);
    Point p3(0, 0);
    Point p4(0, 0);;

    CHECK(p1.distance(p2) == sqrt(5));
    CHECK(p3.distance(p4) == 0);
    CHECK(p4.distance(p3) == 0);
    CHECK(p4.distance(p4) == 0);

}

TEST_CASE("Test 2: Creation charcters - getName FUNC ") {
	YoungNinja c1("Young Ninja", Point(1, 2));
	TrainedNinja c2("Trained Ninja", Point(3, 4));
	OldNinja c3("Old Ninja", Point(5, 6));
    Cowboy c4("Cowby", Point(7, 8));

    // FUNC - getName 
	CHECK_EQ(c1.getName(), "Young Ninja");
	CHECK_EQ(c2.getName(), "Trained Ninja");
	CHECK_EQ(c3.getName(), "Old Ninja");
    CHECK_EQ(c4.getName(), "Cowby");

    // FUNC - getHP
	CHECK_EQ(c1.getHP(), 100);
	CHECK_EQ(c2.getHP(), 120);
	CHECK_EQ(c3.getHP(), 150);
    CHECK_EQ(c4.getHP(), 100);

    // FUNC - getLocation
	CHECK_EQ(c1.getLocation().getX(), 1);
	CHECK_EQ(c1.getLocation().getY(), 2);

	CHECK_EQ(c2.getLocation().getX(), 3);
	CHECK_EQ(c2.getLocation().getY(), 4);

	CHECK_EQ(c3.getLocation().getX(), 5);
	CHECK_EQ(c3.getLocation().getY(), 6);

	CHECK_EQ(c4.getLocation().getX(), 7);
	CHECK_EQ(c4.getLocation().getY(), 8);

    // FUNC - isAlive
	CHECK_EQ(c1.isAlive(), true);
	CHECK_EQ(c2.isAlive(), true);
	CHECK_EQ(c3.isAlive(), true);
	CHECK_EQ(c4.isAlive(), true);

}

TEST_CASE("Test 3 :Check moveTowards func"){
    Point source(1, 2);
    Point destination(4, 6);
    double distance = 5.0;

    Point res = destination.moveTowards(source, destination, distance);
    double expectedDistance = source.distance(res);
    CHECK(expectedDistance <= distance);
}

TEST_CASE(" Test 4: Ninja do not move when the enemy is far away") {

    Point ninja_location(0, 0);
    Point enemy_location(15, 15);

    Ninja ninja("Ninja", ninja_location);
    Character enemy("Enemy", enemy_location);

    double distance_befor_movement = ninja.getLocation().distance(enemy.getLocation());

    ninja.move(&enemy);
     
    double distance_after_movement = ninja.getLocation().distance(enemy.getLocation());

    CHECK(distance_after_movement == distance_befor_movement); // Expected: True.
}
