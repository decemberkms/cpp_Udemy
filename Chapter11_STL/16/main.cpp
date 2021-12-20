#include <iostream>
#include <queue>
#include <vector>
#include <list>


template <typename T>
void display(std::queue<T> q){ // pass by value since I don't want to modify it. 
    std::cout << "[ ";
    while (!q.empty()){
        T ele = q.front();
        q.pop();  //destructive process
        std::cout << ele << " ";  
    }
    std::cout << "]" << std::endl;
}

int main(){

    std::queue<int> q;

    for (int i:{1,2,3,4,5})
        q.push(i);
    display(q);

    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;
    
    q.push(100);
    display(q);
    
    q.pop();
    q.pop();
    display(q);

    while (!q.empty())
        q.pop();
    display(q);
    std::cout << "Size: " << q.size() << std::endl;

    q.push(10);

    q.push(100);

    q.push(1000);

    q.push(10);
    q.front() = 50;;
    q.back() = 5000;

    display(q);

    return 0;
}