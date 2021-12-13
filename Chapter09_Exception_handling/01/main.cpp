#include <iostream>


int main(){
    double sum {10.0};
    double total {0};
    double average {};

    try {
    if (total == 0)
        throw 0;
    else
        average = sum / total;
    }
    catch (int &ex){
        std::cerr << "can't divide by zero" << std::endl;
        
    }
    std::cout << "Program continues" << std::endl;
    return 0;
}