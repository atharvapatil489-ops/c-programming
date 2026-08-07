#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    // Loop until the original number becomes 0
    while (num != 0) {
        remainder = num % 10;                // 1. Get the last digit
        reversedNum = reversedNum * 10 + remainder; // 2. Append it to the reversed number
        num /= 10;                           // 3. Remove the last digit
    }

    cout << "Reversed Number = " << reversedNum << endl;

    return 0;
}
