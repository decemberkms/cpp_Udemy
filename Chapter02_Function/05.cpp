#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);


int main() 
{   
    int num {10};
    int another_num {20};

    cout << num << endl;
    pass_by_value1(num);
    cout << num << endl;

    cout << another_num << endl;
    pass_by_value1(another_num);
    cout << another_num << endl;

    string name {"Minsung"};
    cout << name << endl;
    pass_by_value2(name);
    cout << name << endl;

    vector<string> namelist {"Minsung", "Pee", "Ba lo" };
    print_vector(namelist);
    pass_by_value3(namelist);
    print_vector(namelist);

    return 0;
}

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value3(vector<string> v)
{
    v.clear();
}

void print_vector(vector<string> v)
{
    for (auto s:v)
        cout << s << " ";
    cout << endl;
}