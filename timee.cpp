#include <iostream>
using namespace std;

class Time
{
public:
    int hr, min, sec;

    void getTime()
    {
        cout << "Enter hours: ";
        cin >> hr;
        cout << "Enter minutes: ";
        cin >> min;
        cout << "Enter seconds: ";
        cin >> sec;
    }

    void add(Time t1, Time t2)
    {
        sec = t1.sec + t2.sec;
        min = t1.min + t2.min;
        hr = t1.hr + t2.hr;

        if (sec >= 60)
        {
            sec = sec - 60;
            min++;
        }

        if (min >= 60)
        {
            min = min - 60;
            hr++;
        }
    }

    void display()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:" << endl;
    t1.getTime();

    cout << "\nEnter second time:" << endl;
    t2.getTime();

    t3.add(t1, t2);

    cout << "\nAddition of two times = ";
    t3.display();

    return 0;
}
