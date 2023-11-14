#include <iostream>
using namespace std;

// Function to shift values one position to the left
void shift(int& a, int& b, int& c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

// Function to get reference to the largest value
int& getLargest(int& a, int& b, int& c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int largest = getLargest(x, y, z);
    cout << "Original values: x: " << x << " y: " << y << " z: " << z << endl;

    shift(x, y, z);
    cout << "Values after shift: " << x << " y: " << y << " z: " << z << endl;

    cin >> largest;
    cout << "After modification: x: " << x << " y: " << y << " z: " << z << endl;

    cout << "The largest value among x, y and z is: " << largest << endl;

    return 0;
}

