//Write a C++ program to find sum of digits of a number.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int number, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        number = -number;  // Make number positive

    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}