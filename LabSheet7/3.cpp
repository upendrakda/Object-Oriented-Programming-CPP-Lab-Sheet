#include <iostream>
using namespace std;

int main() {
    system("cls");
    float inches, centimeters;

    cout << "Enter length in inches: ";
    cin >> inches;

    // Conversion: 1 inch = 2.54 cm
    centimeters = inches * 2.54;

    cout << "Length in centimeters: " << centimeters << " cm" << endl;

    return 0;
}