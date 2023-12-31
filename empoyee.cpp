#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Employee {
private:
    string name;
    double ratePerHour;
    int workingHours;

public:
    Employee() {}

    Employee(string n, double rate, int hours) {
        name = n;
        ratePerHour = rate;
        workingHours = hours;
    }

    string getName() {
        return name;
    }

    double calculateSalary() {
        double salary = ratePerHour * workingHours;
        if (workingHours > 40) {
            int overtimeHours = workingHours - 40;
            salary += (overtimeHours * 1.5 * ratePerHour);
        }
        return salary;
    }
};

int main() {
    int n;
    cin >> n;

    Employee employees[n];

    for (int i = 0; i < n; i++) {
        string name;
        double ratePerHour;
        int workingHours;
        
        cin >> name >> ratePerHour >> workingHours;
        employees[i] = Employee(name, ratePerHour, workingHours);
    }

    cout << "Employee Information:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Employee Name: " << employees[i].getName() << endl;
        cout << fixed << setprecision(1) << "Salary: " << employees[i].calculateSalary() << endl;
    }

    return 0;
}
