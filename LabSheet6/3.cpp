#include <iostream>
using namespace std;

int main() {
    system("cls");
    float feet, meters;

    cout << "Enter length in feet: ";
    cin >> feet;

    // 1 foot = 0.3048 meters
    meters = feet * 0.3048;

    cout << feet << " feet = " << meters << " meters" << endl;

    return 0;
}