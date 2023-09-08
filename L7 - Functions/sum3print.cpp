#include <iostream>
using namespace std;

void printSum(int n1, int n2, int n3)
{
  int sum = n1 + n2 + n3;
  cout << "Sum is: " << sum << endl;
}

int main()
{
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  printSum(n1, n2, n3);
}