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
  int i = v.size();
  while (true)
  {
    int a;
    cin >> a;
    v.push_back(a);
    cout << "Capacity: " << v.capacity() << " Size: " << v.size() << endl;
  }

  print(v);
}