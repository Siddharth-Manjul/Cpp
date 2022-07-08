#include<iostream>
using namespace std;

int main() {

  int n;
  int array[10];

  cout << "Enter the number of elements: ";
  cin >> n;

  cout << "Enter the array elements: ";
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  cout << "Array elements are: ";
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
}