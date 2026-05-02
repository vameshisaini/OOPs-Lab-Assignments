#include <iostream>
using namespace std;
class Base {
public:
    int pub = 10;
protected:
    int prot = 20;
private:
    int priv = 30;
};
class DerivedPublic : public Base {
public:
    void show() {
        cout << "Public Inheritance:" << endl;
        cout << "pub = " << pub << endl;
        cout << "prot = " << prot << endl;
    }
};
class DerivedProtected : protected Base {
public:
    void show() {
        cout << "\nProtected Inheritance:" << endl;
        cout << "pub = " << pub << endl;
        cout << "prot = " << prot << endl;
    }
};
class DerivedPrivate : private Base {
public:
    void show() {
        cout << "\nPrivate Inheritance:" << endl;
        cout << "pub = " << pub << endl;
        cout << "prot = " << prot << endl;
    }
};
int main() {
    DerivedPublic d1;
    d1.show();
    cout << "Accessing from main (public inheritance): " << d1.pub << endl;
    DerivedProtected d2;
    d2.show();
    DerivedPrivate d3;
    d3.show();
    return 0;
}
