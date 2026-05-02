#include <iostream>
using namespace std;
int main()
{
    int days;
    cout << "Enter number of days late: ";
    cin >> days;
    if (days <= 5)
    {
        cout << "Fine is 50 paise";
    }
    else if (days <= 10)
    {
        cout << "Fine is 1 rupee";
    }
    else if (days <= 30)
    {
        cout << "Fine is 5 rupees";
    }
    else
    {
        cout << "Membership cancelled";
    }
    return 0;
}
