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
    //attributes
    string name;
    int health;
    int xp;
public:
    // methods
    void talk(string text_to_say){cout << name << " says " << text_to_say << endl;}
    bool is_dead();
};



int main() 
{ 
    Player Minsung;
    // cout << Minsung.health << endl;
    // Minsung.name = "Minsung";
    // Minsung.health = 100;
    // Minsung.xp = 23;

    Minsung.talk("Hi there!");
    
 

    return 0;
}
