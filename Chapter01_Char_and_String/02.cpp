#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

int main() 
{   
    string s1;
    string s2 {"Minsung"};
    string s3 {s2};
    string s4 {"Minsung", 3};
    string s5 {s3, 1, 3};
    string s6 (3,'Z'); // only charater

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;

    s1 = "C ++ Rocks!";
    cout << s1 << endl;

    // sentence = "C ++" + " is powerful!"// not possible c style literal

    for (int c: s2) // range based for loop
        cout << c << endl;

    for (char c: s2) // range based for loop
        cout << c << endl;

    s1 = "This is a test";
    cout << s1.substr(0,4) << endl;
    cout << s1.substr(5,2) << endl;
    cout << s1.substr(10,4) << endl;

    cout << s1.find("This") << endl;
    cout << s1.find("is") << endl;
    cout << s1.find("is", 4) << endl; // search for "is" from index 4
    cout << s1.find("xx") << endl;

    if (s1.find("xx") == string::npos);
        cout << "Nothing" << endl;

    //rfind - reverse
    
    cout << s1.erase(0,5) << endl;
    cout << s1.erase(5,1) << endl;
    // s1.clear();

    cout << s1.length() << endl;

    s1.clear();

    getline(cin, s1);
    cout << s1 << endl;

    s1.clear();
    getline(cin, s1, 'x');

    cout << s1 << endl;

    return 0;
}