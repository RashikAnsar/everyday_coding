/***
 * Given an array A, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 *
 * Constraints
 * Do this in-place without making a copy of the array and Minimize the total
 * number of operations.
 **/

#include <iostream>
#include <vector>

using namespace std;

void move_zeros(vector<int> &v) {
  int idx = 0;
  for (int i = 0; i < v.size(); i++) {
    // if v[i] == 0 then continue else swap and increment idx
    if (v[i] != 0) {
      swap(v[i], v[idx]);
      idx++;
    }
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  move_zeros(v);

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }

  return 0;
}
