// arrays are passed by reference as default

#include <iostream>
using namespace std;

int solve(int arr[], int n)
{
  arr[0] = 100;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  solve(arr, 5);

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
}