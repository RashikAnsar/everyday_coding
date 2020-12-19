/**
 * given an array A of size N. Find all the elements which appear more than
 * floor(N/3) times in the given array.
 *
 * Solve it in O(N) time complexity and O(1) space complexity.
 **/

// Using Boyer-Moore Majority Vote Algorithm

#include <iostream>
#include <vector>

using namespace std;

vector<int> majority_elements(vector<int> v) {
  vector<int> ans;

  if (v.size() == 0) return ans;

  int element1 = v[0];
  int count1 = 1;

  int element2 = 0;
  int count2 = 0;

  for (int i = 1; i < v.size(); i++) {
    if (element1 == v[i]) {
      count1++;
    } else if (element2 == v[i]) {
      count2++;
    } else if (count1 == 0) {
      element1 = v[i];
      count1 = 1;
    } else if (count2 == 0) {
      element2 = v[i];
      count2++;
    } else {
      count1--;
      count2--;
    }
  }

  count1 = count2 = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == element1) {
      count1++;
    } else if (v[i] == element2) {
      count2++;
    }
  }

  if (count1 > v.size() / 3) {
    ans.push_back(element1);
  }

  if (count2 > v.size() / 3) {
    ans.push_back(element2);
  }

  return ans;
}

int main() {
  int n, temp;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
  }

  vector<int> ans = majority_elements(v);

  if (!ans.size()) {
    cout << "No Majority Elements" << endl;
  }

  for (auto i : ans) {
    cout << i << " ";
  }

  return 0;
}
