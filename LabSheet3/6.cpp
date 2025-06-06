//Write a C++ program to find GCD and LCM of two numbers.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int a, b, gcd, lcm, tempA, tempB;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    tempA = a;
    tempB = b;

    while (tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    gcd = tempA;
    lcm = (a * b) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}