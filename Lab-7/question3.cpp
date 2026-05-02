#include <iostream>
#include <cmath>
using namespace std;
double area(double base, double height) {
    return 0.5 * base * height;
}
double area(double side) {
    return (sqrt(3) / 4) * side * side;
}
double area(double equalSide, double base, bool isIsosceles) {
    
    double height = sqrt(equalSide * equalSide - (base * base) / 4.0);
    return 0.5 * base * height;
}
int main() {
    double base, height, side, equalSide;
    cout << "Enter base and height of right-angled triangle: ";
    cin >> base >> height;
    cout << "Area of right-angled triangle = " << area(base, height) << endl;
    cout << "Enter side of equilateral triangle: ";
    cin >> side;
    cout << "Area of equilateral triangle = " << area(side) << endl;
    cout << "Enter equal side and base of isosceles triangle: ";
    cin >> equalSide >> base;
    cout << "Area of isosceles triangle = " << area(equalSide, base, true) << endl;
    return 0;
}
