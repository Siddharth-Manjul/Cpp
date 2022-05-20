#include<iostream>
using namespace std;

int fact(int n) {

    int fact = 1;

    for ( int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int nCr (int n, int r) {

    int num = fact(n);

    int den = fact(r) * fact(n - r);

    return num / den;

}

int main () {

    int n, r;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    cout << "The answer is " << nCr(n, r) << endl;
}