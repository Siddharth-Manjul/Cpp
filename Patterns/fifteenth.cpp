#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    char ch = 'A';
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << ch << " "; // We can also use 'A' + i - 1 directly instead of using variable ch.
            j++;
        }
        cout << endl;
        i++;
        ch++;
    }
}