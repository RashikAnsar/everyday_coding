/**
 * Given an array of n non-negative integers a1, a2, …, an ,where each
 *represents a point at coordinate (i, ai). n vertical lines are drawn such that
 *the two endpoints of line i is at (i, ai) and (i, 0). The task is to find two
 *lines, which together with x-axis forms a container, such that the container
 *contains the most water.

 * Note: You may not slant the container.
 **/

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int *height = new int[n + 1];

  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }

  // initialize two pointers  (left and right). and area as 0
  int left = 0;
  int right = n - 1;
  int area = 0;

  while (left < right) {
    area = max(area, min(height[left], height[right]) * (right - left));

    if (height[left] < height[right]) {
      left++;
    } else {
      right--;
    }
  }
  cout << area << endl;

  return 0;
}
