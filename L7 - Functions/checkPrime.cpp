#include <iostream>
using namespace std;

bool checkPrime(int n)
{
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

  if (checkPrime(n))
  {
    cout << "It is a Prime Number";
  }
  else
  {
    cout << "Not a Prime Number";
  }
}