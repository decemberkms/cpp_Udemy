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
    string s1 {"Minsung"};
    string s2 {"Minsung"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << (p1 == p2) << endl;
    cout << (p1 == p3) << endl;

    cout << (*p1 == *p2) << endl;
    cout << (*p1 == *p3) << endl;


    int scores[] {100, 95, 85, 84 , -1};
    int *score_ptr {scores};

    while (*score_ptr != -1)
    {
        cout << (*score_ptr) << endl;
        score_ptr++;
    }

    cout << "------------" << endl;

    score_ptr = scores;
    while (*score_ptr != -1)
        cout << *score_ptr++ << endl; // associativity - right to left


    char name[] {"Minsung"};

    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};

    char_ptr1 = &name[0];
    char_ptr2 = &name[3];

    cout << name <<  *char_ptr2 << " "  << (char_ptr2 - char_ptr1) << " ";
    return 0;
}
