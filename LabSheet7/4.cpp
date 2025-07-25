#include <iostream>
using namespace std;

inline float volume(float length, float width, float height) {
    return length * width * height;
}

int main() {
    system("cls");
    float l, w, h;

    cout << "Enter length of the box: ";
    cin >> l;
    cout << "Enter width of the box: ";
    cin >> w;
    cout << "Enter height of the box: ";
    cin >> h;

    float vol = volume(l, w, h);
    cout << "Volume of the rectangular box is: " << vol << " cubic units" << endl;

    return 0;
}