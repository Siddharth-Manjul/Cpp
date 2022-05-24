#include <iostream>
using namespace std;

void update(int num[], int size) {

    cout << "Inside the function" << endl;

    // Updating the array's first element
    num[0] = 120;

    // Printing the array
    for (int i = 0; i < 3; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    cout << "Going back to the main function" << endl;
}

int main() {

    int arr[3] = {1, 2, 3};    

    update(arr, 3);

    // Priting the array
    cout << "Printing in main function" << endl;

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}