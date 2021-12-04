#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>

using namespace std;

class Player
{
    //attributes
    std::string name;
    int health;
    int xp;

    // methods
    void talk(std::string text_to_say);
    bool is_dead();
};

int main() 
{ 
    Player Minsung;
    Player hero;

    Player *enemy = new Player();
    delete enemy;



    return 0;
}
