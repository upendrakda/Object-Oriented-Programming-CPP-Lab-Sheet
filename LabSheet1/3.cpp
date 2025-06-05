//Write a C++program that reads a number and tests whether is it multiple of 5 and 11
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num%5==0 && num%11==0)
    cout << "The number is a multiple of 5 and 11.";
    else
    cout << "The number is not a multiple of 5 and 11.";
    return 0;
}