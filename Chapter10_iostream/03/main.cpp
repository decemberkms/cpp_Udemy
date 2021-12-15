#include <iostream>
#include <bitset>
#include <iomanip>

int main()
{   
    double num {1234567890.987654321};

    // std::cout << std::setprecision(30);
    std::cout << std::fixed; // from the right - change where to start
    std::cout << std::showpoint;
    std::cout << std::setprecision(3);
    std::cout << num << std::endl;

    std::cout << std::scientific;
    std::cout << std::uppercase;
    std::cout << std::showpos;
    
    std::cout << num << std::endl;

    return 0;
}