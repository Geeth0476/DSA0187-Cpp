#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculatePay() const {
        return 0.0;
    }

    virtual ~Employee() {}  
};
class Manager : public Employee {
private:
    double salary;
    double bonus;
public:
    Manager(double sal, double bon) : salary(sal), bonus(bon) {}

    double calculatePay() const override {
        return salary + bonus;
    }
};
class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Manager manager(5000, 1500);  
    Engineer engineer(50, 160);  
 cout << "Manager's Pay: " << manager.calculatePay() << endl;
    cout << "Engineer's Pay: " << engineer.calculatePay() << endl;

    return 0;
}
