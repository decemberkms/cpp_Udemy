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
    int scores[] {100, 95, 89};

    cout << scores << endl;  // address of socres
    cout << *scores << endl; // first element of scores

    int *score_ptr {scores};
    
    cout << score_ptr << endl; // address of scores
    cout << *score_ptr << endl; // first element
    
    for (int i = 0; i < 3; ++i)
        cout << score_ptr[i] << endl; 
    
    for (int i = 0; i < 3; ++i)
        cout << *(score_ptr + i) << endl; 
    


    return 0;
}
