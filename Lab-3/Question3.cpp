#include <iostream>
using namespace std;
class B;
class A {
private:
    int x;
public:
    A(int val) {
        x = val;
    }
    friend int addValues(A, B);
    void display() {
        cout << "Value of x in A: " << x << endl;
    }
};
class B {
private:
    int y;
public:
    B(int val) {
        y = val;
    }
    friend int addValues(A, B);
    void display() {
        cout << "Value of y in B: " << y << endl;
    }
};
int addValues(A obj1, B obj2) {
    return obj1.x + obj2.y;
}
int main() {
    A objA(15);
    B objB(25);
    objA.display();
    objB.display();
    int sum = addValues(objA, objB);
    cout << "Sum of values: " << sum << endl;
    return 0;
}
