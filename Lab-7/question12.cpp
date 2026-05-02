#include <iostream>
using namespace std;
class Test {
private:
    float value;
public:
    Test(float x) {
        value = x;
    }
    operator float() {
        return value;
    }
};
int main() {
    Test t(7.25);
    float num;
    num = t; 
    cout << "Value in float = " << num << endl;
    return 0;
}
