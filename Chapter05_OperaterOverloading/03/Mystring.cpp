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