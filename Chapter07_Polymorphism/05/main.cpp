#include <iostream>

class Account {
public:
    virtual void withdraw(double amount) const{
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account(){std::cout << "In Account::destructor" << std::endl;}
};

class Checking: public Account {
public:
    virtual void withdraw(double amount) const{
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking(){std::cout << "In Checking::destructor" << std::endl;}
};

class Saving: public Account {
public:
    virtual void withdraw(double amount) const{
        std::cout << "In Saving::withdraw" << std::endl;
    }
    virtual ~Saving(){std::cout << "In Saving::destructor" << std::endl;}
};

class Trust: public Account {
public:
    virtual void withdraw(double amount) const{
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust(){std::cout << "In Trust::destructor" << std::endl;}
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main()
{
    std::cout << "\n===Reference===" << std::endl;

    Account a;
    Account &ref = a;
    ref.withdraw(1000);

    Trust tt;
    Account &ref1 = tt;
    ref1.withdraw(1000);

    Account a1;
    Saving a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 1000);
    do_withdraw(a2, 2000);
    do_withdraw(a3, 3000);
    do_withdraw(a4, 4000);


    return 0;
}