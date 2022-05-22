#include <iostream>
using namespace std;

int ap(int n) {

    int ap = 3 * n + 7;
    return ap;
}

int main () {

    int n; 

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "nth term of the AP is " << ap(n) << endl;
}