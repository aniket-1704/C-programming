#include <iostream>
using namespace std;
// polymorphism-many forms 
// 1.compile time Polymorphsim
// ->function overloading
// ->operator overloading
// at compile time compiler knows which function to xecute first 
// 2.run time Polymorphism
// ->virtual functions
//very imp-we can predict which function will execute first but at compile time or run time function 
//binding occurs which is what polymorphism means
class Base
{
    public:
    int base_value;
    virtual void display(void)
    {
        cout<<"value of base class variable is= "<<base_value<<endl;
    }
};
class Derived:public Base
{
    public:
    int derived_value;
    void display(void)
    {
        cout<<"value of base class variable is= "<<base_value<<endl;
        cout<<"value of derived class variable is= "<<derived_value<<endl;

    }
};
int main()
{
    Base *pointer_base;//pointer to base class
    Derived *pointer_drived;
    Base obj1;
    Derived obj2;
    pointer_base=&obj2;//pointer of base class pointed to object of derived class
    pointer_base->base_value=90;
    pointer_drived=&obj2;
    pointer_drived->derived_value=100;
    pointer_base->display();//it will call base class function
    
return 0;
}