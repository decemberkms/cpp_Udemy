#include <iostream>
#include <bitset>

int main()
{   
    int num {255};

    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);
    std::cout << std::showbase << std::uppercase; // std::noshowbase
    std::cout << std::showpos; // std::noshowpos
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;  
    std::cout << std::oct << num << std::endl;
   
    std::cout << std::bitset<8>(num) << '\n';


    return 0;
}