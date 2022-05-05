#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number to check wether it is a Prime Number or not: ";
    cin >> n;

    bool prime = 1;

    for (int i = 2; i <= n - 1; i++) {
        
        if ( n % i == 0 ) {
            prime = 0;
            break;
        }
    }

    if (prime == 0) {
        cout << n << " is not a prime number" << endl;
    }
    else {
        cout << n << " is a prime number" << endl;
    }
}