/**
 * A wealthy businessman has several meetings to attend. Given an array of
 *meeting time intervals consisting of start and end times [[s1,e1],[s2,e2],…]
 *(si < ei), determine if he could attend all meetings.
 *
 **/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool can_attend_meetings(vector<vector<int>> intervals) {
  sort(intervals.begin(), intervals.end());
  int i = 1;
  while (i < intervals.size()) {
    if (intervals[i][0] < intervals[i - 1][1]) {
      return false;
    }
    i++;
  }
  return true;
}

int main() {
  int n;
  cin >> n;

  vector<vector<int>> intervals;

  for (int i = 0; i < n; i++) {
    int start, end;
    cin >> start >> end;
    vector<int> temp;
    temp.push_back(start);
    temp.push_back(end);
    intervals.push_back(temp);
  }

  cout << boolalpha << can_attend_meetings(intervals) << endl;

  return 0;
}
