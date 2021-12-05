#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>
#include "Player.h"

using namespace std;

void display_player(Player p);

int main() 
{
    Player empty {"XXXX", 100, 50};

    Player my_new_object {empty};
    
    display_player(empty);


    Player minsung{"Minsung"};
    Player villain {"Villain",100,55};
    Player hero {"Hero", 100};    

    return 0;
}

void display_player(Player p){
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}
