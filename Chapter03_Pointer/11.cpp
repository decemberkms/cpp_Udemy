#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>

using namespace std;

int square(const int &n)
{
    return n * n;
}

int main() 
{ 
    int num {10};

    cout << square(num) << endl;
    cout << square(5) << endl;


    return 0;
}
