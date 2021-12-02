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
    vector<string> stooges {"Larry", "Moe", "Curly"};

    for (auto &str: stooges)
        str = "Funny";
    
    // for (auto const &str: stooges)
    //     str = "Funny";
    // for (int i = 0; i < 3; ++i)
    //     stooges[i] = "Funny";

    for (auto const &str: stooges)
        cout << str << endl;

    int num {100};
    int &ref {num};

    cout << num << endl;
    cout << ref << endl;

    num = 200;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << num << endl;
    cout << ref << endl;
    return 0;
}
