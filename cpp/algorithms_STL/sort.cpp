#include <algorithm>
#include <iostream>

using namespace std;

// compare function is a helper func for sorting in decrease order
bool compare(int a, int b) { return a > b; }

int main() {
  int n, key;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Sort the given array using sort function
  sort(a, a + n);  // by default ascending order
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  // Using custom comparator
  sort(a, a + n, compare);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}