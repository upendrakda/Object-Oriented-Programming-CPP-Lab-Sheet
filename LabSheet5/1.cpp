//Write a program to compute subtraction of two complex numbers using operator overloading.
#include <iostream>
using namespace std;

// Class to represent a complex number
class Complex {
public:
    int real, imag;

    // Constructor to initialize real and imaginary parts
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Operator overloading for subtraction of two complex numbers
    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    // Function to display the complex number
    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    system("cls");
    // Creating two complex number objects
    Complex c1(5, 3);
    Complex c2(2, 1);

    // Subtracting c2 from c1
    Complex result = c1 - c2;

    // Displaying the result
    cout << "Subtraction result: ";
    result.show();

    return 0;
}