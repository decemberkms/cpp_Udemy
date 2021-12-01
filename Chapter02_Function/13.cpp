#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>

using namespace std;


unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}


unsigned long long fibonachi(unsigned long long n)
{
    if (n <= 1)
        return n;
    return fibonachi(n - 1) + fibonachi(n -2);
}


int main() 
{  

    cout << fibonachi(30) << endl;
    return 0;
}
