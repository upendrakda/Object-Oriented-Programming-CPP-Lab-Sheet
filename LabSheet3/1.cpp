//Write a C++ program to find the second largest number (or middle) among three numbers.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int a, b, c, middle;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a < b && a > c))
        middle = a;
    else if ((b > a && b < c) || (b < a && b > c))
        middle = b;
    else
        middle = c;

    cout << "The middle (second largest) number is: " << middle << endl;

    return 0;
}