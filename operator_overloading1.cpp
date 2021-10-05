#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;

public:
    // complex()
    // {}  
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    // The global operator function is made friend of this class so 
    // that it can access private members 
    //to update values use refrences to objects
    friend complex operator + (complex, complex);
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
complex operator + (complex c1, complex c2)
{
    complex res;
    res.real = c1.real + c2.real;
    res.imag = c1.imag + c2.imag;
    return res;
}
int main()
{
    complex c1(5,3);
    c1.display();
    complex c2(6,7);
    c2.display();
    complex c3=c1+c2;//call to operator +
    c3.display();
    return 0;
}