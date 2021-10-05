#include <iostream>
using namespace std;
class person
{
    protected:
    string name;
    string gender;
    int id;
    string designation;
    void display()
    {
        cout<<"designation : "<<designation<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"gender : "<<gender<<endl;
        cout<<"id : "<<id<<endl<<endl<<endl;
    }
};
class faculty:public person
{
    public:
    faculty(string n,string g,int i)
    {
        name=n;
        gender=g;
        id=i;
        designation="faculty";
    }
    void show()
    {
        person::display();
    }
};
class non_teaching:public person
{
    public:
    non_teaching(string n,string g,int i)
    {
        name=n;
        gender=g;
        id=i;
        designation="non teaching";
    }
    void show()
    {
        person::display();
    }
};
class office_staff:public person
{
    public:
    office_staff(string n,string g,int i)
    {
        name=n;
        gender=g;
        id=i;
        designation="office staff";
    }
    void show()
    {
        person::display();
    }
};
int main()
{
    faculty f("raj","male",6748);
    non_teaching n("rahul","male",6789);
    office_staff o("riya","female",7748);
    f.show();
    n.show();
    o.show();
    return 0;
}
/*
designation : faculty
name : raj
gender : male
id : 6748


designation : non teaching
name : rahul
gender : male
id : 6789


designation : office staff
name : riya
gender : female
id : 7748*/