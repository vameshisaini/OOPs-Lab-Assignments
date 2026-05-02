#include <iostream>
using namespace std;
class Rectangle
{
private:
    int width;
    int height;
public:
    void getdata()
    {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }
    void calculatearea()
    {
        int area = width * height;
        cout << "Area of the rectangle: " << area << endl;
    }
};
int main()
{
    Rectangle r;
    r.getdata();        
    r.calculatearea();  
    return 0;
}
