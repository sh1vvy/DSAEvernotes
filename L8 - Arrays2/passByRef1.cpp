// in pass by reference the address of the memory location of the variable is sent to the function
// will work on the same variable

#include <iostream>
using namespace std;

void solve(int &a)
{
  a++;
  cout << a << endl;
}

int main()
{
  int a = 5;
  solve(a);
  cout << a;
}