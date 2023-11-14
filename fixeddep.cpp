#include <iostream>
#include <iomanip>
#include <cmath>

class FixedDeposit {
private:
    long int principalAmount;
    int years;
    float ratePercent;
    float rateDecimal;
    int ratePercent1;
    int rateDecimal1;
    double returnValuePercent1;
    double returnValueDecimal;

public:
    FixedDeposit(long int principal, int years, float rate) {
        principalAmount = principal;
        this->years = years;
        if (rate < 1.0) {
            rateDecimal = rate;
            ratePercent = rate * 100.0;
        } else {
            ratePercent = rate;
            rateDecimal = rate / 100.0;
        }
        double n = 12; // Assuming interest is compounded monthly
        float r = rateDecimal / n;
        float t = years * n;

        //returnValuePercent = principalAmount * pow(1 + ratePercent, years);
        returnValuePercent1 = principalAmount * pow(1 + rateDecimal, years); // Use rateDecimal for both calculations
        
    }
    FixedDeposit(long int principal, int years, int rate) {
        principalAmount = principal;
        this->years = years;
        if (rate < 1) {
            //rateDecimal1 = rate;
            ratePercent1 = rate * 100;
        } else {
            ratePercent1 = rate/100;
            //rateDecimal1 = rate / 100;
        }
        double n = 12; // Assuming interest is compounded monthly
        float r = rateDecimal1 / n;
        double t = years * n;

        returnValuePercent1 = principalAmount * pow(1 + ratePercent1, years);
        //returnValueDecimal = principalAmount * pow(1 + rateDecimal, years); // Use rateDecimal for both calculations
        
    }
    

    void display() {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << returnValuePercent1 << std::endl;
        //std::cout << returnValueDecimal << std::endl;
    }
};

int main() {
    long int principal1, principal2;
    int years1, years2;
    int rate1;
    float rate2;

    std::cin >> principal1 >> years1 >> rate1;
    std::cin >> principal2 >> years2 >> rate2;

    FixedDeposit fd1(principal1, years1, rate1);
    FixedDeposit fd2(principal2, years2, rate2);

    fd1.display();
    fd2.display();

    return 0;
}
