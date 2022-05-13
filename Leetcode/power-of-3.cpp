#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int answer;

    for (int i = 0; i < 20; i++) {
        int ans = pow(3, i);
        if (ans == n) {
            answer = 1;
        }
    }
    cout << answer << endl;
}