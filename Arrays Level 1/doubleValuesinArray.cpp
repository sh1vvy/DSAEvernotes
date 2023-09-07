#include <iostream>
using namespace std;

int main()
{
  int arr[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> arr[i];
  }

  cout << "Original Array:" << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < 10; i++)
  {
    arr[i] = arr[i] * 2;
  }

  cout << "New Array: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}