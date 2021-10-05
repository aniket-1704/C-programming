#include <iostream>
using namespace std;
class salesPerson
{
    protected:
    string name;
    float work_hours;
    float bonus;
    public:
    salesPerson(string n,float w,float b)
    {
        name=n;
        work_hours=w;
        bonus=b;
    }
     void display()
    {
        cout<<"employee name : "<<name<<endl;
        cout<<"work hours : "<<work_hours<<endl;
        cout<<"bonus: "<<bonus<<endl;
    }

};
class Fulltime:public salesPerson
{
    public:
    Fulltime(string n):salesPerson(n,12,2000)
    {
    }
    void show()
    {
        salesPerson::display();
    }
};
class Halftime:public salesPerson
{
    public:
    Halftime(string n):salesPerson(n,6,1000)
    {
    }
    void show()
    {
        salesPerson::display();
    }
};
int main()
{
    Fulltime f("rohan");
    f.show();
    Halftime h("raj");
    h.display();
return 0;
}
/*
employee name : rohan
work hours : 12
bonus: 2000
employee name : raj
work hours : 6
bonus: 1000*/