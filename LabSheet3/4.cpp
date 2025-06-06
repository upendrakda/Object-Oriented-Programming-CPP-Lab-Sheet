//Write a C++ program to display the series: 1/2  2/3  3/4  4/5 5/6…………………n-1/n
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        cout << i << "/" << i + 1;
        if (i < n - 1)
            cout << ", ";
    }

    cout << endl;
    return 0;
}