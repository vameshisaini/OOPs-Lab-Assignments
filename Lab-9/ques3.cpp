#include <iostream>
#include <fstream>
using namespace std;
class Student {
public:
    int id;
    char name[50];
    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};
int main() {
    Student s;
    s.input();
    ofstream fout("student.dat", ios::binary);
    fout.write((char*)&s, sizeof(s));
    fout.close();
    Student s2;
    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();
    cout << "\nData read from file:\n";
    s2.display();
    return 0;
}
