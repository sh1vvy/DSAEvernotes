#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      if (i == 0)
      {
        cout << j + 1 << " ";
      }
      else if (j == 0)
      {
        cout << i + 1 << " ";
      }
      else if (j == n - i - 1)
      {
        cout << n;
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}