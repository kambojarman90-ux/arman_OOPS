#include <iostream>
using namespace std;

struct Complex
{
    float real, imag;

    void setComplex(float r, float i)
    {
        real = r;
        imag = i;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, sum;

    c1.setComplex(2, 2);
    c2.setComplex(3, 4);

    sum = c1.add(c2);

    cout << "Sum = ";
    sum.display();

    return 0;
}
