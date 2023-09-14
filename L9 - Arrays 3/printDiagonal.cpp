#include <iostream>
using namespace std;

// for diagonal print, number of cols == number of rows

void printDiag(int arr[][3], int row, int col)
{
  int sum = 0;
  for (int i = 0; i < row; i++)
  {
    cout << arr[i][i] << " ";
  }
  return;
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
  cout << endl;
  printDiag(arr, 3, 3);
}