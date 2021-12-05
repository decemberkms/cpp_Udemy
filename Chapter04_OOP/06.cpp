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
    Player(){
        cout << "No args constuctor called" << endl;
    }
    Player(std::string name){
        cout << "String arg constuctor called" << endl;
    }
    Player(std::string name, int health, int xp){
        cout << "Three args constuctor called" << endl;
    }
    // Destructor
    ~Player(){
        cout << "Deconstructor called for " << name << endl;
    }
};


int main() 
{ 
    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;


    return 0;
}
