#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
// or #pragma once
#include <string>

class Account
{
private:
    double balance;
    std::string name;

public:
    Account();
    Account(std::string name, double balance);
    Account(std::string name);
    Account(double balance);

    ~Account(); // it's invoked when a local objects goes out of scope
    // or when the pointer to an object is deleted.


    void set_balance(double bal);
    double get_balance();

    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif