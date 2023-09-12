#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
  // v.size to get n of array

  // new method of printing

  for (auto it : v)
  {
    cout << it << " ";
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

  // copying an array
  vector<int> v_copy(v); // initialized with values of v
  print(v_copy);

  // clearing the vector

  v.clear();
  print(v);

  // inserting again

  v.push_back(13);
  print(v);

  // popping

  v.pop_back();
  print(v);

  // finding first and last element of vector

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  // Method 1
  int firstElement = v[0];
  int lastElement = v[v.size() - 1];

  cout << firstElement << endl;
  cout << lastElement << endl;

  // Method 2
  int first = v.front();
  int last = v.back();

  cout << first << endl;
  cout << last << endl;
}