#include <iostream>
using namespace std;
class Demo1 {
public:
    Demo1() {
        cout << "Demo1 Constructor called" << endl;
    }
    ~Demo1() {
        cout << "Demo1 Destructor called" << endl;
    }
};
class Demo2 {
public:
    Demo2() {
        cout << "Demo2 Constructor called" << endl;
    }
};
int main() {
    Demo1 obj1;
    Demo2 obj2;
    return 0;
}
