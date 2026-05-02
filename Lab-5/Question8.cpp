#include <iostream>
using namespace std;
class LibraryUser {
protected:
    string name;
    int id;
    string contact;
public:
    LibraryUser(string n, int i, string c) {
        name = n;
        id = i;
        contact = c;
    }
    void displayUser() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};
class Student : public LibraryUser {
private:
    string gradeLevel;
public:
    Student(string n, int i, string c, string g)
        : LibraryUser(n, i, c) {
        gradeLevel = g;
    }
    void displayStudent() {
        displayUser();
        cout << "Grade Level: " << gradeLevel << endl;
    }
};
class Teacher : public LibraryUser {
private:
    string department;
public:
    Teacher(string n, int i, string c, string d)
        : LibraryUser(n, i, c) {
        department = d;
    }
    void displayTeacher() {
        displayUser();
        cout << "Department: " << department << endl;
    }
};
int main() {
    Student s1("Ravi", 101, "9876543210", "12th Grade");
    Teacher t1("Dr. Sharma", 201, "9123456789", "Computer Science");
    cout << "Student Details:" << endl;
    s1.displayStudent();
    cout << "\nTeacher Details:" << endl;
    t1.displayTeacher();
    return 0;
}
