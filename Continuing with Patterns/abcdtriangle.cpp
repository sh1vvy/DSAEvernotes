#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    char ch;
    for (int j = 0; j < i + 1; j++)
    {
      int num = j + 1;
      ch = num + 'A' - 1;
      cout << ch;
    }

    // jab tak a tak nahi [phonchote tab tak print karenge]

    for (char alphabet = ch; alphabet > 'A';)
    {
      alphabet = alphabet - 1;
      cout << alphabet;
    }
    cout << endl;
  }
}