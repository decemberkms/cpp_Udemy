#include <iostream>
#include <memory>
#include <vector>

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
    
    std::shared_ptr<Test> ptr {new Test(1000), my_deleter};
    std::shared_ptr<Test> ptr1 (new Test{10000}, 
        [] (Test *ptr) {
            std::cout << "\t Using my custrom deleter" << std::endl;
            delete ptr;
        });

    return 0;
}