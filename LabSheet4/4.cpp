// Create a class Number with two int instance variable x and y. The class will have one constructor.
// The class also will contain member function getMax() that will return larger number. In main
// function create an object of Number and will print the larger number.
#include <iostream>
using namespace std;

class Number {
private:
    int x, y;

public:
    Number(int a, int b) {
        x = a;
        y = b;
    }

    int getMax() {
        return (x > y) ? x : y;
    }
};

int main() {
    system("cls");
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number num(a, b);
    cout << "The larger number is: " << num.getMax() << endl;

    return 0;
}