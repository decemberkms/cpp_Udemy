#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>
#include <string>


class Person {
private:
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name, int age)
        :name{name}, age{age}{}
    bool operator < (const Person &rhs) const {
        return this->age < rhs.age;
    }
    bool operator == (const Person &rhs) const {
        return (this->name == rhs.name) && (this->age == rhs.age);
    }

    std::string get_name(){
        return this->name;
    }
};

void find_test(){
    std::cout << "\n=====================================" << std::endl;

    std::vector<int> vec {1, 2, 3, 4, 5};

    // auto loc = std::find(std::begin(vec), std::end(vec), 1);
    std::vector<int>::iterator loc = std::find(vec.begin(), vec.end(), 7);

    if (loc != std::end(vec))
        std::cout << "Found the number!" << *loc << std::endl;
    else
        std::cout << "Couldn't find the number" << std::endl;

    std::list<Person> players{
        {"Minsung", 18},
        {"Pee", 17},
        {"HAha", 100}
    };

    std::list<Person>::iterator loc1 = std::find(players.begin(), std::end(players), Person{"Pee", 17});
    if (loc1 != players.end())
        std::cout << "Found the person: " << loc1->get_name() << std::endl;
    else
        std::cout << "Couldn't find the number" << std::endl;        

}

void count_test() {
    std::cout << "\n=====================================" << std::endl;

    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 1, 3};

    int num = std::count(vec.begin(), std::end(vec), 1);

    std::cout << num << "Occurences found: " << num << std::endl;    //count of the whole element -> size()

}

void counter_if_test(){
    std::cout << "\n=====================================" << std::endl;

    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 1, 3};

    int num = std::count_if(vec.begin(), vec.end(), [](int x) {return x % 2 == 0;});
    std::cout << num << " even numbers found" << std::endl;

    num = std::count_if(std::begin(vec), std::end(vec), [] (int x) {return x % 2 != 0;});
    std::cout << num << " odd numbers found" << std::endl;

    //how can we determin how many elements in vec are >= 5?

    num = std::count_if(vec.begin(), vec.end(), [] (int x) {return x >= 5;}); // predicate
    std::cout << num << " are >= 5" << std::endl;
}

void replace_test(){
    std::cout << "\n=====================================" << std::endl;

    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 1, 3};

    for (auto i:vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::replace(vec.begin(), std::end(vec), 1, 100);
    for (auto i:vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    

}

void all_of_test(){ // all_of or any_of
    std::cout << "\n=====================================" << std::endl;

    std::vector<int> vec1{1,3,5,7,9,1,3,13,19,5};
    
    if (std::all_of(vec1.begin(), vec1.end(), [](int x) {return x > 10;}))
        std::cout << "All the elements are > 10" << std::endl;
    else
        std::cout << "Not all the elements are > 10" << std::endl;
    
    if (std::all_of(vec1.begin(), vec1.end(), [](int x) {return x < 20;}))
        std::cout << "All the elements are < 20" << std::endl;
    else
        std::cout << "Not all the elements are < 20" << std::endl;
        
}

void string_transform_test(){
    std::cout << "\n=====================================" << std::endl;

    std::string str1 {"This is a test"};
    std::cout << "Before transform: " << str1 << std::endl;
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper); // :: global scope
    std::cout << "After transfrom: " << str1 << std::endl;

}

int main() {
    // find_test();
    // count_test();
    // counter_if_test();
    // replace_test();
    // all_of_test();
    string_transform_test();

    return 0;
}