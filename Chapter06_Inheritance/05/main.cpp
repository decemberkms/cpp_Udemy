#include <iostream>

using namespace std;


class Base{
private:
    int value;
public:
    Base()
        :value{0}{
        cout << "Base no-args constructor" << endl;
        }
    Base(int x)
        :value{x}{
            cout << "Base(int) overloaded constructor" << endl;
            }
    Base(const Base &other)
        :value{other.value}{
            cout << "Base copy constructor" << endl;
            }
    ~Base(){
        cout << "Base destructor" << endl;
        }

    Base &operator=(const Base &rhs){
        cout << "Base Operator=" << endl;
        if (this != &rhs){
            value = rhs.value;
        }
        return *this;
    }

};

class Derived: public Base{
private:
    int doubled_value;
public:
    Derived()
        :Base{}, doubled_value{0}{
            cout << "Derived no-args constructor" << endl;
            }
    Derived(int x)
        :Base{x}, doubled_value{x*2}{
            cout << "Derived(int) overloaded constructor" << endl;
            }
    Derived(const Derived &other)
        :Base{other}, doubled_value{other.doubled_value}{
            cout << "Derived copy constructor" << endl;
        }
    ~Derived(){
        cout << "Derived destructor" << endl;
        }
    Derived &operator=(const Derived &rhs){
        cout << "Derived Operator=" << endl;
        if (this != &rhs){
            Base::operator=(rhs); // assign base part  function
            doubled_value = rhs.doubled_value; // assign derived part
        }
        return *this;
    }   
};

int main()
{   
    cout << "== Base member access from base object ==" << endl;
    Base b{100}; // overloaded
    Base b1{b}; // copy constructor
    b = b1;  // copy assignment


    cout << "== Derived member access from base object ==" << endl;
    Derived c{100};
    Derived c1{c};
    c = c1;

    return 0;
}