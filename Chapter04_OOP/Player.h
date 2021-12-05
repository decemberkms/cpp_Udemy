#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>



class Player
{
private:
    std::string name;
    int helath;
    int xp;

public:
    // member functions
    void set_name(std::string name_val)
    {
        name = name_val;
    }
    std::string get_name();

    // Overloaded Constructors
    Player();
    Player(std::string name);
    Player(std::string name, int health, int xp);
    // Destructor
    ~Player();



};


#endif