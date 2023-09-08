#include <iostream>
using namespace std;

int findUnique(int arr[], int n)
{
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main()
{
  int arr[] = {1, 2, 2, 1, 4, 4, 3, 5, 6, 6, 5};
  cout << findUnique(arr, 11) << endl;
}