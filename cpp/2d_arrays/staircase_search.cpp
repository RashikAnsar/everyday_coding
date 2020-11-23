#include <iostream>

using namespace std;

int main() {
  // rows and columns
  int n, m;
  cin >> n >> m;

  // matrix
  int arr[30][30];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  // search element
  int x;
  cin >> x;

  int a = 0;             // to change rows
  int b = m - 1;         // to change cols in current row
  int flag = 0;          // if element is found change to 1 else 0
  int comp = arr[a][b];  // current element

  // StairCase Search-- Starting from top right corner of the matrix
  while ((a < n) && (b >= 0)) {
    if (x > comp)
      // if search element > current element move to next row
      comp = arr[++a][b];
    else if (x < comp)
      // if search element < current element move left in current row
      comp = arr[a][--b];
    else {
      flag = 1;
      break;
    }
  }

  if (flag) {
    cout << x << " found in matrix" << endl;
  } else {
    cout << x << " not found" << endl;
  }

  return 0;
}