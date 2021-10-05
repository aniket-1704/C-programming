#include <iostream>
#include<string>
using namespace std;
class person
{
    protected:
    string name;
    int age;
    public:
    person(){}
    person(string n,int a)
    {
        name=n;
        age=a;
    }
    virtual void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    };
};
//diamond problem
class student:virtual public person
{
    protected:
    string class_div;
    int roll_no;
    public:
    student(){}
    student(string n,int a,string cd,int r):person(n,a)
    {
        class_div=cd;
        roll_no=r;
    }
    void display()
    {
        cout<<"STUDENT DETAILS"<<endl;
        person::display();
        cout<<"class division : "<<class_div<<endl;
        cout<<"roll no. : "<<roll_no<<endl;
    }
};
class faculty:virtual public person
{
    protected:
    string subject;
    float salary;
    public:
    faculty(){}
    faculty(string n,int a,string sub,float s):person(n,a)
    {
       subject=sub;
       salary=s;
    }
    void show()
    {
        cout<<endl<<endl<<"FACULTY DETAILS"<<endl;
        person::display();
        cout<<"subject alloted : "<<subject<<endl;
        cout<<"salary : "<<salary<<endl;
    }
};
class TA: public student, public faculty
{
    protected:
    int working_hrs;
    public:
    TA(string n,int a,float s,int w)
    {
        name=n;
        age=a;
        salary=s;
        working_hrs=w;
    }
    void show2()
    {
        cout<<endl<<endl<<"TA DETAILS"<<endl;
        person::display();
        cout<<"salary : "<<salary<<endl;
        cout<<"working hours : "<<working_hrs<<endl;
    }
};
int main()
{
    student s("Raj",18,"12-A",34);
    s.display();
    faculty f("Seema",50,"Maths",50000);
    f.show();
    TA t("Kangana",36,30000,6);
    t.show2();
    return 0;
}
/*
STUDENT DETAILS        
name : Raj
age : 18
class division : 12-A
roll no. : 34


FACULTY DETAILS
name : Seema
age : 50
subject alloted : Maths
salary : 50000


TA DETAILS
name : Kangana
age : 36
salary : 30000
working hours : 6
*/