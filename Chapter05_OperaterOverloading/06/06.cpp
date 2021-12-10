#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>
#include "Mystring.h"
#include <cstring>

using namespace std;




int main() 
{   
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;

    cout << "Enter the third stooge's first name: ";
    cin >> curly;

    cout << "This three stooges are " << larry << "," << moe << ", and " << curly << endl;

    cout << "\n Enter the thre stooges names separated by s space: ";
    cin >> larry >> moe >> curly;
 
    cout << "This three stooges are " << larry << "," << moe << ", and " << curly << endl;
    
    return 0;
}
