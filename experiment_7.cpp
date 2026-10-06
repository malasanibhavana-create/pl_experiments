/*WAP to demonstrate static data members and static member functions,a friend function for 
comparing private data of the two classes,and a friend class for accessing private members*/
#include <iostream>
using namespace std;
// Class A
class A{
    int x;
    static int count;

public:
    A(int a){
        x = a;
        count++;
    }

    // Static member function
    static void displayCount(){
        cout << "Total objects: " << count << endl;
    }
    // Friend function
    friend void compare(A, class B);
    // Friend class
    friend class C;
};
// Definition of static data member
int A::count = 0;
// Class B
class B{
    int y;
public:
    B(int b){
        y = b;
    }
// Friend function
    friend void compare(A, B);
};
// Friend function to compare private data
void compare(A a, B b){
    if (a.x > b.y)
        cout << "A has greater value" << endl;
    else if (a.x < b.y)
        cout << "B has greater value" << endl;
    else
        cout << "Both values are equal" << endl;
}
// Friend class
class C{
public:
    void display(A obj){
        cout << "Private value of A: " << obj.x << endl;
    }
};
int main(){
    A a1(50);
    A a2(70);
    B b1(60);
    // Static member function
    A::displayCount();
    // Friend function
    compare(a1, b1);
    // Friend class
    C c;
    c.display(a1);
    return 0;
}