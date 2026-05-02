#include <iostream>
using namespace std;
int main()
{
    int a, b, choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";
    cout << "\nEnter your choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "Addition = " << a + b;
            break;
        case 2:
            cout << "Subtraction = " << a - b;
            break;
        case 3:
            cout << "Multiplication = " << a * b;
            break;
        case 4:
            cout << "Division = " << a / b;
            break;
        default:
            cout << "Invalid choice";
    }
    return 0;
}
