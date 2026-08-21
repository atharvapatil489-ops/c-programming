#include <iostream>
using namespace std;

class Fraction
{
public:
    int num, den;

    void getData()
    {
        cout << "Enter numerator: ";
        cin >> num;
        cout << "Enter denominator: ";
        cin >> den;
    }

    void add(Fraction f1, Fraction f2)
    {
        num = f1.num * f2.den + f2.num * f1.den;
        den = f1.den * f2.den;
    }

    void subtract(Fraction f1, Fraction f2)
    {
        num = f1.num * f2.den - f2.num * f1.den;
        den = f1.den * f2.den;
    }

    void display()
    {
        cout << num << "/" << den << endl;
    }
};

int main()
{
    Fraction f1, f2, sum, diff;

    cout << "Enter first fraction:" << endl;
    f1.getData();

    cout << "\nEnter second fraction:" << endl;
    f2.getData();

    sum.add(f1, f2);
    diff.subtract(f1, f2);

    cout << "\nAddition = ";
    sum.display();

    cout << "Subtraction = ";
    diff.display();

    return 0;
}
