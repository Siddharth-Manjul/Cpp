#include<iostream>
using namespace std;

int main () {

    char alpha;

    cout << "Enter a character to check if it's an alphabet or not: ";
    cin >> alpha;

    switch ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z')) {

        case 1: cout << alpha << " is an alphabet!" << endl;
            break;

        case 0: cout << alpha << " is not an alphabet!" << endl;
            break;

    }
}