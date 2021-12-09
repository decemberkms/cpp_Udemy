#include <iostream>

using namespace std;

int main()
{
    char myString[] = "string";

    for (int i = 0; i < 7; ++i)
        cout << myString[i] << endl;
        

    int value = 5;
    int &ref = value;

    cout << ref << " " << value << endl;
    cout << &ref << " " << &value << endl;

    value =100;

    cout << ref << " " << value << endl;
    cout << &ref << " " << &value << endl;
    return 0;
}