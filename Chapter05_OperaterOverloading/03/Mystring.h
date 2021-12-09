#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring {

private:
    char *str;

public:
    Mystring(); // empty constructor
    Mystring(const char * s); // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    Mystring(Mystring &&source); // move constructor

    ~Mystring(); // destructor

    void display() const;
    int get_length() const;
    const char *get_str() const;

    // Operator overloading
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
};

#endif