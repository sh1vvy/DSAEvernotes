#include <iostream>
#include <climits>
using namespace std;

int maxElement(int arr[][3], int row, int col)
{
  int maxEle = INT_MIN;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (maxEle < arr[i][j])
      {
        maxEle = arr[i][j];
      }
    }
  }

  return maxEle;
}

int main()
{
  int arr[3][3];
  int row = 3;
  int col = 3;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }

  cout << "Maximum Number is: " << maxElement(arr, 3, 3);
}