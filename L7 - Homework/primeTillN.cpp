#include <iostream>
using namespace std;

bool isPrime(int n)
{
  if (n == 0 || n == 1)
    return false;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  cout << 1 << " ";
  for (int i = 0; i < n; i++)
  {
    if (isPrime(i))
    {
      cout << i << " ";
    }
  }
}