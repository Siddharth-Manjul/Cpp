#include <iostream>
using namespace std;

int unique(int arr[],  int size) {

    int ans = 0;

    for (int i = 0; i < size; i++) {

        ans = ans ^ arr[i];
    }

    return ans;

}


int main () {

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    cout << "The unique element is " << unique(arr, n) << endl;
}