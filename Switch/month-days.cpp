#include<iostream>
using namespace std;

int main () {

    int n;

    cout << "Enter a number to check the total number of days in the corresponding month: ";
    cin >> n;

    switch (n == 2) {

        case 1: cout << "The corresponding month has 28 days and 29 every fourth year!" << endl; 
        break;

        case 0:
            switch (n == 4 || n == 6 || n == 9 || n == 11) {

                case 1: cout << "The corresponding months has 30 days!" << endl;
                break;

                case 0: cout << "The corresponding months has 31 days!" << endl;
                break;
            }

            break;
    }

    return 0; 
}