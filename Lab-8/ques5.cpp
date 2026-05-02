#include <iostream>
using namespace std;
template <class T>
void process(T a) {
    cout << "Single parameter: " << a << endl;
}
template <class T>
void process(T a, T b) {
    cout << "Two parameters (same type): " << a << " , " << b << endl;
}
template <class T, class U>
void process(T a, U b) {
    cout << "Two parameters (different types): " << a << " , " << b << endl;
}
int main() {
    process(10);             
    process(5, 15);          
    process(10, 3.14);       
    process('A', 100);        
    return 0;
}
