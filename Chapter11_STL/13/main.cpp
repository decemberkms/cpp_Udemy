#include <iostream>
#include <map>
#include <set>
#include <string>

void display(const std::map<std::string, std::set<int>> &m) {
    std::cout << "[ ";
    for (const auto &ele:m){
        std::cout << ele.first << ": [";
            for (const auto &set_ele: ele.second)
                std::cout << set_ele << " ";
            std::cout << " ]";
    }
    std::cout << "] " << std::endl;
}

template <typename T1, typename T2>
void display(const std::map<T1, T2> &l){
    std::cout << "[ ";
    for (const auto &ele:l){
        std::cout << ele.first << ":" << ele.second << " ";
    }
    std::cout << "] " << std::endl;
}

void test1(){
    std::cout << "\n=====================" << std::endl;

    std::map<std::string, int> m {
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}
    };

    display(m);

    m.insert(std::pair<std::string, int>("Anna", 10));
    display(m);

    m.insert(std::make_pair("Joe", 5));
    display(m);
    
    m["Frank"] = 18;
    display(m);

    m["Frank"] += 10;
    display(m); // it's really like dict in python

    m.erase("Frank");
    display(m);

    std::cout << "Count for Joe: " << m.count("Joe") << std::endl;
    std::cout << "Count for Frank: " << m.count("Frank") << std::endl;
    
    std::map<std::string, int>::iterator it = m.find("Larry");
    if (it != m.end())
        std::cout << "Found: " << it->first << ":" << it->second << std::endl;

    m.clear();

    display(m);
}

void test2(){
    std::cout << "\n=====================" << std::endl;

    std::map<std::string, std::set<int>> grades{
        {"Larry", {100, 90}},
        {"Moe", {94}},
        {"Curly", {80, 90, 100}}
    };

    display(grades);

    grades["Larry"].insert(95);
    display(grades);

    std::map<std::string, std::set<int>>::iterator it = grades.find("Moe");

    if (it != grades.end())
    {
        it->second.insert(1000);
    }

    display(grades);

}
int main(){
    // test1();
    test2();


    return 0;
}