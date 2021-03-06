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
    public:
    //attributes
    std::string name;
    int health;
    int xp;

    // methods
    void talk(std::string text_to_say);
    bool is_dea();
};

int main() 
{ 
    Player Minsung;
    Player hero;

    Player players[] {Minsung, hero};
    cout << Minsung.health << endl;
    cout << Minsung.xp << endl;



    vector<Player> player_vec {Minsung};
    player_vec.push_back(hero);



    Player *enemy = new Player();
    delete enemy;



    return 0;
}
