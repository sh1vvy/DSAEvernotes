#include <iostream>
using namespace std;

int FtoC(int f)
{
  int c = (f - 32) * 5 / 9;
  return c;
}

int main()
{
  int f;
  cin >> f;

  cout << f << "F is " << FtoC(f) << "C.";
}