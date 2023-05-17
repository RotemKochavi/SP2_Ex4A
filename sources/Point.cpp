#include "Point.hpp"

using namespace std;
using namespace ariel;

Point::Point() : _x(0.0), _y(0.0) {}

Point::Point(double p_x, double p_y) : _x(p_x), _y(p_y) {}

double Point::getX() const{
    return 0.0;
}

double Point::getY() const{
	return 0.0;
}

double Point::distance(Point other) const{
	return 0.0;
}

string Point::print() const{
	return " ";
}

Point Point::moveTowards(Point source, Point destination, double distance){
	return Point();
}