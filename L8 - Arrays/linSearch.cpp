#include <iostream>
using namespace std;

int main()
{
  int arr[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> arr[i];
  }
  int target;
  cin >> target;
  bool found = false;
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] == target)
    {
      found = true;
      break;
    }
  }

  if (found)
  {
    cout << "FOUND!";
  }
  else
  {
    cout << "NOT FOUND";
  }
}