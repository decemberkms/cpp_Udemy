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
    char test[] = "Hello";
    // strcpy(test, "Hi");
    // cout << test << endl;
    // char test1[] {"Hello"};
    
    // cout << test << endl;
    // cout << strlen(test) <<endl;
    // for (int i = 0; i < 9; ++i)
    //     cout << test1[i] << "";
    // cout << endl;

    for (int i = 0; i < 6; ++i)
        cout << (int)test[i] << endl;
    cout << "End here" << endl;
    
    cout << sizeof(test) / sizeof(test[0]) << endl;

    Mystring empty; // no-args constructor
    Mystring larry{"Larry"}; // overloaded constructor
    Mystring stooge {larry}; //copy constructor}

    empty.display();
    larry.display();
    stooge.display();


    
    return 0;
}
