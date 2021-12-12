
#include <iostream>


class Account{
friend std::ostream &operator<<(std::ostream &os, const Account &account);
public:
    virtual void withdraw(double amount){
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account(){}
};

std::ostream &operator<<(std::ostream&os, const Account &account){
    os << "Account display";
    return os;
}

class Checking: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Checking &account);
public:
    virtual void withdraw(double amount) override{
        std::cout << "In Checking Account::withdraw" << std::endl;
    }
    virtual ~Checking(){}
};

std::ostream &operator<<(std::ostream &os, const Checking &account){
    os << "Checking display";
    return os;
}

class Savings: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Savings &account);
public:
    virtual void withdraw(double amount) override{
        std::cout << "In Savings Account::withdraw" << std::endl;
    }
    virtual ~Savings(){}
};

std::ostream &operator<<(std::ostream &os, const Savings &Account){
    os << "Savings display";
    return os;
}

class Trust: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Trust &account);
public:
    virtual void withdraw(double amount) override{
        std::cout << "In Trust Account::withdraw" << std::endl;
    }
    virtual ~Trust(){}
};

std::ostream &operator<<(std::ostream &os, const Trust &Account){
    os << "Trust display";
    return os;
}


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


    return 0;
}