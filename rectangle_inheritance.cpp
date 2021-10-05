#include <iostream>
using namespace std;
class area
{
    public:
    float area_calc(float l,float b)
    {
        return l*b;
    }
};
class perimeter
{
    public:
    float perimeter_calc(float l,float b)
    {
        return 2*(l+b);
    }
};
class rectangle:private area,private perimeter
{
    float length;
    float breadth;
    float area;
    float perimeter;
    public:
    rectangle(float l,float b)
    {
        length=l;
        breadth=b;
    }
    void calc()
    {
        area=area_calc(length,breadth);
        perimeter=perimeter::perimeter_calc(length,breadth);
    }
    void display()
    {
        cout<<"length is = "<<length<<endl;
        cout<<"breadth is = "<<breadth<<endl;
        cout<<"area is = "<<area<<endl;
        cout<<"perimeter is == "<<perimeter<<endl;
    }
};
int main()
{
    rectangle r(10,20);
    r.calc();
    r.display();
    return 0;
}