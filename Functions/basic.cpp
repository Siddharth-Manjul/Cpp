#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main () {
    cout << sum(2,4) << endl;
    cout << subtract(2,0) << endl;
    cout << multiply(2,4) << endl;
    cout << divide(2,1) << endl;
    return 0;
}