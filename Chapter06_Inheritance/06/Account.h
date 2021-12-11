#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

class Account
{
friend  std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    double balance;
    std::string name;
public:
    Account();
    Account(double balance_val);
    Account(double balance_val, std::string name_val);
    ~Account();
    
    void deposit(double amount);
    void withdraw(double amount);
    
};


#endif