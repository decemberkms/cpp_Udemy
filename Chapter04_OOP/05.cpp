#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>
#include "Account.h"

using namespace std;

int main() 
{ 
    Account minsung_account;
    minsung_account.set_name("Minsung's account");
    minsung_account.set_balance(1000.0);

    if (minsung_account.deposit(200.0)) 
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit not allowed" <<endl;

    if (minsung_account.withdraw(500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    if (minsung_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;


    double bal = minsung_account.get_balance();

    std::cout << bal << std::endl;

    return 0;
}
