#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    virtual double calculatePay() {
        return 0;
    }

    virtual ~Employee() = default;
};

// Derived class 1
class PermanentEmployee : public Employee {
public:
    double calculatePay() override {
        return 3000000;
    }
};

// Derived class 2
class CasualEmployee : public Employee {
public:
    double hours;
    double rate;

    CasualEmployee(double h, double r) {
        hours = h;
        rate = r;
    }

    double calculatePay() override {
        return hours * rate;
    }
};

int main() {
    PermanentEmployee p;
    CasualEmployee c(40, 10000);

    Employee* employee;

    employee = &p;
    cout << "Permanent employee pay: "
         << employee->calculatePay() << endl;

    employee = &c;
    cout << "Casual employee pay: "
         << employee->calculatePay() << endl;

    return 0;
}