//Write a program to find the cube of given integer using inline function.
#include <iostream>
using namespace std;

// Inline function to find cube
inline int cube(int x) {
    return x * x * x;
}

int main() {
    system("cls");
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Cube of " << num << " is " << cube(num) << endl;

    return 0;
}