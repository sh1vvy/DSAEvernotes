#include <iostream>
#include <vector>

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
  int n;
  cin >> n;
  int *arr = new int[n];

  // taking elements as input and inserting into array

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // now if we want to insert more items into the array
  // will throw error in online compiler but doesnt throw in VSCode
  // this is wrong
  // we can only add n elements in an array of n size

  for (int i = 0; i < 10; i++)
  {
    arr[n + i] = 80;
  }

  print(arr, n);
}