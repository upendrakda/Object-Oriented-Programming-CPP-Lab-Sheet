//4. Write a C++ program to read three numbers and print the following results
//a. Sum of the values.
//b. Average of three values.
//c. Largest of the three.
//d. Smallest of the three
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    system("cls");
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    float sum = a + b + c;
    float average = sum / 3;
    float largest = max(a, max(b, c));
    float smallest = min(a, min(b, c));

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;

    return 0;
}
