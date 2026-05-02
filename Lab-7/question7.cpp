#include <iostream>
using namespace std;
class Matrix {
private:
    int a[2][2];  
public:
    void getData() {
        cout << "Enter elements of 2x2 matrix:\n";
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];
    }
    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    friend Matrix operator * (Matrix m1, Matrix m2);
};
Matrix operator * (Matrix m1, Matrix m2) {
    Matrix result;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result.a[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }
    return result;
}
int main() {
    Matrix m1, m2, m3;
    cout << "Matrix 1:\n";
    m1.getData();
    cout << "Matrix 2:\n";
    m2.getData();
    m3 = m1 * m2;  
    cout << "\nResult of multiplication:\n";
    m3.display();
    return 0;
}
