#include <iostream>

using namespace std;

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

  cout << "Wave print of above array:  ";
  for (int col = 0; col < n; col++) {
    // If even column follow top-down direction
    // else follow bottom-up direction
    if (col % 2 == 0) {
      for (int row = 0; row < m; row++) {
        cout << a[row][col] << " ";
      }
    } else {
      for (int row = m - 1; row >= 0; row--) {
        cout << a[row][col] << " ";
      }
    }
  }

  return 0;
}