#include <iostream>
#include <cmath>
using namespace std;
class Polar {
private:
    float r, theta;  
public:
    Polar(float radius, float angle) {
        r = radius;
        theta = angle;
    }
    float getR() {
        return r;
    }
    float getTheta() {
        return theta;
    }
};
class Cartesian {
private:
    float x, y;
public:
    Cartesian(Polar p) {
        x = p.getR() * cos(p.getTheta());
        y = p.getR() * sin(p.getTheta());
    }
    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};
int main() {
    Polar p(10, 0.5);  
    Cartesian c = p;    
    c.show();
    return 0;
}
