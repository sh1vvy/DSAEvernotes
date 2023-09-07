#include <iostream>
using namespace std;

void extremeArray(int arr[], int size)
{
  for (int start = 0, end = size - 1; start <= end; start++, end--)
  {
    if (start == end)
    {
      cout << arr[start];
    }
    else
    {
      cout << arr[start] << " ";
      cout << arr[end] << " ";
    }
  }
}

int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  extremeArray(arr, 5);
}