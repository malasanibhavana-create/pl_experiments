/*write a program to create an employee class using default and parameterized constructors. 
calculate and display the total salary after adding a bonus. */

#include <iostream>
using namespace std;
class Employee{
    int id;
    float salary;
public:
    // Default constructor
    Employee(){
        id = 0;
        salary = 0;
    }
    // Parameterized constructor
    Employee(int i, float s){
        id = i;
        salary = s;
    }

    // Function to calculate and display total salary
    void display(){
        float bonus = salary * 0.10;   // 10% bonus
        float total_Salary = salary + bonus;

        cout << "Employee ID: " << id << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << total_Salary << endl;
    }
};

int main(){
    // Object using parameterized constructor
    Employee e1(101, 30000);
    e1.display();
    return 0;
}