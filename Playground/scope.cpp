#include<iostream>
using namespace std;

int main () {
    int a;


    if (true) {
        int a = 5;
        cout << a << endl;
    }

    
    cout << a << endl; // Garbage value printed!
}