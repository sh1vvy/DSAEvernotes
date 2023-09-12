#include <iostream>
using namespace std;

void print(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main()
{
  // static allocated array

  int arr[5] = {1, 2, 3, 4, 5};
  print(arr, 5);

  // dynamic
  int n;
  cin >> n;

  int *a = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  print(a, n);
}