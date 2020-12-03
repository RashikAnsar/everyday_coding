#include <climits>
#include <iostream>

using namespace std;

bool is_possible(int arr[], int n, int m, int cur_min) {
  int student_used = 1;
  int pages_reading = 0;

  for (int i = 0; i < n; i++) {
    if (pages_reading + arr[i] > cur_min) {
      student_used++;
      pages_reading = arr[i];
      if (student_used > m) {
        return false;
      }
    } else {
      pages_reading += arr[i];
    }
  }
  return true;
}

int find_min_pages(int arr[], int n, int m) {
  int sum = 0;

  if (n < m) {
    return -1;
  }

  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  int start = arr[n - 1];
  int end = sum;
  int ans = INT_MAX;

  while (start <= end) {
    int mid = (start + end) / 2;

    if (is_possible(arr, n, m, mid)) {
      ans = min(ans, mid);
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return ans;
}

int main() {
  // Test cases input
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    cout << find_min_pages(arr, n, m) << endl;
  }

  return 0;
}