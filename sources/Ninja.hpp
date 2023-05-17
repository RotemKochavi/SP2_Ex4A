#pragma once

#include "Character.hpp"
using namespace std;
namespace ariel
{
	class Ninja : public Character
	{
		protected:
			
			int _speed;

		public:
			
			Ninja(string name, Point location, int health_points, int speed);
			void move(Character *other);
			void slash(Character *other);
			string print() const override;
	};

    class YoungNinja : public Ninja{
		
        public:
			YoungNinja(string name, Point location);
	};

	class TrainedNinja : public Ninja{
		
        public:	
			TrainedNinja(string name, Point location);
	};

	class OldNinja : public Ninja{
		
        public:	
			OldNinja(string name, Point location);
	};

}