#include <iostream>
#include <bitset>
#include <iomanip>

int main()
{   
    double num {1234.5678};
    std::string hello {"Hello"};

    std::cout << std::setfill('-')<< std::setw(8) << std::left << num 
    << std::setw(8) << hello << std::endl;

 

    return 0;
}