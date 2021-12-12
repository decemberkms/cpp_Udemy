#include <iostream>
#include <vector>

class Shape { // Abstract Base Class
private:
    //attributes common to all shapes
public:
    virtual void draw() = 0; // pure virual function
    virtual void rotate() = 0; // pure virual function
    virtual ~Shape(){
        std::cout << "Shape destructor" << std::endl;
    }
};

class Open_Shape: public Shape{
public:
    virtual ~Open_Shape(){
        std::cout << "Open_Shape destructor" << std::endl;
    }
};

class Closed_Shape: public Shape{
public:
    virtual ~Closed_Shape(){
        std::cout << "Closed_Shape destructor" << std::endl;
    };
};

class Line: public Open_Shape{
public:
    virtual void draw() override{
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override{
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line(){
        std::cout << "Line destructor" << std::endl;
    }
};

class Circle: public Closed_Shape{
public:
    virtual void draw() override {
        std::cout << "Draw a circle" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotate a circle" << std::endl;
    }
    virtual ~Circle(){
        std::cout << "Circle destructor" << std::endl;
    }
};

class Square: public Closed_Shape {
public:
    virtual void draw() override {
        std::cout << "Draw a square" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotate a square" << std::endl;
    }
    virtual ~Square(){
        std::cout << "Sqaure destructor" << std::endl;
    }
};

void screen_refresh(const std::vector<Shape*> &shapes){
    std::cout << "Refreshing" << std::endl;
    for (const auto p:shapes)
        p->draw();
}

int main()
{
    // Shape s; // cannot instanciate abstract class
    // Shape *p = new Shape();  //cannot instanciate abstract class

    // Of cousse you can use it like this
    // Circle c; //static binding polymorphsim
    // c.draw(); //static binding polymorphsim

    //dynamic binding polymorphism
    std::cout << "==== Pointers ====\n";
    Shape *ptr = new Square();
    ptr->draw();
    ptr->rotate();
    
    std::cout << "Pointer: " <<  ptr << std::endl;
    std::cout << "Pointer's address: " <<  &ptr << std::endl;
    delete ptr; 
    ptr =nullptr;
    std::cout << "Pointer: " <<  ptr << std::endl;
    std::cout << "Pointer's address: " <<  &ptr << std::endl;

    ptr = new Circle();
    ptr->draw();
    ptr->rotate();

    Square a;
    Shape &ref = a;
    a.draw();
    a.rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape*> shapes {s1, s2, s3};
    for (auto p:shapes)
    {
        (*p).draw();
    }

    delete s1;
    delete s2;
    delete s3;




    return 0;
}