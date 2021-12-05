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
    std::string get_name()
    {
        return name;
    }

    // // Overloaded Constructors
    // Player(){
    //     cout << "No args constuctor called" << endl;
    // }
    // Player(std::string name){
    //     cout << "String arg constuctor called" << endl;
    // }
    // Player(std::string name, int health, int xp){
    //     cout << "Three args constuctor called" << endl;
    // }
    // // Destructor
    // ~Player(){
    //     cout << "Deconstructor called for " << name << endl;
    // }

    // Player(){
    //     name = "None";
    //     helath = 100;
    //     xp = 3;
    // }
        Player(std::string name_val, int health_val, int xp_val){
        name = name_val;
        helath = health_val;
        xp = xp_val;
    }

};


int main() 
{
    Player minsung(string("JHa"), 100, 2);
    cout << minsung.get_name() << endl;
    minsung.set_name("Minsung");
    cout << minsung.get_name() << endl;


    return 0;
}
