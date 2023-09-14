#include <iostream>
using namespace std;

void printDiagonal(int arr[][3], int row, int col)
{
  for (int i = 0; i < col; i++)
  {
    cout << arr[i][i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[3][3];
  int row = 3;
  int col = 3;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cin >> arr[i][j];
    }
  }

  printDiagonal(arr, 3, 3);
}