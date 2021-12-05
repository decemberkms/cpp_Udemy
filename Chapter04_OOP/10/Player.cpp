#include "Player.h"

// Delegating constructors
Player::Player(std::string name_val, int health_val, int xp_val)
:name{name_val}, health{health_val}, xp{xp_val}{
    std::cout << "Constructor called" << std::endl;
}

Player::~Player(){
    std::cout << "Destructor called for: " << name << std::endl;
}

//copy constructor
Player::Player(const Player& source)
    // :name(source.name), health(source.health), xp(source.xp)
    :Player{source.name, source.health, source.xp } {
        std::cout << "Copy constructor - made copy of: " << source.name << std::endl;
}

void Player::set_name(std::string name_val)
    {
        name = name_val;
    }

std::string Player::get_name()
    {
        return name;
    }

int Player::get_health()
{
    return health;
}

int Player::get_xp()
{
    return xp;
}