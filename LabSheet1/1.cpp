//Write a C++program that reads a number and tests whether it is multiple of 5 or not.
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num;
    cout<<"Enter a number to check:";
    cin>>num;
    if(num%5==0)
    cout<<"Yes! "<<num<<" is multiple of 5.";
    else
    cout<<"No! "<<num<<" is not a multiple of 5.";
    return 0;
}