#include <iostream>
using namespace std;
template <class T>
class Calculator {
private:
    T a, b;
public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }
    void add() {
        cout << "Addition: " << a + b << endl;
    }
    void subtract() {
        cout << "Subtraction: " << a - b << endl;
    }
    void multiply() {
        cout << "Multiplication: " << a * b << endl;
    }
    void divide() {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division by zero not allowed\n";
    }
};
int main() {
    Calculator<int> c1(10, 5);
    Calculator<float> c2(7.5, 2.5);
    cout << "Integer Operations:\n";
    c1.add();
    c1.subtract();
    c1.multiply();
    c1.divide();
    cout << "\nFloat Operations:\n";
    c2.add();
    c2.subtract();
    c2.multiply();
    c2.divide();
    return 0;
}
