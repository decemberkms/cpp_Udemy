#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>


void display(const std::vector<int> &vec){
    std::cout << "[ ";
    for (auto const &i:vec){
        std::cout << i << " ";
    }
    std::cout << " ]" << std::endl;
}

void test1(){

    std::cout << "\n============================" << std::endl;
    
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    
    std::vector<int>::iterator it = nums1.begin();
    // auto it = nums1.begin();
    std::cout << *it << std::endl;
    
    it++;
    std::cout << *it << std::endl;

    it += 2;
    std::cout << *it << std::endl;
    
    it -= 2;
    std::cout << *it << std::endl; // it is an object

    it = nums1.end() - 1;
    std::cout << *it << std::endl;
}

void test2(){

    std::cout << "\n============================" << std::endl;
    
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    
    std::vector<int>::iterator it = nums1.begin();

    while (it != nums1.end()){
        std::cout << *it << std::endl;
        it++;
    }

    // change all vector elements to 0
    it = nums1.begin();
    while (it != nums1.end()){
        *it = 0;
        it++;
    }

    display(nums1);
}

void test3(){

    std::cout << "\n============================" << std::endl;
    
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    
    std::vector<int>::const_iterator it1 = nums1.begin();
    // auto it1 = nums1.cbegin();  // put c in front of const_iterator to use auto

    while (it1 != nums1.end()){
        std::cout << *it1 << std::endl;
        it1++;
    }

    //  compiler erro when we try to change element
    // it1 = nums1.begin();
    // while (it1 != nums1.end()){
    //     *it1 = 0;
    //     it1++;
    // }
}

void test4(){

    std::cout << "\n============================" << std::endl;
    
    std::vector<int> vec {1, 2, 3, 4, 5};
    auto it1 = vec.rbegin();

    while (it1 != vec.rend()){
        std::cout << *it1 << std::endl;
        it1++;
    }

    //const reverse iterator over a list
    std::list<std::string> name {"Min", "Sung", "Kim"};
    auto it2 = name.crbegin(); // iterator over list of strings point to Kim
    std::cout << *it2 << std::endl;
    it2++;
    std::cout << *it2 << std::endl;

    //iterator over a map
    std::map<std::string, std::string> favourites {
        {"Minsung", "C++"},
        {"Pee", "Food"},
        {"Sky", "Blue"}
    };

    auto it3 = favourites.begin();
    while (it3 != favourites.end()){
        std::cout << it3->first << ":" << it3->second << std::endl;
        it3++;
    }
}

void test5(){

    std::cout << "\n============================" << std::endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::vector<int>::iterator start = vec.begin() + 2; // 
    std::vector<int>::iterator finish = vec.end() - 3; // 

    while (start != finish){ // subset
        std::cout << *start << std::endl;
        start++;
    }
}
int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    test5();


    return 0;
}