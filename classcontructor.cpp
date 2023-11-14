#include <iostream>

using namespace std;

class Date {

private:
    int day;
    int month;
    int year;

public:
    Date() {
        this->day = 30;
        this->month = 12;
        this->year = 2023;
    }

    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;

        // Validate the input
        if (day < 1 || day > 31) {
            this->day = 30;
        }
        if (month < 1 || month > 12) {
            this->month = 1;
        }
        if (year < 2023 || year > 2998) {
            this->year = 2023;
        }
    }

    void display() {
        cout << this->day << "-" << this->month << "-" << this->year << endl;
    }
};

int main() {
    Date date;

    // Get the day, month, and year from the user
    int day, month, year;
    cin >> day >> month >> year;

    // Create a Date object
    date = Date(day, month, year);

    // Display the date
    date.display();

    return 0;
}

