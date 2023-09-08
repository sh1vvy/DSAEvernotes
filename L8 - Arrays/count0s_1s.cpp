#include <iostream>
using namespace std;

int count0(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
    {
      count++;
    }
  }
  return count;
}

int count1(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 1)
    {
      count++;
    }
  }
  return count;
}

int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  cout << "Number of 0s: " << count0(arr, 5) << endl;
  cout << "Number of 1s: " << count1(arr, 5) << endl;
}