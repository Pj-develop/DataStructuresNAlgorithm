#include <iostream>
using namespace std;

void reverseNumber(int &num) {
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    num = reversedNum;
}

int main() {
    int number;

    cin >> number;

    reverseNumber(number);

    cout <<number << endl;

    return 0;
}

