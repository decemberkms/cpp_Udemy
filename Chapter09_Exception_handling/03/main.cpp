#include <iostream>
#include <string>

using namespace std;

void func_b();
void func_c();

void func_a(){
    cout << "Starting func_a" << endl;
    func_b();
    cout << "Ending func_a" << endl;
}

void func_b(){
    cout << "Starting func_b" << endl;
    try {
    func_c();
    }
    catch (int &ex){
        cout << "Catught erro in func_b" << endl;
    }

    cout << "Ending func_b" << endl;
}

void func_c(){
    cout << "Starting func_c" << endl;
    throw 100;
    cout << "Ending func_c" << endl;
}


int main(){

    cout << "Starting main" << endl;
    try {
    func_a();
    }
    catch (int &ex){
        cout << "Catught erro in main" << endl;
    }
    cout << "Ending main" << endl;

    return 0;
}