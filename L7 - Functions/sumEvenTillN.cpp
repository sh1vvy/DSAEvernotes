#include <iostream>
using namespace std;

int sumEvenTillN(int n)
{
  int sum = 0;
  for (int i = 2; i < n; i = i + 2)
  {
    sum = sum + i;
  }
  return sum;
}

int main()
{
  int n;
  cin >> n;

  cout << "Sum of Even till " << n << " is: " << sumEvenTillN(n);
}