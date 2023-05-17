#pragma once

#include <string>
#include "Point.hpp"

namespace ariel
{
	class Character
	{
		protected:
			
			string _name;
			Point& _location;
			int _hp;
			bool _inteam;

		public:
			
			Character(string name, Point& location, int health_points);
			bool isAlive() const;
			double distance(Character *other) const;
			void hit(int power);
			string getName() const;
			const Point& getLocation() const;
			void setLocation(Point& location);
			bool isInTeam() const;
			void setInTeam(bool inTeam);
			int getHP() const;
			virtual string print() const = 0;
	};
}