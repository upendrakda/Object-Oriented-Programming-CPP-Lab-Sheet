//Write a C++ program to print ASCII value of all characters.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    for (int i = 0; i <= 255; i++) {
        cout << "ASCII value of '" << char(i) << "' is " << i << endl;
    }
    return 0;
}