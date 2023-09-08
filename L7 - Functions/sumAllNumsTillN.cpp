#include <iostream>
using namespace std;

int sumAllNumsTillN(int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + i;
  }

  return sum;
}

int main()
{
  int n;
  cin >> n;
  cout << "Sum is: " << sumAllNumsTillN(n);
}