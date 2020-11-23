/**
 * Given a 2D array of size NxN.
 * Rotate the array to 90 degrees anti-clockwise
 * */

#include <algorithm>
#include <iostream>

using namespace std;

void display(int a[][100], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

void rotate(int a[][100], int n) {
  // reverse each row
  for (int row = 0; row < n; row++) {
    int start_col = 0;
    int end_col = n - 1;
    while (start_col <= end_col) {
      swap(a[row][start_col], a[row][end_col]);
      start_col++;
      end_col--;
    }
  }

  // transpose
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i < j) {
        swap(a[i][j], a[j][i]);
      }
    }
  }
}

// Using STL to rotate
void rotate_stl(int a[][100], int n) {
  for (int row = 0; row < n; row++) {
    // revers from algorithm header file
    reverse(a[row], a[row] + n);
  }

  // transpose
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i < j) {
        swap(a[i][j], a[j][i]);
      }
    }
  }
}

int main() {
  int a[100][100];
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  rotate(a, n);
  // rotate_stl(a, n);

  display(a, n);
}
