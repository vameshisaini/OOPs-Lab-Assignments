#include <iostream>
using namespace std;
inline int cube(int x) {
    return x * x * x;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube of " << num << " = " << cube(num) << endl;
    return 0;
}
