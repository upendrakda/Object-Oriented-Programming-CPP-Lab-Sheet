//Write a C++ program to input time in second convert it into hour, minute and second.
#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int tsec, hours, min, sec;
    cout << "Enter time in seconds: ";
    cin >> tsec;
    hours = tsec / 3600;
    tsec %= 3600;
    min = tsec / 60;
    sec = tsec % 60;
    cout << "Time: " << hours << " hour(s), " << min << " minute(s), " << sec << " second(s)" << endl;
    return 0;
}
