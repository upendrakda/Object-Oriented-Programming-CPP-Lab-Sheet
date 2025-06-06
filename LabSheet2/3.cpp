//Write a C++ program to read two integer values m and n and to decide and print whether m 
//is a multiple of n.
#include <iostream>
using namespace std;
int main() {
    system("cls");
    int m, n;
    cout << "Enter two integers (m and n): ";
    cin >> m >> n;

    if (n != 0 && m % n == 0) {
        cout << m << " is a multiple of " << n << "." << endl;
    } else {
        cout << m << " is not a multiple of " << n << "." << endl;
    }

    return 0;
}
