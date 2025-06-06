//Write a C++ program to find cubes and squares of first 10 natural numbers.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    cout << "Number\tSquare\tCube\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t" << i * i << "\t" << i * i * i << "\n";
    }
    return 0;
}