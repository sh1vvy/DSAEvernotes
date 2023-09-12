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

  // we can keep inserting to vectors with any size, there is no limit
  vector<int> v;
  int a;
  cin >> a;

  for (int i = 0; i < a; i++)
  {
    int d;
    cin >> d;
    v.push_back(d);
  }

  print(v);

  for (int i = 0; i < 10; i++)
  {
    v.push_back(88);
  }

  print(v);
}