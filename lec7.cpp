#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    double fuelConsumption;

public:
    // Constructor
    Car(const string& b, double fc) : brand(b), fuelConsumption(fc) {}

    // Friend function declaration
    friend double calculateFuelCost(const Car& car, double distance, double fuelPrice);
};

// Friend function definition
double calculateFuelCost(const Car& car, double distance, double fuelPrice) {
    double fuelConsumed = (car.fuelConsumption / 100) * distance;
    double fuelCost = fuelConsumed * fuelPrice;
    return fuelCost;
}

int main() {
    string brand;
    double fuelConsumption, distance, fuelPrice;

     cin >> brand;

    cin >> fuelConsumption;

    cin >> distance;

    cin >> fuelPrice;

    Car car(brand, fuelConsumption);
    double fuelCost = calculateFuelCost(car, distance, fuelPrice);

    cout << "Total fuel cost: " << fixed << setprecision(2) << fuelCost << endl;

    return 0;
}

