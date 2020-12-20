/**
 * The heights of certain Buildings which lie adjacent to each other are given.
 *Light starts falling from left side of the buildings. If there is a building
 *of certain Height, all the buildings to the right side of it having lesser
 *heights cannot see the sun . The task is to find the total number of such
 *buildings that receive light.
 ***/

#include <climits>
#include <iostream>

using namespace std;

int main() {
  int n, ans = 0, left_max_height = INT_MIN;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (num >= left_max_height) {
      ans++;
      left_max_height = num;
    }
  }
  cout << ans << endl;

  return 0;
}
