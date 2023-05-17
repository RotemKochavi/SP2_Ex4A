#include "Character.hpp"

using namespace std;
using namespace ariel;

Character::Character(string name, Point &location, int health_points) : _name(name), _location(location), _hp(health_points) {}

bool Character::isAlive() const{
	return false;
}

double Character::distance(Character *other) const{
	return 0.0;
}

void Character::hit(int power){
	return;
}

string Character::getName() const{
	return "";
}

const Point& Character::getLocation() const{
	return _location;
}

void Character::setLocation(Point &location){
	return;
}

bool Character::isInTeam() const{
	return false;
}

void Character::setInTeam(bool in_team){
	return;
}

int Character::getHP() const{
	return 0;
}