#include <iostream>
using namespace std;

int main () {

    int n;
    
    cout << "Enter the number: ";
    cin >> n;

    switch ((n%5==0) && (n%11==0)) {

        case 1: cout << n << " is divisible by both 5 and 11!" << endl;
            break;

        case 0: cout << n << " is not divisible by either 5 or 11 or both!" << endl;
            break;

    }

}