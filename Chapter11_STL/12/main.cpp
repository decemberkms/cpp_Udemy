#include <iostream>
#include <set>
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
void display(const std::set<T> &l){
    std::cout << "[ ";
    for (const auto &ele:l){
        std::cout << ele << " ";
    }
    std::cout << " ]" << std::endl;
}

void test1(){
    std::cout << "\n============================" << std::endl;
    std::set<int> s1 {1,4,3,5,2};

    display(s1);

    s1 = {1,2,3,1,2,3,1,2,4,1,2,3,4,5,1,2,2,2,3,4,5,};
    display(s1);

    s1.insert(0);
    s1.insert(10);
    display(s1);

    if (s1.count(10))
        std::cout << "10 is in the set" << std::endl;
    else
        std::cout << "10 is not in the set" << std::endl;

    std::set<int>::iterator it = s1.find(5); // not std::find. you can use std::find but not so efficient
    if (it != s1.end())
        std::cout << "Found: " << *it << std::endl;
    
    s1.clear();
    display(s1);
}

void test2(){
    std::cout << "\n============================" << std::endl;

    std::set<Person> stooges {
        {"Minsung", 34},
        {"Pee", 29},
        {"Chacha", 300}
    };
    display(stooges);

    stooges.emplace("James", 50);
    display(stooges);

    stooges.emplace("Frank", 50); // it uses age for comparison of age. so the same 50 exists.
    // so that it cannot be added.
    display(stooges);

    auto it = stooges.find(Person{"Chacha", 300}); // if it cannot find that, it gives the end iterator
    if (it != stooges.end())
        stooges.erase(it);
    display(stooges);

    it = stooges.find(Person{"xxx", 50}); // will remove james because james is 50! uses operator <
    if (it != stooges.end())
        stooges.erase(it);
    display(stooges);
}

void test3(){
    std::cout << "\n============================" << std::endl;

    std::set<std::string> s {"A", "B", "C"};
    display(s);

    std::pair<std::set<std::string>::iterator, bool> result = s.insert("D");
    display(s);

    std::cout << std::boolalpha;
    std::cout << "First: " << (*result.first) << std::endl;
    std::cout << "Second: " << result.second << std::endl;
    std::cout << std::endl;

    result = s.insert("A");
    display(s);
    std::cout << "First: " << (*result.first) << std::endl;
    std::cout << "Second: " << result.second << std::endl;

}

int main() {

    // test1();
    // test2();
    test3();

    return 0;
}