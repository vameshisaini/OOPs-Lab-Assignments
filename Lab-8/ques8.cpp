#include <iostream>
using namespace std;
template <class T1, class T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }
    void display() {
        cout << "First value: " << first << endl;
        cout << "Second value: " << second << endl;
    }
};
int main() {
    Pair<int, float> p1(10, 3.14);
    Pair<string, int> p2("Rishabh", 21);
    cout << "Pair 1:\n";
    p1.display();
    cout << "\nPair 2:\n";
    p2.display();
    return 0;
}
