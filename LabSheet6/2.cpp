#include <iostream>
using namespace std;

// Inline function to calculate square
inline int square(int x) {
    return x * x;
}

int main() {
    system("cls");
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Square of " << num << " is " << square(num) << endl;

    return 0;
}