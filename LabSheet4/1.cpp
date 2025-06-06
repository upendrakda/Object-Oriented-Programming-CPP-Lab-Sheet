//Write a program that creates an integer array of length 30, fills the array with the sequence 
//1,-2,3,-4,…..29,-30 using a for loop. Also print the above sequence using for loop.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[30];

    for (int i = 0; i < 30; i++) {
        if ((i + 1) % 2 == 0)
            arr[i] = -(i + 1);
        else
            arr[i] = i + 1;
    }

    cout << "Sequence: ";
    for (int i = 0; i < 30; i++) {
        cout << arr[i];
        if (i != 29)
            cout << ", ";
    }
    cout << endl;

    return 0;
}