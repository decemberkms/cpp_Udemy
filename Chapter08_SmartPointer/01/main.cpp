#include <iostream>
#include <memory>
#include <vector>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"

class Test{
private:
    int data;
public:
    Test():data{0}{std::cout << "Test Constructor (" << data << ")" << std::endl;}
    Test(int data):data{data}{std::cout << "Test Constructor (" << data << ")" << std::endl;}
    int get_data() const {return data;}
    ~Test(){std::cout << "Test Destructor (" << data << ")" << std::endl;}
};


int main(){
    
    // Test *p1 = new Test{1000};
    // delete p1;

    std::unique_ptr<Test> tz {new Test{1000}};
    std::unique_ptr<Test> t1 {new Test{100}};
    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);
    std::unique_ptr<Test> t3;
    t3 = std::move(t1);
    if (!t1)
        std::cout << "t1 is nullpointer" <<std::endl;
    
    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);

    std::cout << *a1 << std::endl;
    a1->deposit(5000);
    std::cout << *a1 << std::endl;
    
    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<Checking_Account>("Min", 99999999));
    accounts.push_back(std::make_unique<Trust_Account>("Min2", 4121245215, 5.2));
    accounts.push_back(std::make_unique<Savings_Account>("Min3", 31241214214124, 4.2));

    for (auto &acc:accounts)
        std::cout << *acc << std::endl;

    return 0;
}