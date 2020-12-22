/***
 * A rectangle is represented as a list [x1, y1, x2, y2], where (x1, y1) are the
 *coordinates of its bottom-left corner, and (x2, y2) are the coordinates of its
 *top-right corner.
 *
 * Two rectangles overlap if the area of their intersection is positive. To be
 *clear, two rectangles that only touch at the corner or edges do not overlap.
 *
 * Given two (axis-aligned) rectangles, return whether they overlap.
 *
 **/

#include <iostream>
#include <vector>

using namespace std;

bool overlapping_rectangle(vector<int> r1, vector<int> r2) {
  // For following cases return false else return true
  // top-right x of  r1 <= bottom-left x of r2
  // bottom-left y of r1 >= top-right y of r2
  // bottom-left x of r1 <= top-right x of r2
  // top-right y of  r1 <= bottom-left y of r2
  if (r1[2] <= r2[0] || r1[1] >= r2[3] || r1[0] >= r2[2] || r1[3] <= r2[1]) {
    return false;
  }
  return true;
}

int main() {
  int n = 4;
  vector<int> r1(n);
  for (int i = 0; i < n; i++) {
    cin >> r1[i];
  }

  vector<int> r2(n);
  for (int i = 0; i < n; i++) {
    cin >> r2[i];
  }

  cout << boolalpha << overlapping_rectangle(r1, r2) << endl;

  return 0;
}
