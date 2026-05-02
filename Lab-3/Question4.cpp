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
 friend class B;
    void display() {
        cout << "Value of x in A: " << x << endl;
    }
};
class B {
public:
    void show(A obj) {
        cout << "Accessing private member of A from friend class B" << endl;
        cout << "Value of x: " << obj.x << endl;
    }
};
int main() {
    A objA(50);
    B objB;
    objA.display();
    objB.show(objA);
    return 0;
}
