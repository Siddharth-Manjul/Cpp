#include <iostream>
using namespace std;

int main () {

    char alpha;

    cout << "Enter the alphabet you want to check whether it's a vowel or not: ";
    cin >> alpha;

    switch (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U') {

        case 1: cout << alpha << " is a vowel!" << endl; 
        break;

        case 0: cout << alpha << " is not a vowel!" << endl;
        break;
    }

    return 0;
}