// Create a class Swapper class with two integer instance variablex and y and constructor with two parameters 
// that initializes the two variables. Also include three member functions: A getX () that returns x, a getY()
// function that returns y, a void swap () method that swaps the values of x and y. Then define a main() 
// function to create an object of Swapper class and swap the value of instance variables
#include <iostream>
using namespace std;

class Swapper {
private:
    int x, y;

public:
    Swapper(int a, int b) {
        x = a;
        y = b;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    void swap() {
        int temp = x;
        x = y;
        y = temp;
    }
};

int main() {
    system("cls");
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Swapper obj(a, b);

    cout << "Before swap: x = " << obj.getX() << ", y = " << obj.getY() << endl;

    obj.swap();

    cout << "After swap: x = " << obj.getX() << ", y = " << obj.getY() << endl;

    return 0;
}