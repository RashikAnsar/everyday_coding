// QUESTION: https://www.interviewbit.com/problems/stack-queue/

#include <bits/stdc++.h>

#include <iostream>
using namespace std;

// Complete the given function
vector<int> solve(vector<int> &A, int B) {
  vector<int> sol;

  deque<int> q;

  int i = 0;

  while (i < B) {
    while (!q.empty() && A[i] >= A[q.back()]) {
      q.pop_back();
    }
    q.push_back(i);
    i++;
  }

  sol.push_back(A[q.front()]);

  while (i < A.size()) {
    if (i - q.front() >= B) {
      q.pop_front();
    }
    while (!q.empty() && A[i] >= A[q.back()]) {
      q.pop_back();
    }
    q.push_back(i);
    sol.push_back(A[q.front()]);
    i++;
  }

  return sol;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }
    int B;
    cin >> B;
    vector<int> ans = solve(A, B);
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
