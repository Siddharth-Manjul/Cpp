#include<iostream>
using namespace std;

int main () {

    char ch;

    cout << "Enter an alphabet to check whether it's an Uppercase Alphabet or Lowercase Alphabet: ";
    cin >> ch;

    switch (ch >= 'a' && ch <= 'z') {

        case 1: cout << ch << " is a Lowercase Alphabet!" << endl; 
        break;

        case 0: cout << ch << " is an Uppercase Alphabet!" << endl;
        break;
    }

    return 0;
}