#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()

using namespace std;

int main() 
{   
    int random_number {};
    size_t count {10};
    int min {1};
    int max {6};

    cout << "Rand_max on my system: " << RAND_MAX << endl;

    srand(time(nullptr));

    for (size_t i {1}; i <= count; ++i)
    {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }

    cout << endl;
    return 0;
}