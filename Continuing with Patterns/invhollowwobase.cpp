#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }

    int totalCol = n - i;
    for (int j = 0; j < n - i; j++)
    {
      if (j == 0 || j == totalCol - 1)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}