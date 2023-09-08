#include <iostream>
using namespace std;

// creates a copy of a
void solve(int a)
{
  a++;
  cout << a << endl;
}

int main()
{
  int a = 5;
  solve(a);
  cout << a << endl;
}