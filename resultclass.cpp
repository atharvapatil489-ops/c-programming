#include <iostream>
using namespace std;

class Result
{
public:
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    void accept()
    {
        cout << "Enter marks of 5 subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void display()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;

        cout << "Total = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;

        if (percentage >= 35)
            cout << "Result = Pass";
        else
            cout << "Result = Fail";
    }
};

int main()
{
    Result r;
    r.accept();
    r.display();
    return 0;
}
