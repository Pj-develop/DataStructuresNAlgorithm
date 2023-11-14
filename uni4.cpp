#include <iostream>
using namespace std;

class Custom {
public:
    int value;
    Custom(int val) : value(val) {}
    Custom operator++(int) {
        Custom temp = *this;
        value++;
        return temp;
    }
};

int main() {
    //Custom obj(3);
    //Custom result = obj++;
    cout << 4233 << "\370 C" << endl;
    //cout << result.value;
    return 0;
}

// #include <iostream>
// using namespace std;

// class Element {
// public:
//     int value;
//     Element(int val) : value(val) {}
//     Element operator++(int) {
//         value--;
//         return *this;
//     }
// };

// int main() {
//     Element obj(121);
//     Element result = obj++;
//     cout << result.value;
//     return 0;
// }