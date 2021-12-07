#include "Player.h"

int Player::num_players {0};

Player::Player()
    :Player{"None", 0, 0} {
    }

Player::Player(std::string name_val)
    :Player{name_val, 0, 0} {
    }

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {
        ++num_players;
    }

Player::~Player(){
    --num_players;
    std::cout << "Destructor called for: " << name << std::endl;
}

std::string Player::get_name() const { 
    return name;
}

void Player::set_name(std::string name_val){
    name = name_val;
}

int Player::get_num_player(){
    return num_players;
}

int Player::get_health(){
    return health;
}

int Player::get_xp(){
    return xp;
}

Player::Player(const Player &source)
    :Player{source.name, source.health, source.xp}{

    }