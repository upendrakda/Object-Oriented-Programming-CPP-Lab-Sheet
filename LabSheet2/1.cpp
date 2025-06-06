//Write a program in C++ to read a four digit number and print the sum of its digits.
#include <iostream>
using namespace std;
int main() {
    system("cls");
    int number, digit, sum = 0;
    cout << "Enter a four-digit number: ";
    cin >> number;

    if (number >= 1000 && number <= 9999) {
        while (number != 0) {
            digit = number % 10;
            sum += digit;
            number /= 10;
        }
        cout << "Sum of digits = " << sum << endl;
    } else {
        cout << "Invalid input. Please enter a four-digit number." << endl;
    }

    return 0;
}
