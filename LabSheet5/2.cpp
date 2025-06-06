//Write a program to compute addition of two Time objects using operator overloading.
#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    // Constructor with default values
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Operator overloading for addition
    Time operator+(Time t) {
        Time sum;
        sum.seconds = seconds + t.seconds;
        sum.minutes = minutes + t.minutes + (sum.seconds / 60);
        sum.seconds %= 60;
        sum.hours = hours + t.hours + (sum.minutes / 60);
        sum.minutes %= 60;
        return sum;
    }

    // Function to display time
    void display() {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }
};

int main() {
    system("cls");
    // Create two Time objects
    Time t1(2, 45, 50);
    Time t2(1, 20, 30);

    // Add two Time objects using overloaded '+' operator
    Time total = t1 + t2;

    // Display the result
    cout << "Sum of times: ";
    total.display();

    return 0;
}