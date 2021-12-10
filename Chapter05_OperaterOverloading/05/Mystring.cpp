#include <iostream>
#include <cstring>

#include "Mystring.h"

// empty constructor
Mystring::Mystring() // Mystring a; < no args constructor;
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
}

// overloaded constructor
Mystring::Mystring(const char *s) // Mystring a {"Hello"};
    :str{nullptr}{
        if (s == nullptr){
            str = new char[1];
            *str = '\0';
        } else{
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }

}

// copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;
}

//Move constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
}

// destructor
Mystring::~Mystring(){
    delete [] str;
}

// Functions
void Mystring::display() const{
    std::cout << str << ":" << get_length() << std::endl;
}

int Mystring::get_length() const{
    return std::strlen(str);    
}

const char *Mystring::get_str() const{
    return str;
}


// Operator overloading
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    
    delete [] str;

    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);

    return *this;
}

//move assignment operator
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout << "Move assignment" << std::endl;
    if  (this == &rhs)
        return *this;
    
    delete [] str;

    str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

// - operator to lowercase  as a global member function
Mystring operator-(const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i = 0; i < std::strlen(buff); ++i)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;

    return temp;
}

// == operator as a global member function
bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str) == 0);
} 

// + operator as a global member function
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    size_t buff_size = std::strlen(lhs.str) + std::strlen(rhs.str) + 1;
    char *buff = new char[buff_size];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}


/*
// - operator to lowercase
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); ++i)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;

    return temp;
}

// == operator
bool Mystring::operator==(const Mystring &rhs) const{
    return (std::strcmp(str, rhs.str) == 0);
} 

// + operator
Mystring Mystring::operator+(const Mystring &rhs) const {
    size_t buff_size = std::strlen(str) + std::strlen(rhs.str) + 1;
    char *buff = new char[buff_size];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

*/