#include <iostream>
using namespace std;

int addSum(int n1, int n2)
{
  return n1 + n2;
}

int main()
{
  int n1;
  int n2;
  cin >> n1 >> n2;

  cout << addSum(n1, n2) << endl;
}