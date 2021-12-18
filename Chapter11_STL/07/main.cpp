#include <iostream>
#include <vector>
#include <algorithm>

class Person{
    friend std::ostream& operator << (std::ostream &os, const Person &obj);
private:
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name, int age)
        :name{name}, age{age} {}

    bool operator < (const Person &obj) const{ // a must when using an own class with STL
        return this->age < obj.age;
    }
    bool operator ==(const Person &obj) const{
        return (this->name == obj.name && this->age == obj.age);
    }
};

std::ostream &operator << (std::ostream &os, const Person &obj){
    os << obj.name << ":" << obj.age;
    return os;
}

void display2(const std::vector<int> &vec) {
    std::cout << "[ ";
    std::for_each(vec.begin(), vec.end(), 
        [] (int x) {std::cout << x << " ";});
    std::cout << "]" << std::endl;
}

template<typename T>
void display(const std::vector <T> &vec){
    std::cout << "[ ";
    for (const T &ele:vec)
        std::cout << ele << " ";
    std::cout << "]" << std::endl;
}


void test1(){
    std::cout << "\n=======================================" << std::endl;
    std::vector<int> vec {1,2,3,4,5};

    display(vec);

    vec = {2,4,5,6};
    display2(vec);

    std::vector<int> vec1 (10, 100); // ten 100s in the vector
    display(vec1);
}

void test2(){
    std::cout << "\n=======================================" << std::endl;

    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    std::cout << "vec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    std::cout<< std::endl;

    vec.push_back(6);
    display(vec);
    std::cout << "vec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    std::cout<< std::endl;
    
    vec.shrink_to_fit();
    display(vec);
    std::cout << "vec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    std::cout<< std::endl;
    
    vec.reserve(100); // capacity 100
    display(vec);
    std::cout << "vec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    std::cout<< std::endl;
}

void test3(){
    std::cout << "\n=======================================" << std::endl;
    
    std::vector<int> vec{1,2,3,4,5};
    display(vec);
    vec[0] = 100;
    vec.at(1) = 200;
    display(vec);
}

void test4(){
    std::cout << "\n=======================================" << std::endl;
    std::vector<Person> stooges;

    Person p1 {"Minsung", 34};
    display(stooges);

    stooges.push_back(p1);
    display(stooges);

    stooges.push_back(Person{"Pee", 29});
    display(stooges);

    stooges.emplace_back("Kim", 100);
    display(stooges);
}

void test5(){
    std::cout << "\n=======================================" << std::endl;
    std::vector<Person> stooges{
        {"Minsung", 34},
        {"Pee", 29},
        {"Kim", 100}
    };

    display(stooges);
    std::cout << "\nFront " << stooges.front() << std::endl;
    std::cout << "\nBack " << stooges.back() << std::endl;
    
    stooges.pop_back();
    display(stooges);
}

void test6(){
    std::cout << "\n=======================================" << std::endl;
    std::vector<int> vec {1,2,3,4,5};
    display(vec);

    vec.clear();
    display(vec);

    vec = {1,2,3, 4, 5, 6, 7, 8, 9, 10};
    display(vec);
    vec.erase(vec.begin(), vec.begin() + 2);
    display(vec);

    vec = {1,2,3,4,5,6,7,8,9,10};
    auto it = vec.begin();
    while (it != vec.end()){
        if (*it % 2 == 0)
            vec.erase(it);
        else 
            it++;
    }
    display(vec);
}

void test7(){
    std::cout << "\n=======================================" << std::endl;
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20,30,40,50};

    display(vec1);
    display(vec2);
    
    std::cout << std::endl;

    vec2.swap(vec1);
    display(vec1);
    display(vec2);
    
    std::cout << std::endl;

}

void test8(){
    std::cout << "\n=======================================" << std::endl;
    std::vector<int> vec1 {5,3,214,312,12,12,11};
    display(vec1);
    std::sort(vec1.begin(), vec1.end());
    display(vec1);
}

void test9(){
    //std::back_inserter contructs a back-insert iterator that inserts new elemetns
    //at the end of the container it applies to. It's a special output iterator
    // it's awesome!! and very efficient
    // there is also a front_inserter we can use with deques and lists
    // copy one list to another using an iterator and back_inserter
    std::cout << "\n=======================================" << std::endl;
    
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20};
    
    display(vec1);
    display(vec2);
    std::cout << std::endl;

    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));
    display(vec1);
    display(vec2);
    std::cout << std::endl;
    
    // copy_if the element is even
    vec1 = {1,2,3,4,5, 6, 7, 8, 9, 10};
    vec2 = {10,20};
    display(vec1);
    display(vec2);
    std::cout << std::endl;

    std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2),
            [] (int x) {return x % 2 == 0;});
    display(vec1);
    display(vec2);
    std::cout << std::endl;

}

void test10(){
    std::cout << "\n=======================================" << std::endl;
    
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20,30,40,50};
    std::vector<int> vec3;

    std::transform(vec1.begin(), vec1.end(), vec2.begin(),
        std::back_inserter(vec3),
        [] (int x, int y) {return x * y;});
    display(vec3);
}

void test11(){
    std::cout << "\n=======================================" << std::endl;
    
    std::vector<int> vec1 {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> vec2 {100, 200, 300, 400 ,500};

    display(vec1);
    display(vec2);
    std::cout << std::endl;

    std::vector<int>::iterator it = std::find(vec1.begin(), vec1.end(), 5);
    if (it != vec1.end()){
        std::cout << "inserting..." << std::endl;
        vec1.insert(it, vec2.begin(), vec2.end());
        // vec1.insert(it, 111111);
    } else{
        std::cout << "Sorry, 5 not found" << std::endl;
    }
    display(vec1);
}

int main() {
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    // test7();
    // test8();
    // test9();
    // test10();
    test11();

    
    return 0;
}