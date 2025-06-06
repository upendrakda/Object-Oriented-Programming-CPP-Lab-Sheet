//Write a C++ program to read a character from keyboard and convert it into uppercase 
//if it is in lowercase and vice versa.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - ('a' - 'A');
    } else if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }

    cout << "Converted character: " << ch << endl;

    return 0;
}