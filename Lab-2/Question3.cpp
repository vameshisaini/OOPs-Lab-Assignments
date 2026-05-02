#include <iostream>
using namespace std;
class Demo
{
private:
    void privateFunction() // private member function
    {
        cout << "Private function is called!" << endl;
    }
public:
    void publicFunction() // public member function
    {
        cout << "Public function is called!" << endl;    
        privateFunction();
    }
};
int main()
{
    Demo obj;
    obj.publicFunction(); 
    return 0;
}
