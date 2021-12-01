#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>

using namespace std;



int main() 
{  
    int *p;
    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    // cout << "Value of p is: " << *p << endl;
    cout << "Size of p is: " << sizeof p << endl;
    p = nullptr;
    cout << endl;
    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    // cout << "Value of p is: " << *p << endl; //run time error
    cout << "Size of p is: " << sizeof p << endl;

    cout << endl;

    int score {10};
    double high_temp {100.8};
    int *score_ptr {nullptr};

    score_ptr = &score;
    // score_ptr = &high_temp; // pointer's data type also matter


    return 0;
}
