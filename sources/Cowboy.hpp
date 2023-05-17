#pragma once

#include "Character.hpp"

namespace ariel
{
	class Cowboy : public Character
	{
		private:
			
			int _bulletsAmount;

		public:
		
			Cowboy(string name, Point location);
			void shoot(Character *other);
			bool hasBullets() const;
			void reload();
			string print() const override;
	};
}