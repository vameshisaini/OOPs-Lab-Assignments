#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
        cout << "Constructor called (Length = " << length 
             << ", Breadth = " << breadth << ")" << endl;
    }
    ~Rectangle() {
        cout << "Destructor called" << endl;
    }

    int area() {
        return length * breadth;
    }
};
int main() {
    Rectangle r[3] = {
        Rectangle(),
        Rectangle(5),
        Rectangle(4, 6)
    };
    cout << "\nAreas of Rectangles:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Rectangle " << i + 1 
             << " Area = " << r[i].area() << endl;
    }
    return 0;
}
