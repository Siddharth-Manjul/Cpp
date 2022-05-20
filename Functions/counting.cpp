#include <iostream>
using namespace std;

int counting(int n) {

    for (int i = 0; i <= n; i++) {
        cout << i << " ";
    }
    return 0;

}

int main () {

    int n;
    cout << "Enter the number upto which you want to print the counting: ";
    cin >> n;

    counting(n);
    return 0;
}