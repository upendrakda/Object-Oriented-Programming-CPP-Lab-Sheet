// Create a class Number with three int instance variable x, y and z. The class will have one
// constructor. The class also will contain member function getMax() that will return larger 
// number. In main function create an object of Number and will print the largest number.
#include <iostream>
using namespace std;

class Number {
private:
    int x, y, z;

public:
    Number(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

    int getMax() {
        int max = x;
        if (y > max)
            max = y;
        if (z > max)
            max = z;
        return max;
    }
};

int main() {
    system("cls");
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    Number num(a, b, c);
    cout << "The largest number is: " << num.getMax() << endl;

    return 0;
}