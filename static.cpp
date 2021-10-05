#include <iostream>
using namespace std;
class vehicle
{
    int reg_no;
    static int count;
    public:
    vehicle()
    {
        count++;
    }
    ~vehicle()
    {
        count--;
    }
    void display()
    {
        cout<<"registration number of car "<<count<<" is "<<reg_no<<endl;
    }
    void setregno(int x)
    {
        reg_no=x;
    }
    int getregno()
    {
    return reg_no;
    }
    static int getvehiclecount()
    {
        return count;
    }
};
//initailize static variable
int vehicle::count=0;
int main()
{
    // vehicle v1;
    // v1.setregno(123);
    // v1.display();
    // vehicle v2;
    // v2.setregno(456);
    // v2.display();
    // vehicle v3;
    // v3.setregno(678);
    // v3.display();


    //dynamically allocated
    vehicle *v1=new vehicle();
    v1->setregno(123);
    v1->display();
    vehicle *v2=new vehicle();
    v2->setregno(456);
    v2->display();
    vehicle *v3=new vehicle();
    v3->setregno(789);
    v3->display();

    delete v1;
    delete v2;
    delete v3;
    return 0;
}