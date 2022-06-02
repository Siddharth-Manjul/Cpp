#include<iostream>
#include<array>
using namespace std;

int main () {

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    cout << "Size: " << size << endl;

    cout << "Elements are: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Element at 2nd index: " << a[2] << endl;

    cout << "Empty or not: " << a.empty() << endl;
}