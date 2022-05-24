#include<iostream>
using namespace std;

void reverse(int array[], int size) {

    int start = 0;
    int end = size - 1;

    while (start <= end) {

        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void printArray(int array[], int size) {

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main () {

    int arr[6] = {1,4,0,5,-2,15}; 
    int brr[5] = {2,6,3,9,4};

    printArray(arr, 6);
    printArray(brr, 5);

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}