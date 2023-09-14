#include <iostream>
#include <climits>
using namespace std;

int minElement(int arr[][3], int row, int col)
{
  int minEle = INT_MAX;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (minEle > arr[i][j])
      {
        minEle = arr[i][j];
      }
    }
  }

  return minEle;
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

  cout << "Maximum Number is: " << minElement(arr, 3, 3);
}