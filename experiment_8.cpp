/*8. Write a program to demonstrate single inheritance using Person and Student classes and 
multilevel inheritance using Vehicle, Car and Bike classes.*/
#include <iostream>
using namespace std;
// Single Inheritance
class Person{
protected:
    string name;
    int age;
public:
    void getPerson(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};
class Student : public Person{
    int rollNo;
public:
    void getStudent(){
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void displayStudent(){
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};
// Multilevel Inheritance
class Vehicle{
protected:
    string brand;
public:
    void getVehicle(){
        cout << "Enter vehicle brand: ";
        cin >> brand;
    }
};
class Car : public Vehicle{
protected:
    string model;
public:
    void getCar(){
        cout << "Enter car model: ";
        cin >> model;
    }
};
class Bike : public Car{
    int price;
public:
    void getBike(){
        cout << "Enter price: ";
        cin >> price;
    }
    void displayBike(){
        cout << "Vehicle Details" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
};
int main(){
    // Single inheritance
    Student s;
    s.getPerson();
    s.getStudent();
    s.displayStudent();
    // Multilevel inheritance
    Bike b;
    b.getVehicle();
    b.getCar();
    b.getBike();
    b.displayBike();
    return 0;
}