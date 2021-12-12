
#include <iostream>

class I_Printalbe{
    friend std::ostream &operator<<(std::ostream &os, const I_Printalbe &obj);
public:
    virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_Printalbe &obj){
    obj.print(os);
    return os;
}

class Account:public I_Printalbe{
public:
    virtual void withdraw(double amount){
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os << "Account display";
    }
    virtual ~Account(){}
};



class Checking: public Account{
public:
    virtual void withdraw(double amount) override{
        std::cout << "In Checking Account::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os << "Checking display";
    }
    virtual ~Checking(){}
};


class Savings: public Account{
public:
    virtual void withdraw(double amount) override{
        std::cout << "In Savings Account::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os << "Savings display";
    }
    virtual ~Savings(){}
};



class Trust: public Account{
public:
    virtual void withdraw(double amount) override{
        std::cout << "In Trust Account::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os << "Trust display";
    }
    virtual ~Trust(){}
};

class Dog: public I_Printalbe{
public: 
    virtual void print(std::ostream &os) const override{
        os << "Wooof woof";
    }

};



int main()
{   
    // Account a;
    // std::cout << a << std::endl;
    // Checking c;
    // std::cout << c << std::endl;
    // Savings s;
    // std::cout << s << std::endl;
    // Trust t;
    // std::cout << t << std::endl;
    Account *p1 = new Account();
    std::cout << *p1 << std::endl;

    Account *p2 = new Checking();
    std::cout << *p2 << std::endl;

    Dog *dog = new Dog();
    std::cout << *dog << std::endl;    

    return 0;
}