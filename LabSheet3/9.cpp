//Write a C++ program to reverse a number.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int number, reversed = 0, digit;
    cout << "Enter a number: ";
    cin >> number;

    int original = number;
    if (number < 0) {
        number = -number;  // Handle negative numbers
    }

    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if (original < 0)
        reversed = -reversed;

    cout << "Reversed number = " << reversed << endl;

    return 0;
}