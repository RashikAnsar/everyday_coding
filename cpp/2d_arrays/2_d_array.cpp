#include <iostream>

using namespace std;

int main() {
  // array[rows][columns] == array[y][x]

  // 5x3 matrix initialized with 0's.
  int a[5][3] = {0};
  int row_wise = 1;

  // row-wise traversal of array
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      a[i][j] = row_wise;
      row_wise++;
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}