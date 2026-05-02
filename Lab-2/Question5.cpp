#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imaginary;
public:
    void setComplex(float r, float i)
    {
        real = r;
        imaginary = i;
    }
    void displayComplex()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    Complex addComplex(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};
int main()
{
    Complex c1, c2, sum;
    float r, i;
    cout << "Enter first complex number:" << endl;
    cout << "Real part: ";
    cin >> r;
    cout << "Imaginary part: ";
    cin >> i;
    c1.setComplex(r, i);
    cout << "Enter second complex number:" << endl;
    cout << "Real part: ";
    cin >> r;
    cout << "Imaginary part: ";
    cin >> i;
    c2.setComplex(r, i);
    cout << "\nFirst complex number: ";
    c1.displayComplex();
    cout << "Second complex number: ";
    c2.displayComplex();
    sum = c1.addComplex(c2);
    cout << "\nSum of complex numbers: ";
    sum.displayComplex();
    return 0;
}
