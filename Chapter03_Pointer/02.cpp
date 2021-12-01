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
    int score {100};
    int *score_ptr {&score};

    cout << *score_ptr << endl;

    *score_ptr = 200;
    // score = 300;
    cout << *score_ptr << endl;
    cout << score << endl;

    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};
    double **temp_ptr_2 {&temp_ptr};

    cout << temp_ptr_2 << endl;
    cout << &temp_ptr << endl;
    
    
    cout << *temp_ptr << endl;

    temp_ptr = &low_temp;
    
    cout << *temp_ptr << endl;

    string name {"Frank"};
    string *string_ptr {&name};
    cout << *string_ptr << endl;
    name = "James";
    cout << *string_ptr << endl;

    vector<string> stooges {"Min", "Sung", "Kim"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;
    
    cout << "First " << (*vector_ptr).at(0) << endl;
    cout << "Stooges: ";
    for (auto stooge:*vector_ptr)
        cout << stooge << " ";
    cout << endl;

     for (int i = 0; i < 3; ++i)
    {
            
        cout << stooges.at(i) << endl;
        cout << &(stooges.at(i)) << endl;
    }
    
    cout << endl;
    cout << &stooges << endl;
    
    for (int i = 0; i < 3; ++i)
    {
        cout << (vector_ptr + i) << endl;
    }

    return 0;
}
