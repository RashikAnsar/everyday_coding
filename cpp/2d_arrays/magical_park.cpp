#include <iostream>
using namespace std;

/*******************************************
SAMPLE INPUT:
            4 4 5 20
            . . * .
            . # . .
            * * . .
            . # * *
SAMPLE OUTPUT:
            YES
            13
**********************************************/

void magical_park(char a[][100], int m, int n, int k, int s) {
  // can get out of the park
  bool success = true;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      char ch = a[i][j];

      // if strength is less than threshold
      if (s < k) {
        success = false;
        break;
      }

      if (ch == '*') {
        s += 5;

      } else if (ch == '.') {
        s -= 2;
      } else {
        break;
      }

      // decrease 1 from strength when move right except at end of the row (last
      // col)
      if (j != n - 1) {
        s--;
      }
    }
  }
  if (success) {
    cout << "YES" << endl;
    cout << s << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  int m, n, k, s;
  cin >> m >> n >> k >> s;
  char grid[100][100];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  magical_park(grid, m, n, k, s);

  return 0;
}