#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>

using namespace std;

void double_data(int *int_ptr);

void double_data(int *int_ptr)
{
    *int_ptr *= 2;

}


int main() 
{ 
    int value {10};

    cout << value << endl;

    double_data(&value);
    cout << value << endl;
    return 0;
}
