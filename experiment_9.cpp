#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    string name;
    int id;

public:
    void get_Employee_Data() {
        cout << "Enter name: "<<endl;
        cin >> name;

        cout << "Enter ID: "<<endl;
        cin >> id;
    }
    void display_Employee_Data() {
        cout << "Employee Name: " << name<<endl;
        cout << "Employee ID: " << id<<endl;
    }
};
// Derived class
class Salary : public Employee {
public:
    float basic_Salary;

public:
    void getSalary() {
        cout << "Enter basic salary: ";
        cin >> basic_Salary;
    }

    void display_Salary() {
        cout << "Basic Salary: " << basic_Salary<<endl;
    }
};

// Multilevel derived class
class Bonus : public Salary {
public:
    float bonus;

public:
    void getBonus() {
        cout << "Enter bonus: ";
        cin >> bonus;
    }

    void displayTotalSalary() {
        cout << "Bonus: " << bonus<<endl;
        cout << "Total Salary: " << basic_Salary + bonus<<endl;
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
