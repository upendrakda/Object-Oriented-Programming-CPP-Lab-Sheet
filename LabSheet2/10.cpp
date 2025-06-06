// Write a C++ program that reads a number and check whether it is Armstrong‟s number or not.
//(HINT: A number is called Armstrong's number if it is equal to sum of cubes of its digits.)
//(For example, 153 is Armstrong number because 1^3+2^3+5^3=153)
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int number, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    original = number;

    while (number != 0) {
        digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    if (sum == original) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }

    return 0;
}