#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    // member functions
    void set_name(std::string name_val);
    std::string get_name();

    // Overloaded Constructors
    // Player();
    // Player(std::string name_val);
    Player(std::string name_val = "None", 
           int health_val = 0, 
           int xp_val = 0);
    // Destructor
    ~Player();
};


#endif