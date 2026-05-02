#include <iostream>
using namespace std;
int x = 100;
class Demo
{
private:
    static int count; 
public:
    void displayMessage(); 
    void showLocalGlobal(int x)
    {
        cout << "Local x = " << x << endl;
        cout << "Global x = " << ::x << endl;
    }
    void showStatic()
    {
        count++; 
        cout << "Static count = " << count << endl;
    }
};
int Demo::count = 0;
void Demo::displayMessage()
{
    cout << "Function defined outside the class using scope resolution!" << endl;
}
int main()
{
    Demo d;
    d.displayMessage();
    int x = 50;
    d.showLocalGlobal(x);
    d.showStatic();
    d.showStatic();
    std::cout << "Using std::cout with scope resolution" << std::endl;
    std::cin.ignore(); 
    return 0;
}
