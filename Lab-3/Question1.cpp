#include <iostream>
using namespace std;
class Student {
private:
    int roll;
    float marks;
public:
    Student(int roll, float marks) {
        this->roll = roll;
        this->marks = marks;
    }
    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student s1(101, 85.5);
    Student* ptr;
    ptr = &s1;
    cout << "Using dot operator:" << endl;
    s1.display();
    cout << "\nUsing arrow operator:" << endl;
    ptr->display();
    return 0;
}
