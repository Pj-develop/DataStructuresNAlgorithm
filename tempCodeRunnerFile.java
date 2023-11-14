#include<iostream>
using namespace std;

class ClassX {
private:
    int x;
public:
    ClassX() : x(10) {}
    int getX() {
        return x;
    }
};

class ClassY : public ClassX {
public:
    int y;
    ClassY() : y(20) {}
};

int main() {
    ClassY cy;
    int result = (cy.getX() * cy.y) + 5;
    cout << result;
    return 0;
}