#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test{
private:
    int data;
public:
    Test():data{0}{std::cout << "Test Constructor (" << data << ")" << std::endl;}
    Test(int data):data{data}{std::cout << "Test Constructor (" << data << ")" << std::endl;}
    int get_data() const {return data;}
    ~Test(){std::cout << "Test Destructor (" << data << ")" << std::endl;}
};

void my_deleter(Test *ptr){
    std::cout << "In my custom deleter" << std::endl;
    delete ptr;
}

int main(){
    
    std::unique_ptr<int> ptr1 = std::make_unique<int>(100);
    cout << *(ptr1.get()) << endl;

    return 0;
}