#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the value upto which you want to print counting: ";
    cin >> n;

    cout << "Counting from 1 to n: " << endl;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}