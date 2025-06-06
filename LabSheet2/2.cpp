//Given three numbers, write a C++ program to read three numbers from keyword and print out 
//the largest of them without using if statement.
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    system("cls");
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int largest = max(a, max(b, c));

    cout << "The largest number is: " << largest << endl;
    return 0;
}