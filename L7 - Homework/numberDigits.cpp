#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  double arr[10];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  double num = 0;
  for (int i = 0; i < n; i++)
  {
    num = num + (arr[i] * pow(10, (double)i));
  }

  cout << num;
}