#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    string name;
    int id;

public:
    void get_Employee_Data() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter ID: ";
        cin >> id;
    }
    void display_Employee_Data() {
        cout << "Employee Name: " << name;
        cout << "Employee ID: " << id;
    }
};
// Derived class
class Salary : public Employee {
protected:
    float basic_Salary;

public:
    void getSalary() {
        cout << "Enter basic salary: ";
        cin >> basic_Salary;
    }

    void display_Salary() {
        cout << "\nBasic Salary: " << basic_Salary;
    }
};

// Multilevel derived class
class Bonus : public Salary {
private:
    float bonus;

public:
    void getBonus() {
        cout << "Enter bonus: ";
        cin >> bonus;
    }

    void displayTotalSalary() {
        cout << "Bonus: " << bonus;
        cout << "Total Salary: " << basic_Salary + bonus;
    }
};

int main() {
    Bonus e;

    e.get_Employee_Data();
    e.getSalary();
    e.getBonus();

    cout << "--- Employee Details ---";
    e.display_Employee_Data();
    e.display_Salary();
    e.displayTotalSalary();

    return 0;
}
