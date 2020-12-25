/**
 * Given an N*N sudoku grid (N is a multiple of 3). Solve the sudoku and print
 *the solution.
 ***/

#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool can_place(int num, vector<vector<int>> &grid, int i, int j) {
  int n = grid.size();
  for (int k = 0; k < n; k++) {
    if (grid[i][k] == num || grid[k][j] == num) {
      return false;
    }
  }
  // Formula:
  // starting point (i, j) of sub grid = (i / sqrt(n)) * sqrt(n),
  // (j / sqrt(n)) * sqrt(n)
  int sub_grid_size = sqrt(n);
  int row = (i / sub_grid_size) * sub_grid_size;
  int col = (j / sub_grid_size) * sub_grid_size;

  for (int k = row; k < row + sub_grid_size; k++) {
    for (int m = col; m < col + sub_grid_size; m++) {
      if (grid[k][m] == num) {
        return false;
      }
    }
  }
  return true;
}

bool solve_sudoku(vector<vector<int>> &grid, int i, int j) {
  // base case
  if (j == grid.size()) {
    return solve_sudoku(grid, i + 1, 0);
  }
  if (i == grid.size()) {
    return true;
  }

  // recursive case
  if (grid[i][j] == 0) {
    for (int num = 1; num <= grid.size(); num++) {
      if (can_place(num, grid, i, j)) {
        grid[i][j] = num;
        bool can_solve_sudoku = solve_sudoku(grid, i, j + 1);
        if (can_solve_sudoku) {
          return true;
        }
        grid[i][j] = 0;
      }
    }
    return false;
  } else {
    return solve_sudoku(grid, i, j + 1);
  }
}

int main() {
  int n;
  cin >> n;

  // create grid of n x n
  vector<vector<int>> grid(n, vector<int>(n));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  bool solved = solve_sudoku(grid, 0, 0);

  if (solved) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << grid[i][j] << " ";
      }
      cout << endl;
    }
  } else {
    cout << -1 << endl;
  }

  return 0;
}
