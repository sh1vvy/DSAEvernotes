#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {2, 4, 6, 8, 10};

  cout << arr[0] << endl;
  cout << arr[1] << endl;
  cout << arr[2] << endl;
  cout << arr[3] << endl;
  cout << arr[4] << endl;

  int arr1[50];

  for (int i = 0; i < 50; i++)
  {
    arr[i] = i;
  }

  for (int i = 0; i < 50; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}