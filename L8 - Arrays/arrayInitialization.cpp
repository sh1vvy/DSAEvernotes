#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6}; // not explicitly stating number of elements
  int brr[5] = {1, 2, 3, 4, 5};   // explicitly stating number of elements
  int crr[5] = {2, 4};            // adding less elements to array, all other blocks will have 0
  // int drr[2] = {2, 3, 4, 52, 1};  // will throw error due to excess elements
}