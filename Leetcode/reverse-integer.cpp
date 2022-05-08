#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int ans = 0;
    while (n != 0) {
        int digit = n % 10;
        // Check if the number is out of the range [2^31, 2^31 - 1]
        if ((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
            return 0;
            break;
        }
        ans = (ans * 10) + digit;
        n /= 10;
    }
    cout << ans << endl;
}