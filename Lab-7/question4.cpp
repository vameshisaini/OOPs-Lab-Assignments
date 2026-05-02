#include <iostream>
using namespace std;
class Student {
protected:
    string name;
    int roll;
public:
    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll;
    }
    virtual void display() = 0;
};
class Engineering : public Student {
    string branch;
public:
    void getData() {
        Student::getData();
        cout << "Enter Branch: ";
        cin >> branch;
    }
    void display() {
        cout << "\n[Engineering Student]\n";
        cout << "Name: " << name << ", Roll: " << roll << ", Branch: " << branch << endl;
    }
};
class Medicine : public Student {
    string specialization;
public:
    void getData() {
        Student::getData();
        cout << "Enter Specialization: ";
        cin >> specialization;
    }
    void display() {
        cout << "\n[Medicine Student]\n";
        cout << "Name: " << name << ", Roll: " << roll << ", Specialization: " << specialization << endl;
    }
};
class Science : public Student {
    string subject;
public:
    void getData() {
        Student::getData();
        cout << "Enter Subject: ";
        cin >> subject;
    }
    void display() {
        cout << "\n[Science Student]\n";
        cout << "Name: " << name << ", Roll: " << roll << ", Subject: " << subject << endl;
    }
};
int main() {
    Student* s[3];
    s[0] = new Engineering();
    s[1] = new Medicine();
    s[2] = new Science();
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for student " << i + 1 << endl;
        s[i]->getData();
    }
    for (int i = 0; i < 3; i++) {
        s[i]->display();
    }
    return 0;
}
