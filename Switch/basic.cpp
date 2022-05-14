#include<iostream>
using namespace std;

int main () {

    int num = 2;
    char ch = 'A';

    cout << endl;

    switch (ch) {

        case 1: cout << "First" << endl; 
            break;

        case 2: cout << "Second" << endl;
            break;

        case 'A': cout << "Character A" << endl;
            break;

        default: cout << "It is default" << endl;

    }

    cout << endl;

    return 0;
}