/**
 * Given an array of positive and negative integers. If a number k at an index
 is positive, then move forward k steps. Conversely, if it's negative (-k), move
 backward k steps. Since the array is circular, you may assume that the last
 element's next element is the first element, and the first element's previous
 element is the last element.

 * Determine if there is a loop (or a cycle) in array. A cycle must start and
 end at the same index and the cycle's length > 1. Furthermore, movements in a
 cycle must all follow a single direction. In other words, a cycle must not
 consist of both forward and backward movements. Print 1 if cycle present else
 print 0.
 ***/

#include <iostream>
#include <vector>

using namespace std;

int next(vector<int> v, int i) { return (i + v[i] + v.size()) % v.size(); }

bool circular_loop(vector<int> v) {
  int n = v.size();

  for (int i = 0; i < n; i++) {
    int slow = i, fast = i;

    if (v[i] == 0) {
      continue;
    }

    while (v[slow] * v[next(v, slow)] > 0 && v[fast] * v[next(v, fast)] > 0 &&
           v[fast] * v[next(v, next(v, fast))] > 0) {
      slow = next(v, slow);
      fast = next(v, next(v, fast));

      if (slow == fast) {
        // cycle is present but cycle length must be > 1
        if (slow == next(v, slow)) {
          break;
        }
        return true;
      }
    }

    slow = i;
    int val = v[slow];

    while (val * v[slow] > 0) {
      int x = slow;
      slow = next(v, slow);
      v[x] = 0;
    }
  }
  return false;
}

int main() {
  int n, temp;
  cin >> n;

  vector<int> v;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
  }

  cout << circular_loop(v) << endl;

  return 0;
}
