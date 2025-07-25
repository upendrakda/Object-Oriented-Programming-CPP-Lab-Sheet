#include <iostream>
#include <string>
using namespace std;

class Clock {
protected:
    int hour, minute, second;

public:
    void initTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    void displayTime() const {
        cout << "Time: " << hour << ":" << minute << ":" << second << endl;
    }
};

class Wall_clock : public Clock {
private:
    string brand;
    string location;

public:
    void initWallClock(int h, int m, int s, const string& b, const string& l) {
        initTime(h, m, s);  // Call base class initializer
        brand = b;
        location = l;
    }

    void display() const {
        displayTime();
        cout << "Brand: " << (brand.empty() ? "NULL" : brand) << endl;
        cout << "Location: " << (location.empty() ? "NULL" : location) << endl;
    }
};

int main() {
    system("cls");
    Wall_clock clock1;
    clock1.initWallClock(0, 0, 0, "", "");

    Wall_clock clock2;
    clock2.initWallClock(0, 0, 0, "", "");

    cout << "Clock 1:\n";
    clock1.display();

    cout << "\nClock 2:\n";
    clock2.display();

    return 0;
}