#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() 
{   
    // size_t a; // can use it for anything
    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];
    
    // cout << first_name << endl;

    // cout << "Please enter your first name: ";
    // cin >> first_name;

    // cout << "Please enter your last name: ";
    // cin >> last_name;

    // cout << "Hello!, " << last_name  << " " << strlen(last_name) << " " << \
    // first_name << " " << strlen(first_name) << " " <<endl;


    // strcpy(full_name, first_name); // copying firstname into fullname
    // strcat(full_name, " "); // adding " " to  full name
    // strcat(full_name, last_name);
    // cout << "Your full name is " << full_name << endl;

    // cout << "Please enter your full name: ";
    // cin >> full_name;

    // cout << "Your full name is: " << full_name << endl;

    cout << "Please enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is: " << full_name << endl;

    strcpy(temp, full_name);

    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same " << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    

    for (size_t i {0}; i < strlen(full_name); ++i)
    {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }

    cout << "Your full name is " << full_name << endl;


    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same " << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    
    cout << strcmp(temp, full_name) << endl;
    cout << strcmp(full_name, temp) << endl;


    return 0;
}