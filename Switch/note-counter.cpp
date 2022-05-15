#include<iostream>
using namespace std;

int main () {

    int amount;
    cout << "Enter the amount to count the different notes you require: ";
    cin >> amount;

    int n1, n20, n50, n100;
    n1 = n20  = n50 = n100 = 0;

    switch (amount >= 100) {
        case 1: 
            n100 = amount/100;
            amount = amount - (n100 * 100);
            break;
    }

    switch (amount >= 50) {
        case 1: 
            n50 = amount/50;
            amount = amount - (n50 * 50);
            break;
    }

    switch (amount >= 20) {
        case 1: 
            n20 = amount/20;
            amount = amount - (n20 * 20);
            break;
    }        
    
    switch (amount >= 1) {
        case 1: 
            n1 = amount/1;
            amount = amount - (n1 * 1);
            break;
    }

    cout << "Number of 100 rupee notes: " << n100 << endl;
    cout << "Number of 50 rupee notes: " << n50 << endl;
    cout << "Number of 20 rupee notes: " << n20 << endl;
    cout << "Number of 1 rupee notes: " << n1 << endl;
}