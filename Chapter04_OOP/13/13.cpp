#include <iostream>
#include <vector>

using namespace std;

class Move
{
private:
    int *data;

public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
    Move(int d);                   //Constructor
    Move(const Move &source);      //Copy constructor
    Move(Move &&source);           //Move constructor
    ~Move();                       //Destructor
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}

//Copy cons
Move::Move(const Move &source)
    :Move {*source.data}{
    cout << "Copy constructor - deep copy for: " << *data << endl;
}

//Move const
Move::Move(Move &&source) 
    :data {source.data} {
    source.data = nullptr;
    cout << "Move constructor - moving resource" << *data << endl;
}

Move::~Move(){
    if (data != nullptr){
        cout << "Destructor freeing data for:" << &*data << endl;
    } else {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}


int main()
{
    vector<Move> vec;
    
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});



    return 0;
}