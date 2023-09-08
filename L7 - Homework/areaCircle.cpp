#include <iostream>
using namespace std;
#include <math.h>

int areaCircle(int r)
{
  double pi = 3.14;
  double ar = pi * pow(r, 2);
  return ar;
}

int main()
{
  int r;
  cin >> r;
  cout << "Area of the Circle: " << areaCircle(r);
}