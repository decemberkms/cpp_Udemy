#include "Player.h"

// Delegating constructors
Player::Player(std::string name_val, int health_val, int xp_val)
:name{name_val}, health{health_val}, xp{xp_val}{
    std::cout << "Constructor called" << std::endl;
}

// Player::Player()
// :Player {"None", 0, 0} {
//     std::cout << "No args concturctor called" << std::endl;
// }

// Player::Player(std::string name_val)
// :Player {name_val, 0, 0} {
//     std::cout << "One arg concturctor called" << std::endl;
// }

Player::~Player(){
    std::cout << "Destructor called" << std::endl;
}

void Player::set_name(std::string name_val)
    {
        name = name_val;
    }

std::string Player::get_name()
    {
        return name;
    }
