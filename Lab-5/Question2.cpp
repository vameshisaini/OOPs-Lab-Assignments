#include <iostream>
using namespace std;
class Base {
protected:
    int number;
public:
    Base(int n) {
        number = n;
    }
};
class Derived : public Base {
public:
    Derived(int n) : Base(n) {}
    void show() {
        cout << "Protected number accessed in Derived class: " << number << endl;
    }
};
int main() {
    Derived obj(50);
    obj.show();
    return 0;
}
