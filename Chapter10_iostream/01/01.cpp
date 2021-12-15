#include <iostream>

int main()
{   
    std::cout.setf(std::ios::boolalpha); // std namesapce ios class bool~ - flag defined in that class
    bool a {true};
    // std::cout << std::boolalpha;
    std::cout << a << std::endl;
    std::cout << std::noboolalpha;
    std::cout << a << std::endl;
    
    // std::resetiosflags();
    return 0;
}