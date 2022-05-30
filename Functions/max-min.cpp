#include <iostream>
using namespace std;

int max(int a, int b, int c) {

    if (a > b && a > c) {
        return a;
    }

    else if (b > c && b > a) {
        return b;
    }

    else {
        return c;
    }
}

int min(int a, int b, int c) {

    if (a < b && a < c) {
        return a;
    }

    else if (b < c && b < a) {
        return b;
    }

    else {
        return c;
    }
}

int main () {

    int a, b, c;

    cout << "Enter three values to find the maximum and minimum values: ";
    cin >> a >> b >> c;

    cout << "The maximum value is " << max(a, b, c) << "!" << endl;
    cout << "The minimum value is " << min(a, b, c) << "!" << endl;
}