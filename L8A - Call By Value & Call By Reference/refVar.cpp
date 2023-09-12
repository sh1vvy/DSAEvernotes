#include <iostream>
using namespace std;

int main()
{
  int n = 5;

  // k is a reference variable referring to n;
  int &k = n; // k is a nickname of n

  // c is a reference variable referring to n;
  int &c = n; // c is a nickname of n

  cout << "n: " << n << endl;
  cout << "k: " << k << endl;
  cout << "c: " << c << endl;
}