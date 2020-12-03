/**
 * You are given an integer N, create a 2D array named ‘grid’ of size N x N.
 *
 * The diagonal of the grid should be filled with 0.
 * The lower side should be filled with -1s.
 * The upper side should be filled with 1s.
 *
 **/

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int **grid = new int *[N];

  for (int i = 0; i < N; i++) {
    grid[i] = new int[N];
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      // diagonal with 0
      if (i == j) {
        grid[i][j] = 0;
      }
      // Upperside with 1
      if (i < j) {
        grid[i][j] = 1;
      }
      // lowerside with -1
      if (i > j) {
        grid[i][j] = -1;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}