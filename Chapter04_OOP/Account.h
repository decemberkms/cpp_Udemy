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
    void set_balance(double bal);
    double get_balance();

    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif