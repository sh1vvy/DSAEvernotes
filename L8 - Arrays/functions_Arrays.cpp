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

bool linSearch(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  printArray(arr, 5);

  int target;
  cin >> target;

  if (linSearch(arr, 5, target))
  {
    cout << "FOUND";
  }
  else
  {
    cout << "NOT FOUND";
  }
}