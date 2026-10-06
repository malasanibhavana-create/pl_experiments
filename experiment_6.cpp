/* WAP to create a book class using a parameterized constructor. copy constructor and destructor.
diaplay the details of the originaland copied objects.*/
#include <iostream>
using namespace std;
class Book{
    int id;
    string title;
    float price;
public:
    // Parameterized constructor
    Book(int i, string t, float p){
        id = i;
        title = t;
        price = p;
    }
    // Display function
    void display(){
        cout << "Book ID: " << id << endl;
        cout << "Book Title: " << title << endl;
        cout << "Book Price: " << price << endl;
    }
    // Destructor
    ~Book(){
        cout << "Destructor called for Book ID: " << id << endl;
    }
};
int main(){
    // Original object
    Book b1(101, "eng literature", 500),b2(b1);
    b1.display();
    b2.display();
    return 0;
}
