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
    int *int_ptr {nullptr};
    int_ptr = new int;

    cout << int_ptr << endl;

    cout << *int_ptr << endl;

    *int_ptr = 100;

    cout << *int_ptr << endl;

    delete int_ptr;

    return 0;
}
