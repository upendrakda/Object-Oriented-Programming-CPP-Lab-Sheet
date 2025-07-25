#include <iostream>
using namespace std;

// Inline function to calculate area
inline float area(float length, float width) {
    return length * width;
}

int main() {
    system("cls");
    float length, width;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    cout << "Area of rectangle = " << area(length, width) << " square units" << endl;

    return 0;
}