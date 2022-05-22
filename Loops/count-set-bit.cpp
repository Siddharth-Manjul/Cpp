#include <iostream>
using namespace std;

int main () {

    int a, b, countA, countB;
    cin >> a >> b;

    while (a) {

        int bitA = a & 1;
        if (bitA) {
            countA++;
        }
        a = a >> 1;
    }

    while (b) {

        int bitB = b & 1;
        if (bitB) {
            countB++;
        }
        b = b >> 1;
    }

    int ans = countA + countB;
    cout << ans << endl;

    return 0;

}