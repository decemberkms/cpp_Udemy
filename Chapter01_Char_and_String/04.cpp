#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_string;
    cout << "Enter your string: ";
    getline(cin, user_string);

    int strlength = user_string.length();
    
    for (int i = 0; i < strlength; ++i)
    {
        for (int j = strlength - i - 1 ; j > 0; --j)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; ++j)
        {
            cout << user_string.at(j);
        }

        for (int j =  i - 1; j >= 0 ; --j)
        {
            cout << user_string.at(j);
        }
        cout << endl;
    }

    return 0;
}