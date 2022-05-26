#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n) {

    int i = 0;
    int t;

    while (i < n - 1) {

        t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
        i = i + 2;
    }
}

void printArray(int arr[], int n) {

    cout << "Array after swaping alternate elements: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    swapAlternate(arr, n);

    printArray(arr, n);

    return 0;
}