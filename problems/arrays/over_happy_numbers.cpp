/**
 * A 'overhappy' number follows the following criteria:
 *
 * It is always a positive integer. The integer number is replaced by the sum of
 *the squares of its digits and this process is repeated until the sum equals 1.
 *
 * The numbers which loop endlessly and never reach to the sum of 1 are not
 *overhappy numbers.
 **/

#include <iostream>
#include <map>
#include <set>

using namespace std;

// update: sum of squares of its digits
int update(int n) {
  int res = 0;
  while (n > 0) {
    int d = n % 10;
    res = res + d * d;
    n /= 10;
  }
  return res;
}

/*****************************************
 *            Approach 1
 *****************************************/

// Using set
bool isOverHappyNumber(int n) {
  set<int> A;
  while (A.count(n) == 0) {
    // if num is 1 its sum of squares of digits is always 1
    if (n == 1) {
      return true;
    }

    // Insert a new element in the set, if unique
    A.emplace(n);
    // update n
    n = update(n);
  }
  return false;
}

/*****************************************
 *            Approach 2
 *****************************************/

//  using recursion and map
bool check(map<int, bool> m, int n) {
  if (n == 1) {
    return true;
  }
  if (m.find(n) != m.end()) {
    return false;
  }
  m.insert(make_pair(n, true));
  n = update(n);
  return check(m, n);
}

bool is_overhappy_number(int n) {
  map<int, bool> m;
  return check(m, n);
}

int main() {
  int n;
  cin >> n;

  cout << boolalpha << isOverHappyNumber(n) << endl;
  cout << boolalpha << is_overhappy_number(n) << endl;

  return 0;
}
