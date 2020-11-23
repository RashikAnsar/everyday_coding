#include <iostream>

using namespace std;

void spiralprint(int a[][1000], int m, int n) {
  int startRow = 0;
  int startCol = 0;
  int endRow = m - 1;
  int endCol = n - 1;

  while (startRow <= endRow and startCol <= endCol) {
    // First row
    for (int i = startCol; i <= endCol; i++) {
      cout << a[startRow][i] << " ";
    }
    startRow++;

    // last column
    for (int i = startRow; i <= endRow; i++) {
      cout << a[i][endCol] << " ";
    }
    endCol--;

    // bottom row
    if (endRow > startRow) {
      for (int i = endCol; i >= startCol; i--) {
        cout << a[endRow][i] << " ";
      }
      endRow--;
    }

    // First column
    if (endCol > startCol) {
      for (int i = endRow; i >= startRow; i--) {
        cout << a[i][startCol] << " ";
      }
      startCol++;
    }
  }
}

int main() {
  int a[1000][1000] = {0};
  int val = 1;
  int m, n;
  cout << "Enter number of rows and columns respectively: ";
  cin >> m >> n;

  cout << "Given Array " << endl;
  for (int row = 0; row < m; row++) {
    for (int col = 0; col < n; col++) {
      a[row][col] = val;
      val++;
      cout << a[row][col] << " ";
    }
    cout << endl;
  }

  cout << "Spiral print of above array:  ";
  spiralprint(a, m, n);

  return 0;
}