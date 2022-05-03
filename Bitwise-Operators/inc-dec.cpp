#include<iostream>
using namespace std;

int main () {
    int i = 5;

    cout << (++i) << endl; // Pre Increment // 6
    cout << (i++) << endl; // Post Increment // 6, i = 7
    //cout << i << endl;
    cout << (i--) << endl; // Pre Decrement // 7, i = 6
    cout << (--i) << endl; // Post Decrement // 5
    //cout << i << endl;
}