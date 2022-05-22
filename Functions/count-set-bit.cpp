#include <iostream>
using namespace std;

int countSetBit(int a, int b) {

    int countA = 0;
    int countB = 0;

    while(a) {

        int bitA = a&1;

        if(bitA) {
            countA++;
        }
        a = a>>1;
    }

    while(b) {

        int bitB = b&1;

        if(bitB) {
            countB++;
        }
        b = b>>1;
    }

    return countA + countB;
    
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << countSetBit(a, b) << endl;

    return 0;
}