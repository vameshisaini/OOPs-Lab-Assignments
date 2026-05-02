#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "\nAfter swapping:";
    cout << "\nFirst number: " << a;
    cout << "\nSecond number: " << b;
    return 0;
}
