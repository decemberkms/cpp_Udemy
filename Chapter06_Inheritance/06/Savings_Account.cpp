#include "Savings_Account.h"


Savings_Account::Savings_Account()
    :Savings_Account(0.0, 3.0){
}

Savings_Account::Savings_Account(double balance_val)
    :Savings_Account(0.0, 3.0){
}

Savings_Account::Savings_Account(double balance_val, double int_rate_val)
    :Account(balance),int_rate{int_rate_val}{
}

Savings_Account::~Savings_Account(){

}

void Savings_Account::deposit(double amount){
    std::cout << "Savings Account deposit called with " << amount << std::endl;
    amount += (amount*int_rate/100);
    Account::deposit(amount);
    
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &sa_account){
    os << "Savings Account: " << sa_account.balance << "\nInterest Rate: " << sa_account.int_rate;
    return os;
}

// void Savings_Account::withdraw(double amount){
//     std::cout << "Savings Account withdraw called with " << amount << std::endl;
// }