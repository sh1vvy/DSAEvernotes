#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

  int n = num / 2;
  // 1st half
  for (int i = 0; i < n; i++)
  {
    // inv pyramid 1
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    // full pyramid 1
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << " ";
    }
    // inv pyramid 2
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  // 2nd half

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }

    for (int j = 0; j < 2 * n - 2 * i - 1; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}