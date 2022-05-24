#include<iostream>
using namespace std;

bool search(int search[], int size, int key) {

    for (int i = 0; i < size; i++) {

        if(search[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int arr[10] = {5, 7, 8, -22, -2, 0, 5, 22, -2, 1};
    int key;

    cout << "Enter the element to search for: ";
    cin >> key;

    bool found = search(arr, 10, key);

    if(found) {
        cout << "Key is present" << endl;
    }
    else {
        cout << "Key is absent" << endl;
    }

    return 0;
}