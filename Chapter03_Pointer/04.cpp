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
    int *array_ptr {nullptr};
    int size {};

    cout << "HOW big do you want the array? ";
    cin >> size;

    array_ptr = new int[size];
    
    // int array_size = sizeof(*array_ptr)/sizeof(int);
    // cout << array_size << endl;

    cout << endl;
    
    int array[10];
    cout << sizeof(array) / sizeof(int) << endl;
    
    // delete [] array_ptr;
    return 0;
}
