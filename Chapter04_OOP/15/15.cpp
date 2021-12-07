#include <iostream>
#include <vector>
#include <string>
#include "Player.h"

using namespace std;

// void display_player_name(const Player &p){
//     cout << p.get_name() << endl;
// }

void display_active_players(){
    cout << "Active player: " << Player::get_num_player() << endl;
}

int main()
{
    const Player villian {"Villian", 100, 55};
    
    Player hero {"Hero", 100, 15};

    // villian.set_name("Super villian");
    cout <<    villian.get_name() <<endl; 
    cout <<    hero.get_name() <<endl; 
    {
        Player uer1 {"Minsung", 1000, 1000};
        display_active_players();
    }

    display_active_players();
    
    return 0;
}