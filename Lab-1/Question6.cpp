#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    a += 5;
    cout << "After += 5, value is: " << a << endl;
    a -= 3;
    cout << "After -= 3, value is: " << a << endl;
    return 0;
}
