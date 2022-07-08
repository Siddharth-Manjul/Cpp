#include <iostream>
using namespace std;

int getMax(int num[], int n)
{

  int max = INT_MIN;

  for (int i = 0; i < n; i++)
  {

    if (num[i] > max)
    {
      max = num[i];
    }
  }

  return max;
}

int getMin(int num[], int n)
{

  int min = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if (num[i] < min)
    {
      min = num[i];
    }
  }
  return min;
}

int main()
{

  int n;
  cout << "Maximum number of eleme are 100. Enter the number of elements: ";
  cin >> n;

  int array[100];

  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }

  cout << "Maximum element is " << getMax(array, n) << endl;
  cout << "Minimum element is " << getMin(array, n) << endl;
}