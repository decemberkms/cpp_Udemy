#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>

using namespace std;


double a_penny_doubled_everyday(int count, double &total_amount) 
{
    if (count <= 1)
        return 0.01;
    
    return 2 * a_penny_doubled_everyday(count - 1, total_amount);
}

int main() 
{  
    double total_amount {};
    
    cout << a_penny_doubled_everyday(17, total_amount);
    return 0;
}
