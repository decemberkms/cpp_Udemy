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
    string name;
    int health;
    int xp;

    // methods
    void talk(string text_to_say){cout << name << " says " << text_to_say << endl;}
    bool is_dead();
};

class Account
{
public:
    //attribute
    string name;
    double balance;

    //method
    void deposit(double bal)
    {   
        balance += bal; 
        cout << "In deposit" << endl;

    }
    void withdraw(double bal){balance -= bal; cout << "In withdraw" << endl;}
};

int main() 
{ 
    Account minsung_kim;
    minsung_kim.name = "Minsung Kim";
    minsung_kim.balance = 5000.0;

    minsung_kim.deposit(1000.0);
    minsung_kim.withdraw(500.0);


    Account *pee = new Account[2];
    pee->name = "Pee";
    pee->balance = 10.0;
    (*pee).deposit(100.0);


    Player Minsung;
    Minsung.name = "Minsung";
    Minsung.health = 100;
    Minsung.xp = 23;

    Minsung.talk("Hi there!");
    
    Player *enemy = new Player();
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;

    enemy->talk("I will destory you.");

    return 0;
}
