#include <iostream>
#include <math.h>
using namespace std;
class shape
{
    protected:
    string shape;
};
class quad:public shape
{
    protected:
    float l,b;
    float area;
    public:
    quad(float le,float br)
    {
        l=le;
        b=br;
    }
    void Area()
    {
        area=l*b;
    }
    void display()
    {
        cout<<"shape : "<<shape<<endl;
        cout<<"length :"<<l<<endl;
        cout<<"breadth : "<<b<<endl;
        cout<<"area : "<<area<<endl<<endl<<endl;
    }
};
class rectangle:public quad
{
    public:
    rectangle(float l,float b):quad(l,b)
    {
        shape="rectangle";
    }
    void show()
    {
        quad::Area();
        quad::display();
    }
};
class square:public rectangle
{
    public:
    square(float len,float bred):rectangle(len,bred)
    {
        shape="square";
    }
    void show()
    {
        quad::Area();
        quad::display();
    }
};
class triangle:public shape
{
    protected:
    float s1,s2,s3;float area;
    public:
    triangle(float s11,float s22,float s33)
    {
        s1=s11;
        s2=s22;
        s3=s33;
        shape="triangle";
    }
    void Area1()
    {
        float s=(s1+s2+s3)/2;
        area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    }
    void display()
    {
        cout<<"shape : "<<shape<<endl;
        cout<<"side 1 :"<<s1<<endl;
        cout<<"side 2 : "<<s2<<endl;
        cout<<"side 3 : "<<s3<<endl;
        cout<<"area : "<<area<<endl<<endl<<endl;
    }
};
class right_triangle:public triangle
{
    public:
    right_triangle(float s1,float s2,float s3):triangle(s1,s2,s3)
    {
        shape="right triangle";
    }
    void Area2()
    {
        area=(s1*s2)/2;
    }
    void show()
    {
        triangle::display();
    }
};
int main()
{
    rectangle r(4,3);
    r.show();
    square s(4,4);
    s.show();
    triangle t(5,6,7);
    t.Area1();
    t.display();
    right_triangle rt(3,4,5);
    rt.Area2();
    rt.show();
    return 0;
}
/*
shape : rectangle
length :4
breadth : 3
area : 12


shape : square
length :4
breadth : 4
area : 16


shape : triangle
side 1 :5
side 2 : 6
side 3 : 7
area : 14.6969


shape : right triangle
side 1 :3
side 2 : 4
side 3 : 5
area : 6
*/