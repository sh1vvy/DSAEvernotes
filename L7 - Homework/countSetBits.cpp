#include <iostream>
using namespace std;

unsigned int getSetBits(unsigned int n)
{
  unsigned int count = 0;
  while (n)
  {
    count += n & 1;
    n = n >> 1;
  }
  return count;
}

int main()
{
  int n;
  cin >> n;
  cout << "Number of Set Bits is: " << getSetBits(n);
}