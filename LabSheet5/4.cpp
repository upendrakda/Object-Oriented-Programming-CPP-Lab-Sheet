//Write a program in C++ to count a number of words in a line of text.
#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string line;
    int count = 0;

    cout << "Enter a line of text: ";
    getline(cin, line);

    for (int i = 0; i < line.length(); i++) {
        if ((i == 0 && line[i] != ' ') || (line[i] != ' ' && line[i - 1] == ' ')) {
            count++;
        }
    }

    cout << "Number of words: " << count << endl;

    return 0;
}