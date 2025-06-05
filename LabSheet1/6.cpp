//Write a C++ program to read any two numbers and performs simple arithmetic operations 
//(Like: Addition, subtraction, division, multiplication).
#include <iostream>
using namespace std;
int main(){
    system("cls");
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    if (b != 0)
        cout << "Division: " << a / b << endl;
    else
        cout << "Division: Cannot divide by zero" << endl;
    return 0;
}
