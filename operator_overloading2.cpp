#include <iostream>
using namespace std;
class number
{
    int num1;
    int num2;
    public:
    number(int x,int y)
    {
        num1=x;
        num2=y;
    }
     operator float()
    {
       return float(num1)/float(num2);
    }
};
int main()
{
    number n1(2,4);
    float value=n1;
    //  For operator overloading to work, at least one
    // of the operands must be a user defined class object.
    cout<<value;//0.5
    return 0;
}