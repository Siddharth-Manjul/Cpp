#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int binary[32];
    int i = 0;

    while (n!=0) {
        binary[i] = n%2;
        n = n/2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

}