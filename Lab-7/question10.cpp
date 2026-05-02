#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int roll;
public:
    friend istream& operator >> (istream &in, Student &s) {
        cout << "Enter Name: ";
        in >> s.name;
        cout << "Enter Roll No: ";
        in >> s.roll;
        return in;
    }
    friend ostream& operator << (ostream &out, Student &s) {
        out << "Name: " << s.name << ", Roll No: " << s.roll << endl;
        return out;
    }
};
int main() {
    Student s;
    cin >> s;   
    cout << s; 
    return 0;
}
