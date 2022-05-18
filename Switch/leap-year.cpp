#include<iostream>
using namespace std;

int main () {

    int year;

    cout << "Enter an year you want to check if it's a leap year or not: ";
    cin >> year;

    switch ((year % 400 == 0) || (year % 4 == 0)) {

        case 1: cout << year << " is a leap year!" << endl; 
            break;

        case 0: cout << year << " is not a leap year!" << endl;
            break;
    }
}