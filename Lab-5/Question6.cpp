#include <iostream>
using namespace std;
class Book {
protected:
    string title;
    string author;
    float price;
public:
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }
    void displayBook() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
class Textbook : public Book {
private:
    string subject;
public:
    Textbook(string t, string a, float p, string s)
        : Book(t, a, p) {
        subject = s;
    }
    void displayTextbook() {
        displayBook();
        cout << "Subject: " << subject << endl;
    }
};
int main() {
    Book b1("C++ Programming", "Bjarne Stroustrup", 550);
    Textbook t1("Data Structures", "Mark Allen Weiss", 650, "Computer Science");
    cout << "General Book Details:" << endl;
    b1.displayBook();
    cout << "\nTextbook Details:" << endl;
    t1.displayTextbook();
    return 0;
}
