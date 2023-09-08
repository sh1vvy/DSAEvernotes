#include <iostream>
#include <climits>
using namespace std;

int minNumber(int arr[], int size)
{
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
    }
  }

  return min;
}

int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  cout << "Minimum in Array is: " << minNumber(arr, 5);
}