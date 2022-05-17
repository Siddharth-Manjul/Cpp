#include<iostream>
using namespace std;

int main () {

    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    switch (a > b) {

        case 1: cout << a << " is maximum!" << endl; 
            break;

        case 0: cout << b << " is maximum!" << endl;
            break;
    }
}