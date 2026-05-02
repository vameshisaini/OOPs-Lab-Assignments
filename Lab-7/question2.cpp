#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() {
        cout << "Area not defined\n";
    }
    virtual void display() {
        cout << "This is a shape\n";
    }
};
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
    void display() {
        cout << "Shape: Circle\n";
    }
};
class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    void area() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
    void display() {
        cout << "Shape: Rectangle\n";
    }
};
class Triangle : public Shape {
private:
    float base, height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }
    void area() {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
    void display() {
        cout << "Shape: Triangle\n";
    }
};
int main() {
    Shape *s;
    Circle c(5);
    Rectangle r(10, 4);
    Triangle t(6, 3);
    s = &c;
    s->display();
    s->area();
    s = &r;
    s->display();
    s->area();
    s = &t;
    s->display();
    s->area();
    return 0;
}
