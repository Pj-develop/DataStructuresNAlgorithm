#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor
    Box() {
        length = 0;
    }

    // Member function to get the length from the user
    void get() {
        cin >> length;
    }

    // Friend function declaration
    friend void printVolume(Box b);
};

// Friend function definition
void printVolume(Box b) {
    int volume = b.length * b.length * b.length;
    cout << volume << endl;
}

int main() {
    Box customBox;

    customBox.get();


    printVolume(customBox);

    return 0;
}

