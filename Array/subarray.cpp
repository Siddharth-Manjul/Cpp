#include <iostream>
#include <climits>
using namespace std;

int maxSubArray(int arr[], int n)
{

  int max = INT_MIN;
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
    if (max < sum)
      max = sum;
    if (sum < 0)
      sum = 0;
  }
  return max;
}

int main()
{

  int n;
  cout << "Maximum number of elements are 100!" << endl;
  cout << "Enter the size of array: ";
  cin >> n;

  int arr[100];
  cout << "Enter the elements: "
       << " ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int max_sum = maxSubArray(arr, n);
  cout << "Maximum contiguous sum is " << max_sum << endl;
  return 0;
}