#include <iostream>
using namespace std;

void isEven(int n)
{
  if ((n | 1) > n)
  {
    cout << "Even";
  }
  else
  {
    cout << "Odd";
  }
}

int main()
{
  int n;
  cin >> n;

  isEven(n);
}