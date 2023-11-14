#include <iostream>
using namespace std;

class Shop {
public:
    static double totalSales;

    static void addSales(double salesAmount) {
        if (salesAmount > 0) {
            totalSales += salesAmount;
        }
    }

    static double getTotalSales() {
        return totalSales;
    }
};

double Shop::totalSales = 0;  // Initialize totalSales

int main() {
    int n;
    float j;
    cin >> n;
    
    for (int i = 0; i < n; i++) {  // Initialize i and correct loop condition
        cin >> j;
        Shop::addSales(j);
    }
    
    cout << "Total Sales: " << Shop::getTotalSales() << endl;  // Correct the method call
    
    return 0;
}

