#include<iostream>
using namespace std;

int main () {

    char a;

    cout << "Enter the character to check whether it's an alphabet or special symbol: ";
    cin >> a;

    switch ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {

        case 1: cout << a << " is an alphabet!" << endl; 
        break;

        case 0: cout << a << " is a special symbol!" << endl;
        break;
    }

    return 0;
}