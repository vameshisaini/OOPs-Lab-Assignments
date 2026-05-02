#include <iostream>
using namespace std;
class Book {
public:
    string title;
    string author;
    string ISBN;
    void setDetails(const string &title, const string &author, const string &ISBN) {
        this->title = title;  
        this->author = author;
        this->ISBN = ISBN;
    }
};
class Library {
private:
    Book books[100];  
    int count;         
public:
    Library() : count(0) {}  
    bool addBook(const string &title, const string &author, const string &ISBN) {
        if (count >= 100)
         return false; 
        books[count].setDetails(title, author, ISBN);
        count++;
        return true;
    }
    bool removeBook(const string &ISBN);
    void displayBooks() const {
        if (count == 0) {
            cout << "Library is empty.\n";
            return;
        }
        cout << "\nBooks in Library:\n";
        for (int i = 0; i < count; i++) {
            cout << "Title: " << books[i].title
                 << ", Author: " << books[i].author
                 << ", ISBN: " << books[i].ISBN << endl;
        }
    }
};
bool Library::removeBook(const string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false; 
}
int main() {
    Library lib;
    lib.addBook("C++ Basics", "Bjarne", "101");
    lib.addBook("DSA", "Mark", "102");
    lib.addBook("Algorithms", "CLRS", "103");
    lib.addBook("OOP", "Stroustrup", "104");
    lib.addBook("DBMS", "Korth", "105");
    lib.displayBooks();
    string removeISBN = "103";
    if (lib.removeBook(removeISBN))
        cout << "\nBook removed successfully!\n";
    else
        cout << "\nBook not found!\n";
    lib.displayBooks();
    return 0;
}
