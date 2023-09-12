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
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  print(v);

  // removes the last element from the array

  v.pop_back();
  print(v);
  v.pop_back();
  print(v);
}