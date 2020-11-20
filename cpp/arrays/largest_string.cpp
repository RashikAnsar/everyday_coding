// Print the largest string along with its length among N give strings.
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter number of output strings: ";
  cin >> n;

  char arr[1000];
  char largest[1000];
  int len = 0;
  int largest_len = 0;

  // to take buffer \n;
  cin.get();

  for (int i = 0; i < n; i++) {
    cin.getline(arr, 1000);
    len = strlen(arr);
    if (len > largest_len) {
      largest_len = len;
      strcpy(largest, arr);
    }
  }

  cout << largest << " and length " << largest_len << endl;

  return 0;
}