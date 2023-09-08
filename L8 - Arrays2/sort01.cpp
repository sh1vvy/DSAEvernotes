#include <iostream>
using namespace std;

void sort01(int arr[], int n)
{
  int zeroCount = 0;
  int oneCount = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      zeroCount++;
    }
    if (arr[i] == 1)
    {
      oneCount++;
    }
  }

  int index = 0;
  while (zeroCount--)
  {
    arr[index] = 0;
    index++;
  }

  while (oneCount--)
  {
    arr[index] = 1;
    index++;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {0, 1, 1, 0, 0, 0, 1, 1, 1, 0};
  sort01(arr, 10);
}