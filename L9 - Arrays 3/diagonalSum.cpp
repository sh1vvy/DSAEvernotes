#include <iostream>
using namespace std;

// for diagonal sum, number of cols == number of rows

int diagSum(int arr[][3], int row, int col)
{
  int sum = 0;
  for (int i = 0; i < row; i++)
  {
    sum = sum + arr[i][i];
  }
  return sum;
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

  cout << "Sum of the diagonal is: " << diagSum(arr, 3, 3);
}