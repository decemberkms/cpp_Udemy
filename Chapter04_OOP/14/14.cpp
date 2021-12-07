#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    std::string get_name() const { // I guarantee that I will not change the object in this function
        // xp = 101; // does work here due to const
        return name;
    }
    void set_name(std::string name_val){
        name = name_val;
    }

//overloaded constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
    :Player{"None", 0, 0} {
    }

Player::Player(std::string name_val)
    :Player{name_val, 0, 0} {
    }

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {
    }

void display_player_name(const Player &p){
    cout << p.get_name() << endl;
}


int main()
{
    const Player villian {"Villian", 100, 55};
    
    Player hero {"Hero", 100, 15};

    // villian.set_name("Super villian");
    cout <<    villian.get_name() <<endl; 
    cout <<    hero.get_name() <<endl; 

    
    display_player_name(villian);
    display_player_name(hero);
    
    return 0;
}