#include <iostream>

using namespace std;

void shift(int& a, int& b, int& c) {
  int temp = c;
  c = b;
  b = a;
  a = temp;
}

int& getLargest(int& a, int& b, int& c) {
  int largest = a;
  if (b > largest) {
    largest = b;
  }
  if (c > largest) {
    largest = c;
  }
  return largest;
}

int main() {
  int x, y, z;
  cin >> x >> y >> z;

  shift(x, y, z);

  cout << "Before Shift: x: " << x << " y: " << y << " z: " << z << endl;

  int new_largest;
  cin >> new_largest;

  int& largest = getLargest(x, y, z);

  largest = new_largest;
  

  cout << "After Modification: x: " << x << " y: " << y << " z: " << z << endl;
  cout << "The largest value among x, y, and z is: " << new_largest << endl;

  return 0;
}

