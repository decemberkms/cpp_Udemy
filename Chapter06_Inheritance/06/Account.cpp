#include "Account.h"


Account::Account()
    :Account(0.0, "None"){ //delegating constructors
}

Account::Account(double balance_val)
    :Account(balance_val, "None"){ //delegating constructors
}

Account::Account(double balance_val, std::string name_val)
    :balance{balance_val}, name{name_val}{
}

Account::~Account(){

}

void Account::deposit(double amount){
    std::cout << "Account deposit called with " << amount << std::endl;
    balance += amount;
    
}

void Account::withdraw(double amount){
    std::cout << "Account withdraw called with " << amount << std::endl;
    if (balance - amount >= 0)
        balance -= amount;
    else
        std::cout << "Insufficient funds" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os << "Account balance: " << account.balance;
    return os;
}