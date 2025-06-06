//Write a C++ program that reads P, T, and R and find simple interest and amount.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    float P, T, R, interest, amount;

    cout << "Enter Principal (P): ";
    cin >> P;

    cout << "Enter Time in years (T): ";
    cin >> T;

    cout << "Enter Rate of Interest (R): ";
    cin >> R;

    interest = (P * T * R) / 100;
    amount = P + interest;

    cout << "Simple Interest = " << interest << endl;
    cout << "Total Amount = " << amount << endl;

    return 0;
}
