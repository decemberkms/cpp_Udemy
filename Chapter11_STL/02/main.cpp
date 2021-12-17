#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <iomanip>

// Template classes are typically completely contained in header files
// So, we would have the template class in Item.h and no Item.cpp file
// would be used

template<typename T>
class Item{
private:
    std::string name;
    T value;
public:
    Item(std::string name, T value)
        :name{name}, value{value}{

        }
    std::string get_name() const {return name;}
    T get_value() const {return value;}
};

template<typename T1, typename T2>
struct My_pair{
    T1 first;
    T2 second;
};

int main(){

    Item<int> item1 {"Minsung", 1000}; // putting something else give a compiler error

    std::cout << typeid(item1.get_value()).name() << std::endl;

    Item<std::string> item2{"Frank", "Professor"};
    std::cout << item2.get_name() << " " <<  item2.get_value() << std::endl;

    Item<Item<std::string>> item3 {"Frank", {"C++", "Professor"}};
    std::cout << item3.get_name() << " " 
                << item3.get_value().get_name() <<" "
                << item3.get_value().get_value() << std::endl;

    std::cout << "--------------------------------------" << std::endl;
    std::vector<Item<double>> vec{};
    vec.push_back(Item<double>("Larry", 100.0));
    vec.push_back(Item<double>("Moe", 200.0));
    vec.push_back(Item<double>("Curly", 300.0));
    
    for (auto ele:vec){
        std::cout << std::setw(10) <<ele.get_name() 
                << std::setw(10) << ele.get_value() << std::endl;
    }
    std::cout << "--------------------------------------" << std::endl;
    
    My_pair<std::string, int> p1 {"Minsung", 100};
    My_pair<int, double> p2 {124, 13.6};

    std::cout << p1.first << "," << p1.second << std::endl;
    std::cout << p2.first << "," << p2.second << std::endl;


    
    return 0;
}