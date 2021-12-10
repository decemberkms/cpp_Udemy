#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>
#include "Mystring.h"
#include <cstring>

using namespace std;




int main() 
{   
    cout << boolalpha << endl;
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;
    larry.display();
    moe.display();

    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;

    larry.display();
    Mystring larry2 = -larry;  // lowercase
    larry2.display();

    Mystring stooges = larry + "Moe";  //ok with member function
    Mystring stooges2 = "Moe" + larry; // error
    stooges2.display();
    
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();
    
    return 0;
}
