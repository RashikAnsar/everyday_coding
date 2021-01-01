// Given a wall of size 4xN and tiles of size (1,4) and (4,1).
// In how many ways you can build the wall.

#include <iostream>

using namespace std;

int number_of_ways(int n) {
  // base case
  if (n <= 3) {
    return 1;
  }
  return number_of_ways(n - 1) + number_of_ways(n - 4);
}

int main() {
  int n;
  cin >> n;

  cout << number_of_ways(n) << endl;
  return 0;
}
