/*WAP to create a class student with data members for roll number,name and marks
accept and display the student details and calculated the result.*/
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    //data members
    int rollno;
    string name;
    int phy;
    int chem;
    int maths;
    //member functions
    void get_info(){
        cout<<"enter the roll number "<<endl;
        cin>>rollno;
        cout<<"enter the name  "<<endl;
        cin>>name;
        cout<<"enter the phy marks "<<endl;
        cin>>phy;
         cout<<"enter the chem marks "<<endl;
        cin>>chem;
        cout<<"enter the maths marks "<<endl;
        cin>>maths;
    }
    void show_info(){
        cout<<"roll no:"<<rollno<<endl;
        cout<<"name"<<name<<endl;
        cout<<"phy"<<phy<<endl;
        cout<<"chem:"<<chem<<endl;
        cout<<"maths:"<<maths<<endl;
    }
};
int main(){
    Student s1;
    s1.get_info();
    s1.show_info();
    return 0;
}