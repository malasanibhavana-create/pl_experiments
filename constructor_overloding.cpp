#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
    //default constructor
    Student(){
        rollno = 10;
        name = "bhavana";
    }
    //parameterised constructor
    Student(int r,string n){
        rollno = r;
        name = n;
    }
    void display(){
        cout<<rollno<<" "<<name<<"\n";
    }
};
int main(){
    Student s1(10,"bhavana"),s2(s1),s3;
    s1.display();
    s2.display();
    s3.display();
}