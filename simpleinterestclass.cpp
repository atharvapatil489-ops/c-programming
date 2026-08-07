#include <iostream>
using namespace std;

class Interest
{
public:
    float p, r, t;

    void accept()
    {
        cout << "Enter Principal: ";
        cin >> p;

        cout << "Enter Rate: ";
        cin >> r;

        cout << "Enter Time: ";
        cin >> t;
    }

    void display()
    {
        float si = (p * r * t) / 100;
        cout << "Simple Interest = " << si;
    }
};

int main()
{
    Interest s;
    s.accept();
    s.display();
    return 0;
}
