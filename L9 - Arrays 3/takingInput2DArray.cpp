#include <iostream>
using namespace std;

void print(int arr[][4], int row, int col)
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

int main()
{
  int row = 3;
  int col = 4;
  int arr[3][4];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << "Enter input for row index: " << i << " column index: " << j << endl;
      cin >> arr[i][j];
    }
  }
}