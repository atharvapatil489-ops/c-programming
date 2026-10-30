#include <iostream>
using namespace std;

class shape {
public:
    // Pure virtual function making 'shape' an abstract class
    virtual void area() = 0; //[span_2](start_span)[span_2](end_span)
};

class Rectangle : public shape {
private:
    double l, b;
public:
    Rectangle(double length, double breadth) : l(length), b(breadth) {}
    
    void area() override {
        cout << "Rectangle Area: " << (l * b) << endl; //[span_3](start_span)[span_3](end_span)
    }
};

class square : public shape {
private:
    double l;
public:
    square(double side) : l(side) {}
    
    void area() override {
        cout << "Square Area: " << (l * l) << endl; //[span_4](start_span)[span_4](end_span)
    }
};

class circle : public shape {
private:
    double r;
public:
    circle(double radius) : r(radius) {}
    
    void area() override {
        cout << "Circle Area: " << (3.14 * r * r) << endl; //[span_5](start_span)[span_5](end_span)
    }
};

int main() {
    // 1. Instantiate the derived class objects
    Rectangle R(10, 20); //[span_6](start_span)[span_6](end_span)
    square S(5);
    circle C(4);

    // 2. Declare a base class pointer
    shape *ptr; //[span_7](start_span)[span_7](end_span)

    // 3. Assign pointer to Rectangle and call area
    ptr = &R;   //[span_8](start_span)[span_8](end_span)
    ptr->area(); //[span_9](start_span)[span_9](end_span)

    // 4. Assign pointer to Square and call area
    ptr = &S;
    ptr->area();

    // 5. Assign pointer to Circle and call area
    ptr = &C;
    ptr->area();

    return 0;
}
/*
Rectangle Area: 200
Square Area: 25
Circle Area: 50.24

--------------------------------
Process exited after 0.07032 seconds with return value 0
Press any key to continue . . .
    */
