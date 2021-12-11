#include <iostream>

class Account {
public:
    virtual void withdraw(double amount){
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account(){std::cout << "In Account::destructor" << std::endl;}
};

class Checking: public Account {
    virtual void withdraw(double amount){
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking(){std::cout << "In Checking::destructor" << std::endl;}
};

class Saving: public Account {
    virtual void withdraw(double amount){
        std::cout << "In Saving::withdraw" << std::endl;
    }
    virtual ~Saving(){std::cout << "In Saving::destructor" << std::endl;}
};

class Trust: public Account {
    virtual void withdraw(double amount){
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust(){std::cout << "In Trust::destructor" << std::endl;}
};

int main()
{
    std::cout << "\n===Pointers===" << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Checking();
    Account *p3 = new Saving();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "\n===Clean up===" << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    return 0;
}