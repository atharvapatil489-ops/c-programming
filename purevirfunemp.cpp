#include <iostream>
using namespace std;

class Employee {
protected:
    double basicSalary;
public:
    Employee(double basic) : basicSalary(basic) {}
    
    // Pure virtual function
    virtual void calculateSalary() = 0; 
};

class FullTimeEmployee : public Employee {
public:
    FullTimeEmployee(double basic) : Employee(basic) {}
    
    void calculateSalary() override {
        double da = basicSalary * 0.40;  
        double hra = basicSalary * 0.30; 
        double ta = 3000; // Fixed TA
        double gross = basicSalary + da + hra + ta;
        
        cout << "Full-Time Employee Gross Salary: " << gross << endl;
        cout << "  (DA: " << da << ", HRA: " << hra << ", TA: " << ta << ")" << endl;
    }
};

class PartTimeEmployee : public Employee {
public:
    PartTimeEmployee(double basic) : Employee(basic) {}
    
    void calculateSalary() override {
        double da = basicSalary * 0.10;  
        double hra = basicSalary * 0.15; 
        double ta = 500; // Fixed TA
        double gross = basicSalary + da + hra + ta;
        
        cout << "Part-Time Employee Gross Salary: " << gross << endl;
        cout << "  (DA: " << da << ", HRA: " << hra << ", TA: " << ta << ")" << endl;
    }
};

int main() {
    FullTimeEmployee ftEmp(60000);
    PartTimeEmployee ptEmp(20000);

    Employee *emp1 = &ftEmp;
    Employee *emp2 = &ptEmp;

    emp1->calculateSalary();
    
    cout << "-----------------------" << endl;
    
    emp2->calculateSalary();

    return 0;
}
