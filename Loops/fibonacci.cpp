#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number upto which you want to print Fibonacci Series: ";
    cin >> n;

    int a = 0;
    int b = 1;

    cout << a << endl;
    cout << b << endl;

    for (int i = 0; i < n; i++) {
        int sum = a + b;
        a = b;
        b = sum;
        cout << sum << endl;
    }
    
}