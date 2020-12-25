#include <iostream>

using namespace std;

void dec(int n) {
  // Base case
  if (n == 0) return;

  cout << n << " ";
  // Recursive case
  dec(n - 1);
}

void inc(int n) {
  // Base case
  if (n == 0) return;

  // Recursive case
  inc(n - 1);
  cout << n << " ";
}

int main() {
  int n;
  cin >> n;

  inc(n);
  cout << endl;
  dec(n);
  return 0;
}
