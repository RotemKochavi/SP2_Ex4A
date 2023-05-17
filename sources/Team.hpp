#include <vector>
#include "Point.hpp"
#include "Character.hpp"
#include "Ninja.hpp"
#include "Cowboy.hpp"

namespace ariel {
    class Team {
    private:
        Character* leader;
        std::vector<Character*> warriors;
    public:
        //Constructor
        Team(Character* character);
        //Copy constructor
        Team(const Team& other);
        //Move constructor
        Team(Team&& other) noexcept;
        //Copy assignment operator
        Team& operator=(const Team& other);
        //Move assignment operator
        Team& operator=(Team&& other) noexcept;
        // Destructor,frees the memory allocated to all characters in the group.
        ~Team();
        //Receives a pointer for a morning or ninja, and adds it to the group.
        void add(Character* warrior);
        
        void attack(Team* enemies);
        //Returns an integer number of surviving group members
        int stillAlive();
        //Goes through all the characters in the group and prints their details
        void print();
    };
}