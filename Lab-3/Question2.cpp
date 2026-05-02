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
    friend void swapValues(A &obj1, B &obj2);
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
    friend void swapValues(A &obj1, B &obj2);

    void display() {
        cout << "Value of y in B: " << y << endl;
    }
};
void swapValues(A &obj1, B &obj2) {
    int temp;
    temp = obj1.x;
    obj1.x = obj2.y;
    obj2.y = temp;
}
int main() {
    A objA(10);
    B objB(20);
    cout << "Before Swapping:" << endl;
    objA.display();
    objB.display();
    swapValues(objA, objB);
    cout << "\nAfter Swapping:" << endl;
    objA.display();
    objB.display();
    return 0;
}
