#include <iostream>
using namespace std;
template <class T>
void swapValues(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 10, y = 20;
    float p = 1.5, q = 2.5;
    swapValues(x, y);
    cout << "After swapping integers: " << x << " " << y << endl;
    swapValues(p, q);
    cout << "After swapping floats: " << p << " " << q << endl;
    return 0;
}
