#include <iostream>
using namespace std;
class ClassB;
class ClassA {
private:
    int numA;
public:
    ClassA(int a) {
        numA = a;
    }
    friend int addData(ClassA, ClassB);
};
class ClassB {
private:
    int numB;
public:
    ClassB(int b) {
        numB = b;
    }
    friend int addData(ClassA, ClassB);
};
int addData(ClassA objA, ClassB objB) {
    return objA.numA + objB.numB;
}
int main() {
    ClassA obj1(10);
    ClassB obj2(20);
    int result = addData(obj1, obj2);
    cout << "Sum = " << result;
    return 0;
}
