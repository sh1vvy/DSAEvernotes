#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void revArr(int arr[], int size)
{
  for (int start = 0, end = size - 1; start < end; start++, end--)
  {
    swap(arr[start], arr[end]);
  }

  printArray(arr, size);
}

int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  revArr(arr, 5);
}