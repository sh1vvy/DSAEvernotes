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
  // vectors dont need size
  // itll dynamically increase in size as we keep inserting elements

  vector<int> v;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  print(v);
}