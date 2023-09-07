#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2 * i + 1; j++)
    {
      if (j % 2 == 1)
      {
        cout << "*";
      }
      else
      {
        cout << i + 1;
      }
    }
    cout << endl;
  }
  int k = n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 2; j < 2 * n - 2 * i - 1; j++)
    {
      if (j % 2 == 0)
      {
        cout << k - 1;
      }
      else
      {
        cout << "*";
      }
    }
    cout << endl;
    k--;
  }
}