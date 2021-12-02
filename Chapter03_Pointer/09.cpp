#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>

using namespace std;


int *largest_int(int *int_ptr1, int *int_ptr2)
{
    if (*int_ptr1 > *int_ptr2)
        return int_ptr1;
    else
        return int_ptr2;
}


int *create_array(size_t size, int init_value = 0)
{
    int *new_storage {nullptr};

    new_storage = new int[size];
    for (size_t i{0}; i < size; ++i)
        *(new_storage + i) = init_value;
    return new_storage;
}

int main() 
{ 
    int a{100};
    int b{200};
    int *largest_ptr {nullptr};

    largest_ptr = largest_int(&a, &b);
    cout << largest_ptr << endl;
    cout << *largest_ptr << endl;

    int *my_array;
    my_array = create_array(100, 20);

    
    for (int i = 0; i < 20 ; ++i)
    {
        cout << *(my_array + i) << endl;
        cout << my_array[i] << endl;
        cout << endl;
    }
    delete [] my_array;
    

    // dont do this

    // int *dont_do_this()
    // {
    //     int size {};
    //     return &size;
    // }

    // int *or_this() {
    //     int size{};
    //     int *int_ptr {&size};

    //     return int_ptr;
    // }

       
    return 0;
}
