#include <iostream>
using namespace std;

class Employee {
protected:
    double basicSalary;
public:
    Employee(double basic) : basicSalary(basic) {}
    
    // Virtual function
    virtual void calculateSalary() {
        double da = basicSalary * 0.10;  // 10% Dearness Allowance
        double hra = basicSalary * 0.20; // 20% House Rent Allowance
        double ta = basicSalary * 0.05;  // 5% Travel Allowance
        double gross = basicSalary + da + hra + ta;
        
        cout << "Standard Employee Salary: " << gross << endl;
        cout << "  (Basic: " << basicSalary << ", DA: " << da << ", HRA: " << hra << ", TA: " << ta << ")" << endl;
    }
};

class Manager : public Employee {
private:
    double bonus;
public:
    Manager(double basic, double b) : Employee(basic), bonus(b) {}
    
    // Overriding the virtual function with different logic
    void calculateSalary() override {
        double da = basicSalary * 0.15;  // 15% DA for Manager
        double hra = basicSalary * 0.25; // 25% HRA for Manager
        double ta = basicSalary * 0.10;  // 10% TA for Manager
        double gross = basicSalary + da + hra + ta + bonus;
        
        cout << "Manager Salary: " << gross << endl;
        cout << "  (Basic: " << basicSalary << ", DA: " << da << ", HRA: " << hra << ", TA: " << ta << ", Bonus: " << bonus << ")" << endl;
    }
};

int main() {
    Employee standardEmp(30000);
    Manager mgr(50000, 10000);

    Employee *empPtr;

    empPtr = &standardEmp;
    empPtr->calculateSalary();

    cout << "-----------------------" << endl;

    empPtr = &mgr;
    empPtr->calculateSalary();

    return 0;
}
