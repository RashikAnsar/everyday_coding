#include <iostream>
#include <vector>
// #include <a.out.h
using namespace std;

vector<int> rotateArray(vector<int> &A, int B) {
  vector<int> ret;
  for (int i = 0; i < A.size(); i++) {
    ret.push_back(A[(i + B) % A.size()]);
  }
  return ret;
}

int main() {
  int n, a;
  vector<int> A;
  vector<int> result;

  cout << "Number of element in array (n): ";
  cin >> n;

  cout << "Elements of array : ";

  for (int i = 0; i < n; i++) {
    cin >> a;
    A.push_back(a);
  }

  cout << "Number of units to rotate: ";
  cin >> a;
  result = rotateArray(A, a);
  for (int x : result) {
    cout << x << " ";
  }

  return 0;
}