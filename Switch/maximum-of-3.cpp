#include<iostream>
using namespace std;

int main () {

    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the third number: ";
    cin >> c;

    switch (a > b && a > c) {
        
        case 1: cout << a << " is the maximum number!" << endl;
            break;

        case 0:
            switch (b > a && b > c) {
                
                case 1: cout << b << " is the minimum number!" << endl;
                    break;

                case 0: cout << c << " is the maximum number!" << endl;
                    break;
            }
    }
}