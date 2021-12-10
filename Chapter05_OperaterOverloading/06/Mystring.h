#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring {
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);

    friend std::ostream &operator<<(std::ostream &os, const Mystring &obj);
    friend std::istream &operator>>(std::istream &is, Mystring &obj);
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

/*
    // unary operator - no args
    Mystring operator-() const;

    // binary operator - one arg;
    Mystring operator+(const Mystring &rhs) const;
    bool operator==(const Mystring &rhs) const;

*/
    

};






#endif