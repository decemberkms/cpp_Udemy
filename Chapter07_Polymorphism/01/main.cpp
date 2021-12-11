#include <iostream>
#include <memory>

class Base{
public:
    void say_hello() const{
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived: public Base{
public:
    void say_hello() const{
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};


void greetings(const Base &obj){ // static binding
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main()
{

    Base base;
    base.say_hello();
    Derived derived;
    derived.say_hello();

    greetings(base);
    greetings(derived);

    Base *ptr = new Derived();

    ptr->say_hello(); // no dynamic polymorphism so always bound to Base

    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();

    ptr1->say_hello();


    delete ptr;
    
    return 0;
}