#include <iostream>
using namespace std;

int fibonacci(int n) {

    int a = 0;
    int b = 1;
    int fibo = 0;

    for (int i = 2; i < n; i++) {

        fibo = a + b;
        a = b;
        b = fibo;
    }

    return fibo;

}

int main() {

    int n;

    cout << "Enter the number to find the corresponding fibonacci number: ";
    cin >> n;

    cout << fibonacci(n) << endl;
}