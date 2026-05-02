#include <iostream>
using namespace std;
class Time {
private:
    int h, m, s;
public:
    Time(int hh = 0, int mm = 0, int ss = 0) {
        h = hh;
        m = mm;
        s = ss;
    }
    Time operator + (Time t) {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m;
        temp.h = h + t.h;
        if (temp.s >= 60) {
            temp.s -= 60;
            temp.m++;
        }
        if (temp.m >= 60) {
            temp.m -= 60;
            temp.h++;
        }
        return temp;
    }
    void show() {
        cout << "Time = " << h << "h " << m << "m " << s << "s" << endl;
    }
};
int main() {
    Time t1(5, 15, 34), t2(9, 53, 58), t3;
    t3 = t1 + t2;  
    t3.show();
    return 0;
}
