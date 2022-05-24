#include<iostream>
using namespace std;

int getMax(int num[], int n) {

    int max = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (num[i] > max) {

            max = num[i];
        }
    }

    return max;
}

int getMin(int num[], int n) {

    int min = INT_MAX;

    for (int i = 0; i < n; i++) {

        if (num[i] < min) {

            min = num[i];
        }
    }

    return min;
}

int main() {

    int size;

    cout << "Maximum size of array is 100!" << endl;
    cout << "Enter the size of Array: ";
    cin >> size;
    cout << "Enter the elements of Array" << endl;

    int arr[100];

    // Taking input in array
    for (int i = 0; i < size; i++) {

        cin >> arr[i];
    }

    cout << "Maximum value is " << getMax(arr, size) << endl;
    cout << "Minimum value is " << getMin(arr, size) << endl;

}