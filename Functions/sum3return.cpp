#include <iostream>
using namespace std;

int returnSum(int n1, int n2, int n3)
{
  int sum = n1 + n2 + n3;
  return sum;
}

int main()
{
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  cout << returnSum(n1, n2, n3) << endl;
}