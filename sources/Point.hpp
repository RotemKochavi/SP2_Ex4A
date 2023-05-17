#pragma once

#include <string>

using namespace std;

namespace ariel
{
	class Point
	{
		private:
			double _x;
			double _y;

		public:
			
			Point();
            Point(double pt_x, double pt_y);
			double getX() const;
			double getY() const;
			double distance(Point other) const;
			string print() const;
			static const Point &moveTowards(const Point &curr, const Point &other, const double dist);
	};
}