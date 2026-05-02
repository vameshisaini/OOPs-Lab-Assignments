#include <iostream>
using namespace std;
class Array {
private:
    int arr[5];   
public:
    Array() {
        for (int i = 0; i < 5; i++) {
            arr[i] = i * 10;  
        }
    }
    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            cout << "Error: Index out of bounds!" << endl;
            exit(1);  
        }
        return arr[index];
    }
    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Array a;
    cout << "Array elements: ";
    a.display();
    cout << "\nAccessing valid index (2): ";
    cout << a[2] << endl;
    cout << "\nAccessing invalid index (7): ";
    cout << a[7];  
    return 0;
}
