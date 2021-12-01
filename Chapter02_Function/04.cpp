#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()

using namespace std;


// function modularisation

const double pi {3.141592};

void area_circle();
void volume_cylinder();
double calc_volume(double radius, double height);
double calc_area(double radius);

int main() 
{   
    area_circle();
    volume_cylinder();
    return 0;
}


double calc_area(double radius)
{
    return pi * radius * radius;
}

double calc_volume(double radius, double height)
{
    return calc_area(radius) * height;
}

void area_circle()
{
    double radius {};
    cout << "\nEnter the radius: ";
    cin >> radius;
    cout << "The area: " << calc_area(radius) << endl;
}

void volume_cylinder()
{
    double height {};
    double radius {};
    cout << "\nEnter the radius: ";
    cin >> radius;
    cout << "\nEnter the height: ";
    cin >> height;
    cout << "The volume: " << calc_volume(radius, height) << endl;
}