#include <iostream>
using namespace std;

int maxNum(int n1, int n2, int n3)
{
  int max = 0;
  if (n1 > n2 && n1 > n3)
  {
    max = n1;
  }
  else if (n2 > n1 && n2 > n3)
  {
    max = n2;
  }
  else
  {
    max = n3;
  }

  return max;
}

int main()
{
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  cout << "Max is: " << maxNum(n1, n2, n3);
}