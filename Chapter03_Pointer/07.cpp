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
    /*
        Three ways of constant & pointer
        - pointers to constants
        - constant pointers
        - constant pointers to constants
    */

    //pointers to constants
    // the data pointed to by the pointers is constant and cannot be changed
    // the pointer itself can change and pointe somewhere else.
    // int high_score {100};
    // int low_score {65};
    // const int *score_ptr {&high_score};

    // // *score_ptr = 86;//  error pointer to an integer constant! cannot change!
    // score_ptr = &low_score; // okay


    //constant pointers
    // the data pointed bt the pointers can be changed
    // the pointer itself cannot change and point somewhere else

    // int high_score {100};
    // int low_score {65};
    // int *const score_ptr {&high_score};
    // *score_ptr = 86;// okay
    // score_ptr = &low_score; // error!

    // constant pointers to constnats

    int high_score {100};
    int low_score {65};
    const int *const score_ptr {&high_score};
    // *score_ptr = 86;// error!
    // score_ptr = &low_score; // error!

    return 0;
}
