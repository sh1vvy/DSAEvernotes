#include <iostream>
using namespace std;

void printArray(int arr[][4], int row, int col)
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

void colWisePrint(int arr[][4], int row, int col)
{
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}

int main()
{
  // creating a 2D Array;
  // int arr[3][3];

  // int arr[3][4] = {{1, 2, 3, 4}, {10, 20, 30, 40}, {2, 3, 4, 5}};

  // we have to atleast define column size while initializing the array
  // this is due to the formula for mapping the array linearly

  int arr[][4] = {{1, 2, 3, 4}, {10, 20, 30, 40}, {2, 3, 4, 5}};

  // else it will throw error

  // int ar[3][] = {{1, 2, 3, 4}, {10, 20, 30, 40}, {2, 3, 4, 5}};

  int row = 3;
  int col = 4;

  printArray(arr, row, col);
  colWisePrint(arr, row, col);
}