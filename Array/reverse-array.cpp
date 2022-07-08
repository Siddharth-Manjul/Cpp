#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
  while (start < end)
  {
    int temp;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
}

int main()
{
  int n;
  cout << "Maximum number of elements are 100!" << endl;
  cout << "Enter the number of elements: ";
  cin >> n;

  int array[100];

  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }

  printArray(array, n);
  cout << endl;
  reverse(array, 0, n - 1);

  cout << "Reversed array: " << endl;
  printArray(array, n);

  return 0;
}