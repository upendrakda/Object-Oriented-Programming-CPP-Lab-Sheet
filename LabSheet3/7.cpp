//Write a C++ program to count number of digits in a number.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int number, count = 0;
    cout << "Enter a number: ";
    cin >> number;

    if (number == 0) {
        count = 1;
    } else {
        if (number < 0)
            number = -number;  // Make number positive

        while (number != 0) {
            number /= 10;
            count++;
        }
    }

    cout << "Number of digits = " << count << endl;

    return 0;
}