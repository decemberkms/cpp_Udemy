#include <iostream>

using namespace std;


class Base{
    //Note friends of Base have access to all
public:
    int a {0};
    void display(){std::cout << a << "," << b << "," << c << endl;}
protected:
    int b{0};
private:
    int c{0};

};

class Derived: public Base{
    // Note friends of Derived have access to only what Derived has access to
    // a will be public
    // b will be protected
    // c will not be accessible 
public:
    void access_base_members(){
        a = 100; // ok
        b = 200; // ok
        // c = 300; // not accessible
    }
};

int main()
{   
    cout << "== Base member access from base object ==" << endl;
    Base base;
    base.a = 100;
    // base.b = 200; 
    // base.c = 300;

    cout << "== Base member access from base object ==" << endl;

    Derived d; 
    d.a = 100; // ok
    // d.b = 200; // compiler error
    // d.c = 300; // compiler error




    return 0;
}