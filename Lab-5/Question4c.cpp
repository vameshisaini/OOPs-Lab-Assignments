#include <iostream>
using namespace std;
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};
class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};
class C : public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};
class D : public A {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};
int main() {
    B obj1;
    C obj2;
    D obj3;
    obj1.showA();
    obj2.showA();
    obj3.showA();
    return 0;
}
