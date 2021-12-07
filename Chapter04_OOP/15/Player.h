#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <string>


class Player
{
private:
    static int num_players;
    std::string name;
    int health;
    int xp;

public:
    static int get_num_player();
    std::string get_name() const;
    void set_name(std::string name_val);
    int get_health();
    int get_xp();

//overloaded constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
//Copy constructor
    Player(const Player &source);
//Destructor
    ~Player();
};



#endif

