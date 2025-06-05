//Write a C++ program that reads a number and finds sum of the squares of digits 
//(For example, if the number if 235 then sum = 2^2 +3^2 +5^2 =38)
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num, digit,sum=0;
    cout<<"Enter a number:";
    cin>>num;
    while(num!=0){
        digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    cout << "Sum of squares of digits = " << sum;
    return 0;
}