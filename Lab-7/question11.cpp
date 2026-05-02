#include <iostream>
using namespace std;
class Test {
private:
    float value;
public:
    Test(float x) {
        value = x;
    }
    void display() {
        cout << "Value in object = " << value << endl;
    }
};
int main() {
    float num = 5.75;
    Test t = num;   
    t.display();
    return 0;
}
