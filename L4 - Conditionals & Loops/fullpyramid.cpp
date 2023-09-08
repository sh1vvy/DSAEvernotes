#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int k = 0; // har row ke liye kaam karna hai
    for (int j = 0; j < 2 * n - 1; j++)
    {
      if (j < n - i - 1)
      {
        cout << "  ";
      }
      else if (k < 2 * i + 1) // custom banayenge for printing *, 1,3,5 etc.
      {
        cout << "* ";
        k++;
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}