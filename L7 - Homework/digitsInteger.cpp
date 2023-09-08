#include <iostream>
using namespace std;

void digitsInteger(int n)
{
  while (n != 0)
  {
    int digit = n % 10;
    cout << digit << endl;
    n = n / 10;
  }
}

int main()
{
  int n;
  cin >> n;
  digitsInteger(n);
}