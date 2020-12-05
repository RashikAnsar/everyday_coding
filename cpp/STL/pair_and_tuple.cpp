// QUESTION: https://www.interviewbit.com/problems/pair-and-tuple/

#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

pair<int, int> findMaxMin(vector<int> &A) {
  // First value of pair will be Maximum of array A and second will be Minimum
  // of array A
  pair<int, int> result;

  result.first = *max_element(A.begin(), A.end());
  ;
  result.second = *min_element(A.begin(), A.end());
  ;

  return result;
}

tuple<int, int, int> compute(vector<int> &A) {
  // First value of tuple will be sum of array A
  // Second value of tuple will be sum of even values in array A
  // Third value of tuple will be sum of odd values in array A
  int s = 0, se = 0, so = 0;
  for (int i = 0; i < A.size(); i++) {
    s += A[i];
    if (A[i] % 2 == 0) {
      se += A[i];
    }

    if (A[i] % 2 != 0) {
      so += A[i];
    }
  }
  tuple<int, int, int> t(s, se, so);
  return t;
}

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  pair<int, int> max_min = findMaxMin(A);
  cout << max_min.first << " " << max_min.second << endl;

  tuple<int, int, int> tuple_values = compute(A);
  cout << get<0>(tuple_values) << " " << get<1>(tuple_values) << " "
       << get<2>(tuple_values) << endl;

  return 0;
}
