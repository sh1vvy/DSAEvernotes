#include <iostream>
using namespace std;

void printTranspose(int arr[][3], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = i; j < col; j++)
    {
      swap(arr[i][j], arr[j][i]);
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
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

  printTranspose(arr, 3, 3);
}