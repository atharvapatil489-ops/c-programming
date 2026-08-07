#include <iostream>
using namespace std;

class Circle
{
public:
    float radius;

    void accept()
    {
        cout << "Enter Radius: ";
        cin >> radius;
    }

    void display()
    {
        cout << "Area = " << 3.14 * radius * radius << endl;
        cout << "Circumference = " << 2 * 3.14 * radius << endl;
    }
};

int main()
{
    Circle c;
    c.accept();
    c.display();
    return 0;
}
