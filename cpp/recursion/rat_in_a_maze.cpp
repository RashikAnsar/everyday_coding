#include <iostream>

using namespace std;

bool rat_in_maze(char maze[10][10], int sol[][10], int i, int j, int m, int n) {
  if (i == m && j == n) {
    sol[m][n] = 1;
    for (int p = 0; p <= m; p++) {
      for (int q = 0; q <= n; q++) {
        cout << sol[p][q] << " ";
      }
      cout << endl;
    }
    cout << endl;

    return true;
  }

  if (i > m || j > n) {
    return false;
  }

  if (maze[i][j] == 'X') {
    return false;
  }

  sol[i][j] = 1;

  bool right_success = rat_in_maze(maze, sol, i, j + 1, m, n);
  bool down_success = rat_in_maze(maze, sol, i + 1, j, m, n);

  sol[i][j] = 0;

  if (right_success || down_success) {
    return true;
  }
  return false;
}

int main() {
  char maze[10][10] = {
      "0000",
      "00X0",
      "000X",
      "0X00",
  };

  int sol[10][10] = {0};
  int m = 4, n = 4;

  bool ans = rat_in_maze(maze, sol, 0, 0, m - 1, n - 1);

  if (ans == false) {
    cout << "Path Doesn't exist.........!" << endl;
  }

  return 0;
}
