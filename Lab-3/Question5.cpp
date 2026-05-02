#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float breadth;
public:
    void setData(float l, float b) {
        length = l;
        breadth = b;
    }
    float area() {
        return length * breadth;
    }
};
int main() {
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;
    Rectangle r[n];
    for(int i = 0; i < n; i++) {
        float l, b;
        cout << "Enter length and breadth of rectangle " << i + 1 << ": ";
        cin >> l >> b;
        r[i].setData(l, b);
    }
    cout << "\nAreas of Rectangles:\n";
    for(int i = 0; i < n; i++) {
        cout << "Rectangle " << i + 1 << " Area = " << r[i].area() << endl;
    }
    return 0;
}
