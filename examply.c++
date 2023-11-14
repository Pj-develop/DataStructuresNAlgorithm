#include <iostream>
#include <iomanip>
using namespace std;

double calculateTotalPrice(double price) {
    return price;
}

double calculateTotalPrice(double price, int quantity) {
    return price * quantity;
}

double calculateTotalPrice(double price, int quantity, double discount_percentage) {
    double discounted_price = price * (1 - discount_percentage / 100);
    return discounted_price * quantity;
}

int main() {
    while (true) {
        int choice;
        cin >> choice;
        
        if (choice == 1) {
            double price;
            cin >> price;
            double total_price = calculateTotalPrice(price);
            cout << fixed << setprecision(2) << total_price << endl;
        } else if (choice == 2) {
            double price;
            int quantity;
            cin >> price >> quantity;
            double total_price = calculateTotalPrice(price, quantity);
            cout << fixed << setprecision(2) << total_price << endl;
        } else if (choice == 3) {
            double price;
            int quantity;
            double discount_percentage;
            cin >> price >> quantity >> discount_percentage;
            double total_price = calculateTotalPrice(price, quantity, discount_percentage);
            cout << fixed << setprecision(2) << total_price << endl;
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }
    
    return 0;
}

