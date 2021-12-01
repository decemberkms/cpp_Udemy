#include <iostream>
#include <cmath>

using namespace std;

int main() 
{   
    double num {};

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "sqrt " << sqrt(num) << endl;
    cout << "cubed root " << cbrt(num) << endl;

    cout << "Sine " << sin(num) << endl;
    cout << "Cosine " << cos(num) << endl;     

    cout << "ceil " << ceil(num) << endl;   
    cout << "floor " << floor(num) << endl;   
    cout << "round " << round(num) << endl;   

    double power {};

    cout << "\nEnter a power to raise " << num << "to;";
    cin >> power;

    cout << "power " << pow(num, power) << endl;




    return 0;
}