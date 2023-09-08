#include <iostream>
using namespace std;

void solve(int m)
{
  m--;
  m = m * 10;
  cout << m << endl;
}

int main()
{
  int marks = 90;
  marks++;
  solve(marks);
  cout << marks;
}