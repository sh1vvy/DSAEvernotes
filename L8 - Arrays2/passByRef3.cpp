#include <iostream>
using namespace std;

void solve(int &jaadoo)
{
  jaadoo--;
  cout << jaadoo + 10 << endl;
  return;
}

int main()
{
  int sundari = 100;
  sundari--;
  sundari -= 5;

  solve(sundari);
  cout << sundari;
}