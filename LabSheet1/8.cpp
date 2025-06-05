//Write a C++ program that reads marks in five subjects and finds total marks, percentage.
#include <iostream>
using namespace std;
int main(){
    system("cls");
    float m1, m2, m3, m4, m5, total, per;
    
    cout << "Enter marks for 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    per = (total / 500) * 100;

    cout << "Total Marks = " << total << endl;
    cout << "Percentage = " << per << "%" << endl;

    return 0;
}
