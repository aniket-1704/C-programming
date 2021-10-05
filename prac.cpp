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
        cout<<"registration number of car "<<getvehiclecount()<<" is "<<getregno()<<endl;
    }
    void setregno()
    {
        cout<<"enter the registration number for car :"<<count<<endl;
        cin>>reg_no;
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
    //dynamically allocated
    int n;
    cout<<"enter number of vehicles"<<endl;
    cin>>n;
    vehicle *v[n];
    for(int i=0;i<n;i++)
    {
        v[i]=new vehicle();
        v[i]->setregno();
        
    }
    for(int i=n-1;i>=0;i--)
    {
        v[i]->display();
        delete v[i];
    }
    return 0;
}