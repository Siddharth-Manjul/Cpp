#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    char alphabet = 65; // We can also use string 'A' in place of its ASCII value 65.
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << alphabet << " ";
            j++;
        }
        cout << endl;
        alphabet++;
        i++;
    }
}