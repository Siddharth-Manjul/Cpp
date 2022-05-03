#include <iostream>
using namespace std;

int main () {
    int n;
    int sum = 0;
    cout << "Enter the value upto which you want to calculate sum from 1: ";
    cin >> n;
    
    cout << "The sum from 1 upto " << n << " is: ";
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << sum << endl;
}