#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v = 0) {
        value = v;
    }
    void setValue(int v) {
        value = v;
    }
    int getValue() {
        return value;
    }
};
Number addByValue(Number obj) {
    obj.setValue(obj.getValue() + 10);
    return obj;
}
Number addByReference(Number &obj) {
    obj.setValue(obj.getValue() + 20);
    return obj;
}
int main() {
    Number n1(5);
    Number result1 = addByValue(n1);
    cout << "After pass by value:" << endl;
    cout << "Original object value: " << n1.getValue() << endl;
    cout << "Returned object value: " << result1.getValue() << endl;
    Number result2 = addByReference(n1);
    cout << "\nAfter pass by reference:" << endl;
    cout << "Original object value: " << n1.getValue() << endl;
    cout << "Returned object value: " << result2.getValue() << endl;
    return 0;
}
