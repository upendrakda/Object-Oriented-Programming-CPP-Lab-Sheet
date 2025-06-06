//Write a program that creates two integer arrays data1 and data2, possibly of different lengths. 
// Then it uses for loops to create a new array data3 whose length is the sum of the lengths of data1 
// and data2 and whose contents consists of the contents of data1 followed by contents of data2. For
// example, if the two arrays are {1,2,3} and {4,5,6,7}, then the code should create the new array
// {1,2,3,4,5,6,7}.
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int data1[] = {1, 2, 3};
    int data2[] = {4, 5, 6, 7};

    int len1 = sizeof(data1) / sizeof(data1[0]);
    int len2 = sizeof(data2) / sizeof(data2[0]);
    int len3 = len1 + len2;

    int data3[len3];

    // Copy data1 into data3
    for (int i = 0; i < len1; i++) {
        data3[i] = data1[i];
    }

    // Copy data2 into data3
    for (int i = 0; i < len2; i++) {
        data3[len1 + i] = data2[i];
    }

    // Print the combined array
    cout << "Combined array: ";
    for (int i = 0; i < len3; i++) {
        cout << data3[i];
        if (i < len3 - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}