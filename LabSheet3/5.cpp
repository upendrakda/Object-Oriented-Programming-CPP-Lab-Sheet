//Write a C++ program to evaluate the series S = 1+2*1+3*2+……………………N*N-1
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int N, sum = 0;

    cout << "Enter the value of N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i * (i - 1);
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}