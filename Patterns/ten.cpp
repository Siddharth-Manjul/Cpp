#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        int value = row;
        while (col <= row) {
            cout << value << " ";
            // We can also use "i - j + 1" in place of value to get the values...
            value--;
            col++;
        }
        cout << endl;
        row++;
    }
}