#include <cmath>
#include <iostream>

using namespace std;

bool can_place(int mat[][9], int i, int j, int n, int num) {
  for (int x = 0; x < n; x++) {
    if (mat[x][j] == num || mat[i][x] == num) {
      return false;
    }
  }

  int rn = sqrt(n);
  int sx = (i / rn) * rn;
  int sy = (j / rn) * rn;

  for (int x = sx; x < sx + rn; x++) {
    for (int y = sy; y < sy + rn; y++) {
      if (mat[x][y] == num) {
        return false;
      }
    }
  }
  return true;
}

bool solve_sudoku(int mat[][9], int i, int j, int n) {
  if (i == n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << mat[i][j] << " ";
      }
      cout << endl;
    }

    return true;
  }

  if (j == n) {
    return solve_sudoku(mat, i + 1, 0, n);
  }

  if (mat[i][j] != 0) {
    return solve_sudoku(mat, i, j + 1, n);
  }

  for (int number = 1; number <= n; number++) {
    if (can_place(mat, i, j, n, number)) {
      mat[i][j] = number;
      bool could_we_solve = solve_sudoku(mat, i, j + 1, n);
      if (could_we_solve) {
        return true;
      }
    }
  }
  mat[i][j] = 0;
  return false;
}

int main() {
  int sudoku[9][9] = {{5, 3, 0, 0, 7, 0, 0, 0, 0}, {6, 0, 0, 1, 9, 5, 0, 0, 0},
                      {0, 9, 8, 0, 0, 0, 0, 6, 0}, {8, 0, 0, 0, 6, 0, 0, 0, 3},
                      {4, 0, 0, 8, 0, 3, 0, 0, 1}, {7, 0, 0, 0, 2, 0, 0, 0, 6},
                      {0, 6, 0, 0, 0, 0, 2, 8, 0}, {0, 0, 0, 4, 1, 9, 0, 0, 5},
                      {0, 0, 0, 0, 8, 0, 0, 7, 9}};

  solve_sudoku(sudoku, 0, 0, 9);
  return 0;
}
