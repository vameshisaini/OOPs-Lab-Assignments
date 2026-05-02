#include <iostream>
using namespace std;
class Input {
private:
    int a, b, c;
public:
    void operator()(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }
    void display() {
        cout << "Values are: " << a << " " << b << " " << c << endl;
    }
};
int main() {
    Input obj;
    obj(10, 20, 30); 
    obj.display();
    return 0;
}
