#include <iostream>
using namespace std;

void solve(int &m)
{
  m--;
  m = m * 10;
  cout << m << endl;
}

int main()
{
  int mark = 90;
  mark++;
  solve(mark);
  cout << mark;
}