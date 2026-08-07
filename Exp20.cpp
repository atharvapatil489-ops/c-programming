#include <iostream>
#include <cmath>
using namespace std;

// Function to reverse a number
void reverseNumber()
{
    int n, rev = 0, rem;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    cout << "Reverse = " << rev << endl;
}

// Function to check palindrome
void palindrome()
{
    int n, temp, rev = 0, rem;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (rev == n)
        cout << "Palindrome Number" << endl;
    else
        cout << "Not a Palindrome Number" << endl;
}

// Function to check Armstrong
void armstrong()
{
    int n, temp, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, 3);
        temp = temp / 10;
    }

    if (sum == n)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not an Armstrong Number" << endl;
}

int main()
{
    int choice;

    cout << "1. Reverse Number" << endl;
    cout << "2. Palindrome Number" << endl;
    cout << "3. Armstrong Number" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            reverseNumber();
            break;

        case 2:
            palindrome();
            break;

        case 3:
            armstrong();
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
