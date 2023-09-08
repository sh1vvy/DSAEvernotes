#include <iostream>
using namespace std;

void countToN(int n)
{
  for (int i = 1; i <= n; i++)
  {
    cout << i << " ";
  }
  cout << endl;
}

int main()
{
  int n;
  cin >> n;

  countToN(n);
}