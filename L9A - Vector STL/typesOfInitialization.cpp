#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
  // v.size to get n of array

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  // vector<int> v;
  // vector<int> v1 = {1, 2, 3, 4, 5};
  // vector<int> v2(5, 10); // size 5, print 10 (default value) 5 times
  // vector<int> v3(1,2,3,4,5);

  // print(v);

  // removes the last element from the array

  v.pop_back();
  print(v);
  v.pop_back();
  print(v);
}