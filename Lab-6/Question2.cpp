#include <iostream>
using namespace std;
class Book {
private:
    string title, author, ISBN;
public:
    Book() {
        this->title = "Not Available";
        this->author = "Not Available";
        this->ISBN = "000";
    }
    Book(string t, string a, string i) {
        this->title = t;
        this->author = a;
        this->ISBN = i;
    }
    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
    void displayDetails() {
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "ISBN: " << this->ISBN << endl;
        cout << "-------------------" << endl;
    }
    string getISBN() {
        return this->ISBN;
    }
};
class Library {
private:
    Book books[100];
    int count;
public:
    Library() {
        count = 0;
    }
    bool addNewBook(Book &b) {
        if (count < 100) {
            books[count] = b;
            count++;
            return true;
        }
        return false;
    }
    bool removeBooks(string isbn) {
        for (int i = 0; i < count; i++) {
            if (books[i].getISBN() == isbn) {
                for (int j = i; j < count - 1; j++) {
                    books[j] = books[j + 1];
                }
                count--;
                return true;
            }
        }
        return false;
    }
    void displayDetails() {
        for (int i = 0; i < count; i++) {
            books[i].displayDetails();
        }
    }
};
int main() {
    Library lib;
    Book b1("C++ Basics", "Bjarne", "101");
    Book b2("Data Structures", "Mark", "102");
    Book *b3 = new Book("OOP Concepts", "James", "103");
    lib.addNewBook(b1);
    lib.addNewBook(b2);
    lib.addNewBook(*b3);
    cout << "All Books:\n";
    lib.displayDetails();
    lib.removeBooks("102");
    cout << "\nAfter Removing Book:\n";
    lib.displayDetails();
    delete b3;
    return 0;
}
