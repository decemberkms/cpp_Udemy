#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// they have to be at tail end
double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);

void greeting(string name, string prefix = "Mr.", string suffix = "");

void greeting(string name, string prefix, string suffix)
{
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;    
}


double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

int main() 
{   
    double cost {0};
    cost = calc_cost(100.0, 0.08, 4.25);

    cout << fixed << setprecision(2);
    cout << "Cost is " << cost << endl;

    cost = calc_cost(100.0, 0.08);
    cout << "Cost is " << cost << endl;
    
    cost = calc_cost(200.0);
    cout << "Cost is " << cost << endl;


    greeting("Minsung Kim", "Dr", "KM");


    
    return 0;
}

