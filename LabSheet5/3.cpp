//Write a program to compute subtraction of two Time objects using operator overloading.
#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    // Constructor
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Overload '-' operator to subtract two Time objects
    Time operator-(Time t) {
        Time diff;

        // Convert both times to total seconds
        int total1 = hours * 3600 + minutes * 60 + seconds;
        int total2 = t.hours * 3600 + t.minutes * 60 + t.seconds;

        int totalDiff = total1 - total2;

        if (totalDiff < 0) {
            totalDiff = -totalDiff; // Take absolute value if needed
            cout << "Note: Negative difference, showing absolute value.\n";
        }

        // Convert back to hours, minutes, seconds
        diff.hours = totalDiff / 3600;
        totalDiff %= 3600;
        diff.minutes = totalDiff / 60;
        diff.seconds = totalDiff % 60;

        return diff;
    }

    void display() {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }
};

int main() {
    system("cls");
    // Create two time objects
    Time t1(4, 20, 30);
    Time t2(2, 45, 50);

    // Subtract using overloaded '-' operator
    Time result = t1 - t2;

    // Display the result
    cout << "Time difference: ";
    result.display();

    return 0;
}