#include<iostream>
using namespace std;

int sumOfArrayElement(int sum[], int size) {

    int ans = 0;

    for (int i = 0; i < size; i++) {

        ans = ans + sum[i];
    }
    return ans;
}

int main () {

    int size;
    int arr[100];

    cout << "You can input maximum 100 values!" << endl;

    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements of array: " << endl;

    for (int i = 0; i < size; i++) {

        cin >> arr[i]; " ";
    }
    cout << endl;

    cout << "The sum of the given elements of an array is " << sumOfArrayElement(arr, size) << endl;

    return 0;
}