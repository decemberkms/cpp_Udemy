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

Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    
    delete [] str;

    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);

    return *this;
}