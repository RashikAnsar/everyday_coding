/**
 * sort the cab based on the distance given its location axis X and Y
 * if distance is equal then sort based on the name
 * */

#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

class Car {
 public:
  string car_name;
  int x, y;

  Car(string name, int x, int y) {
    car_name = name;
    this->x = x;
    this->y = y;
  }

  int dist() {
    // returns square of distance from origin
    return x * x + y * y;
  }
};

bool compare(Car a, Car b) {
  int da = a.dist();
  int db = b.dist();

  if (da == db) {
    return a.car_name < b.car_name;
  }

  return da < db;
}

int main() {
  int n;
  cin >> n;

  vector<Car> v;

  for (int i = 0; i < n; i++) {
    int x, y;
    string name;
    cin >> name >> x >> y;

    Car temp(name, x, y);
    v.push_back(temp);
  }

  sort(v.begin(), v.end(), compare);

  for (auto p : v) {
    cout << p.car_name << " is at (" << p.x << "," << p.y << ")" << endl;
  }

  return 0;
}