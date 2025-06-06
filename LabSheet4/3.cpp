//Write a program that creates an integer array and then uses a for loop to check whether the 
//array is sorted from smallest to largest. If so, print sorted. Otherwise, prints “Not sorted”.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[] = {1, 9, 5, 6, 8, 2};  // You can change this array to test
    int size = sizeof(arr) / sizeof(arr[0]);
    bool sorted = true;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Sorted" << endl;
    else
        cout << "Not sorted" << endl;

    return 0;
}