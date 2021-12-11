#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main()
{
    cout << "Account: " << endl;
    Account a1{1000.0};
    cout << a1 << endl;

    a1.deposit(500.0);
    cout << a1 << endl;

    a1.withdraw(1000.0);
    cout << a1 << endl;
    
    a1.withdraw(5000.0);
    cout << a1 << endl;


    // Account *p_acc{nullptr};
    // p_acc = new Account();
    // p_acc->deposit(1000.0);
    // p_acc->withdraw(500.0);

    // delete p_acc;

    cout << "Savings Account: " << endl;

    Savings_Account sav_acc {3000.0, 5.0};

    sav_acc.deposit(2000.0);
    cout << sav_acc << endl;

    sav_acc.withdraw(500.0);
    cout << sav_acc << endl;

    sav_acc.withdraw(8500.0);
    cout << sav_acc << endl;
    
    // Savings_Account *p_sav_acc{nullptr};
    // p_sav_acc = new Savings_Account();
    // p_sav_acc->deposit(1000.0);
    // p_sav_acc->withdraw(500.0);

    // delete p_sav_acc;



    return 0;
}