//Write a C++ program that reads temperature in degree Celsius and convert it into Fahrenheit.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;
}
