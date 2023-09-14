#include <iostream>
using namespace std;

void printArray(int arr[][3], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

bool findTarget(int arr[][3], int row, int col, int target)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] == target)
      {
        return true;
      }
    }
  }
  return false;
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

  if (findTarget(arr, 3, 3, 10))
  {
    cout << "FOUND!";
  }
  else
  {
    cout << "NOT FOUND";
  }
}