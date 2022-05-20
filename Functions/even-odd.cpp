#include <iostream>
using namespace std;

// 1 -> Even 
// 0 -> Odd

int isEven(int a) {

    // Odd
    if (a&1) {
        return 0;
    }

    // Even
    return 1;
}

int main () {

    int n;

    cout << "Enter the number to check whether it is even or odd: ";
    cin >> n;

    if (isEven(n)) {
        cout << n <<  " is Even" << endl; 
    }

    else {
        cout << n << " is Odd" << endl;
    }

}