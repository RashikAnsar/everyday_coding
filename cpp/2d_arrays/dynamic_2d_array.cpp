#include <iostream>

using namespace std;

int main() {
  int **arr;
  int rows, cols;
  cin >> rows >> cols;

  arr = new int *[rows];

  for (int i = 0; i < rows; i++) {
    arr[i] = new int[cols];
  }

  int val = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      // cin >> arr[i][j];
      arr[i][j] = val;
      val++;
      cout << arr[i][j] << "  ";
    }
    cout << endl;
  }
}