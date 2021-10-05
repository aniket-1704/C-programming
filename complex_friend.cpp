#include <iostream>
using namespace std;
class Complex
{
    int imag;
    int real;

public:
    Complex() {}  
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    int getreal()
    {
        return real;
    }
    int getimag()
    {
        return imag;
    }
    void display();
    friend Complex add(int,Complex);
    friend Complex add(Complex,Complex);
};
 Complex add(int r, Complex c)//adds reall parts
    {
        Complex c3;
        c3.real = r + c.real;
        return c3;
    }
    Complex add(Complex c1, Complex c2)//adds imaginary parts
    {
        Complex c4;
        // c4.real = c1.real + c2.real;
        c4.imag = c1.imag + c2.imag;
        return c4;
    }
void Complex::display()
{
    cout << real << "+" << imag << "i" << endl;
}
int main()
{
    Complex c1(3, 2);
    cout << "Complex no.1" << endl;
    c1.display();
    Complex c2(5, 2);
    cout << "Complex no.2" << endl;
    c2.display();
    cout << "addition of the 2 complex no.s gives is" << endl;
    Complex c5;
    c5=add(c1.getreal(),c2);
    c5=add(c1,c2);
    c5.display();
    return 0;
}