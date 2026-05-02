#include <iostream>
using namespace std;
class Student {
private:
    int roll;
    float marks;
public:
    Student(int r = 0, float m = 0) {
        roll = r;
        marks = m;
    }
    void display() {
        cout << "Roll: " << roll << "  Marks: " << marks << endl;
    }
};
int main() {
    int* pInt = new int(10);
    cout << "Integer value: " << *pInt << endl;
    float* pFloat = new float(5.5);
    cout << "Float value: " << *pFloat << endl;
    int* intArr = new int[3];
    intArr[0] = 1;
    intArr[1] = 2;
    intArr[2] = 3;
    cout << "Integer Array: ";
    for(int i = 0; i < 3; i++)
        cout << intArr[i] << " ";
    cout << endl;
    float* floatArr = new float[3];
    floatArr[0] = 1.1;
    floatArr[1] = 2.2;
    floatArr[2] = 3.3;
    cout << "Float Array: ";
    for(int i = 0; i < 3; i++)
        cout << floatArr[i] << " ";
    cout << endl;
    Student* s1 = new Student(101, 88.5);
    cout << "Single Object: ";
    s1->display();
    Student* sArr = new Student[2];
    sArr[0] = Student(201, 75.5);
    sArr[1] = Student(202, 82.0);
    cout << "Array of Objects:" << endl;
    for(int i = 0; i < 2; i++)
        sArr[i].display();
    delete pInt;
    delete pFloat;
    delete[] intArr;
    delete[] floatArr;
    delete s1;
    delete[] sArr;
    return 0;
}
