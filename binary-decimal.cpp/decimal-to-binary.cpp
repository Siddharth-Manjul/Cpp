#include <iostream>
#include <math.h>
using namespace std;

int main () {
    long long int n;
    cin >> n;

    // FIRST APPROACH
    // int binary[32];
    // int i = 0;

    // while (n!=0) {
    //     binary[i] = n%2;
    //     n = n/2;
    //     i++;
    // }

    // for (int j = i - 1; j >= 0; j--) {
    //     cout << binary[j];
    // }

    // SECOND APPROACH

    unsigned long long int ans = 0;
    unsigned long long int i = 0;

    if (n < 0) {
        n = pow(2, 16) + n;
    }
    cout << n << endl;

    while (n!=0) {
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
    return 0;


}