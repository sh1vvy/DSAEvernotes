#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  cout << "Address of A is: " << &a << endl;

  int arr[10];
  cout << "Base Address of Arr is: " << &arr << endl;
}