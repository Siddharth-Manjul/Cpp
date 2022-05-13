#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    bool answer = false;

    if (n == 0) {
        answer = false;
    }

    while (n%4==0) {
        n /= 4;
        if (n == 1) {
            answer = true;
        }
        else {
            answer = false;
        }
    }
    cout << answer << endl;
}