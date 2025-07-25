#include <iostream>
#include <cmath>
using namespace std;

inline double findSquareRoot(int num) {
    return sqrt(num);
}

int main() {
    system("cls");
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Square root of a negative number is not real." << endl;
    } else {
        double result = findSquareRoot(number);
        cout << "Square root of " << number << " is: " << result << endl;
    }

    return 0;
}