#include <iostream>
using namespace std;

class shape {
public:
    // Standard virtual function
    virtual void area() {
        cout << "Calculating generic shape area." << endl;
    }
};

class Rectangle : public shape {
private:
    double l, b;
public:
    Rectangle(double length, double breadth) : l(length), b(breadth) {}
    
    void area() override {
        cout << "Rectangle Area: " << (l * b) << endl;
    }
};

class square : public shape {
private:
    double l;
public:
    square(double side) : l(side) {}
    
    void area() override {
        cout << "Square Area: " << (l * l) << endl;
    }
};

class circle : public shape {
private:
    double r;
public:
    circle(double radius) : r(radius) {}
    
    void area() override {
        cout << "Circle Area: " << (3.14 * r * r) << endl;
    }
};

int main() {
    // 1. Create objects for all shapes using parameterized constructors
    Rectangle R(10, 20);
    square S(5);
    circle C(4);

    // 2. Create a base class pointer
    shape *ptr;

    // 3. Point to Rectangle and calculate area
    ptr = &R;
    ptr->area();

    // 4. Point to Square and calculate area
    ptr = &S;
    ptr->area();

    // 5. Point to Circle and calculate area
    ptr = &C;
    ptr->area();

    return 0;
}
