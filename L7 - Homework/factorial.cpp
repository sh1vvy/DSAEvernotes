#include <iostream>
using namespace std;

int printFactorial(int n)
{
  int fac = 1;
  if (n == 0)
  {
    return 69;
  }
  for (int i = 1; i <= n; i++)
  {
    fac = fac * i;
  }
  return fac;
}

int main()
{
  int n;
  cin >> n;

  cout << "Factorial of " << n << " is: " << printFactorial(n);
}