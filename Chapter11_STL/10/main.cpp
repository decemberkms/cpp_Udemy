#include <iostream>
#include <list>
#include <algorithm>
#include <iterator> // for std::advance

class Person{
    friend std::ostream& operator << (std::ostream &os, const Person &obj);
private:
    std::string name;
    int age;
public:
    Person() 
        : name{"Unkwon"}, age{0} {};
    Person(std::string name, int age)
        :name{name}, age{age} {}
    bool operator < (const Person &obj) const{ // a must when using an own class with STL
        return this->age < obj.age;
    }
    bool operator ==(const Person &obj) const{
        return (this->name == obj.name && this->age == obj.age);
    }
    std::string get_name() const {
        return name;
    }
    int get_age() const {
        return age;
    }
};

std::ostream &operator << (std::ostream &os, const Person &obj){
    os << obj.get_name() << ":" << obj.get_age();
    return os;
}

template <typename T>
void display(const std::list<T> &l){
    std::cout << "[ ";
    for (const auto &ele:l){
        std::cout << ele << " ";
    }
    std::cout << " ]" << std::endl;
}

void test1(){
    std::cout << "\n=============================" << std::endl;

    std::list<std::string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);
    
    std::list<int> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);

    std::list<int> l4{10,100};
    display(l4);

}

void test2(){
    std::cout << "\n=============================" << std::endl;
    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    std::cout << "Size: " << l.size() << std::endl;

    std::cout << "Front: " << l.front() << std::endl;
    std::cout << "Back: " << l.back() << std::endl;

    l.clear();
    display(l);
    std::cout << "Size: " << l.size() << std::endl;

}

void test3(){
    std::cout << "\n=============================" << std::endl;
    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    l.resize(5);
    display(l);

    l.resize(10);
    display(l);

    std::list<Person> persons;
    persons.resize(5);
    display(persons);

}

void test4(){
    std::cout << "\n=============================" << std::endl;
    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    std::list<int>::iterator it = std::find(l.begin(), l.end(),5);
    
    if (it != l.end()){
        l.insert(it, 100);
    }

    display(l);

    std::list<int> l2 {1000, 2000, 3000};
    l.insert(it, l2.begin(), l2.end());
    display(l);

    std::advance(it, -4);
    std::cout << *it << std::endl;

    l.erase(it);
    display(l);

}

void test5(){
    std::cout << "\n=============================" << std::endl;

    std::list<Person> stooges{
        {"Minsung", 34},
        {"Pee", 29},
        {"ABC", 100}
    };

    display(stooges);

    std::string name;
    int age{};
    std::cout << "\nEnter the name of the next stooges: ";
    getline(std::cin, name);
    std::cout << "Enter their age: ";
    std::cin >> age;
    stooges.emplace_back(name, age);
    display(stooges);

    //insert
    std::list<Person>::iterator it = std::find(stooges.begin(), stooges.end(),
            Person{"ABC", 100});
    if (it != stooges.end())
        stooges.emplace(it, "Frank", 18);
    display(stooges);

}

void test6(){
    std::cout << "\n=============================" << std::endl;

    std::list<Person> stooges{
        {"Minsung", 34},
        {"Pee", 29},
        {"ABC", 100}
    };


    display(stooges);
    std::sort(stooges.begin(), stooges.end());
    // stooges.sort();
    display(stooges);

}


int main() {
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    test6();

    return 0;
}