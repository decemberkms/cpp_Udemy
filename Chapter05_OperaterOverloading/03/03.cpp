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
    Mystring a {"Hello"};
    Mystring b;
    b = a;

    b = "This is a test";

    Mystring c{"Hello"};
    c = Mystring{"Hola"};
    c = "Bonjour";

    
    return 0;
}
