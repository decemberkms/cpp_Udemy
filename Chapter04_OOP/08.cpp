#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>
#include "Player.h"
using namespace std;


// class Player
// {
// private:
//     std::string name;
//     int health;
//     int xp;
// public:
//     //constructor initialization lists
//     Player()
//     :name{"None"}, health{0}, xp{0}{
//     }
//     Player(std::string name_val)
//     :name{name_val}, health{0}, xp{0}{
//     }
//     Player(std::string name_val, int health_val, int xp_val)
//     :name{name_val}, health{health_val}, xp{xp_val}{
//     }
// };

int main() 
{

    Player empty;
    Player minsung{"Minsung"};
    Player villain {"Villain",100,55};
    
    return 0;
}
