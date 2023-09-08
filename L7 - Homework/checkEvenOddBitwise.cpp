#include <iostream>
using namespace std;

void isSet(int n)
{
  if ((n & 1) == 1)
  {
    cout << "THIS IS AN ODD NUMBER" << endl;
  }
  else
  {
    cout << "THIS IS AN EVEN NUMBER" << endl;
  }
}

int main()
{
  int n;
  cin >> n;

  isSet(n);
}