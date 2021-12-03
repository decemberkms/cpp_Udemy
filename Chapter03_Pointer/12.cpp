#include <iostream>
#include <cmath>
#include <cstdlib> // for rand() if you really need a precise random
// use <random>
#include <ctime> // for time()
#include <string>
#include <vector>

using namespace std;

void print(const int *const array, size_t size);
int* apply_all(const int *const array, size_t size1, const int *const array2, size_t size2);

int main() 
{ 
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};

    cout << "Array1 :";
    print(array1, 5);

    cout << endl;
    
    cout << "Array2 :";
    print(array2, 3);

    cout << endl;   

    int *results = apply_all(array1, 5, array2, 3);
    cout << "Reault: ";
    print(results, 15);

    delete [] results;

    return 0;
}

void print(const int *const array, size_t size)
{
    for (int i = 0; i < size; ++i)
        cout << array[i] << " ";
}

int* apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2)
{
    int* new_array_ptr {nullptr};
    new_array_ptr = new int[size1 * size2];

    for (int i = 0; i < size2; ++i)
        for (int j = 0; j < size1; ++j)
            new_array_ptr[size1*i + j] = array2[i] * array1[j];

    return new_array_ptr;
}
