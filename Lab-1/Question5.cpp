#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Using newline \\n\n";
    cout << "Hello\nWorld";
    cout << "\n\nUsing tab \\t\n";
    cout << "Hello\tWorld";
    cout << "\n\nUsing backspace \\b\n";
    cout << "Helloo\b";
    cout << "\n\nUsing endl" << endl;
    cout << "This is endl example" << endl;
    cout << "\nUsing setw\n";
    cout << setw(10) << "C++";
    cout << setw(10) << "Lab";
    return 0;
}
