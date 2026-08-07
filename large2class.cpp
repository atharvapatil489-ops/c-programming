#include <iostream>
using namespace std;

class Greatest
{
public:
    int a, b;

    void accept()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void display()
    {
        if (a > b)
            cout << "Greatest Number = " << a;
        else
            cout << "Greatest Number = " << b;
    }
};

int main()
{
    Greatest g;
    g.accept();
    g.display();
    return 0;
}
