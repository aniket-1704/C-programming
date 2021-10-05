#include <iostream>
using namespace std;
class employee
{
    protected:
    int emp_id;
    string emp_name;
    string designataion;
    string gender;
};
class manager: public employee
{
    public:
    manager(int id,string n,string g)
    {
        emp_id=id;
        emp_name=n;
        designataion="manager";
        gender=g;
        // status ="permanent";
    }
     void show()
    {
        cout<<"\t MANAGER DETAILS \t"<<endl;
        cout<<"emplyee id : "<<emp_id<<endl;
        cout<<"employee name : "<<emp_name<<endl;
        cout<<"designation : "<<designataion<<endl;
        cout<<"employee gender : "<<gender<<endl;
        // cout<<"employee status : "<<status<<endl;
    }
};
class director:public manager
{
    protected:
    int dir_id;
    string dir_name;
    string desig;
    string gen;
    public:
    director(int i,string name,string gend,int id,string n,string g):manager(i,name,gend)
    {
        dir_id=id;
        dir_name=n;
        desig="director";
        gen=g;
        // status ="permanent";
    }
    void display()
    {
        cout<<"\t DIRECTOR DETAILS \t"<<endl;
        cout<<"Employee id : "<<dir_id<<endl;
        cout<<"Employee name : "<<dir_name<<endl;
        cout<<"Employee designation : "<<desig<<endl;
        cout<<"Employee gender : "<<gen<<endl;
    
        // cout<<"employee status : "<<status<<endl;
    }

};
class temporary
{
    protected:
    string status;
};
class secretary: public employee
{
    public:
    secretary(int id,string n,string g)
    {
        emp_id=id;
        emp_name=n;
        designataion="Secratary";
        gender=g;
        // status ="permanent";
    }
     void show()
    {
        cout<<"\t SECRETARY DETAILS \t"<<endl;
        cout<<"Employee id : "<<emp_id<<endl;
        cout<<"Employee name : "<<emp_name<<endl;
        cout<<"Employee designation : "<<designataion<<endl;
        cout<<"Employee gender : "<<gender<<endl;
        // cout<<"employee status : "<<status<<endl;
    }

};
class tsec:public secretary,public temporary
{
    protected:
    int tsec_id;
    string tsec_name;
    string desig;
    string gen;
    public:
    tsec(int i,string na,string gend,int id,string n,string g):secretary(i,na,gend)
    {
        tsec_id=id;
        tsec_name=n;
        desig=" Temporary Secratary";
        gen=g;
        status ="temporary";
    }
     void display()
    {
        cout<<"\t TSEC DETAILS \t"<<endl;
        cout<<"Employee id : "<<tsec_id<<endl;
        cout<<"Employee name : "<<tsec_name<<endl;
        cout<<"Employee designation : "<<desig<<endl;
        cout<<"Employee gender : "<<gen<<endl;
        cout<<"employee status : "<<status<<endl;
        
    }

};
class consultant:public manager,public temporary
{
    public:
    consultant(int i,string na,string gen,int id,string n,string g):manager(i,na,gen)
    {
        emp_id=id;
        emp_name=n;
        designataion="consultant";
        gender=g;
        status ="temporary";
    }
    void display()
    {
        cout<<"\t CONSULTANT DETAILS \t"<<endl;
        cout<<"Employee id : "<<emp_id<<endl;
        cout<<"Employee name : "<<emp_name<<endl;
        cout<<"Employee designation : "<<designataion<<endl;
        cout<<"Employee gender : "<<gender<<endl;
        cout<<"employee status : "<<status<<endl;
    }
};
int main()
{
    director d(1,"raju","male",2,"rani","female");
    tsec t(3,"rohan","male",4,"sheela","female");
    consultant c(2,"rani","female",5,"jimmy","male");
    d.display();
    d.show();
    t.display();
    t.show();
    c.display();
    return 0;
}
/*
         DIRECTOR DETAILS
Employee id : 2
Employee name : rani
Employee designation : director
Employee gender : female
         MANAGER DETAILS
emplyee id : 1
employee name : raju
designation : manager
employee gender : male
         TSEC DETAILS
Employee id : 4
Employee name : sheela
Employee designation :  Temporary Secratary
Employee gender : female
employee status : temporary
         SECRETARY DETAILS
Employee id : 3
Employee name : rohan
Employee designation : Secratary
Employee gender : male
         CONSULTANT DETAILS
Employee id : 5
Employee name : jimmy
Employee designation : consultant
Employee gender : male
employee status : temporary
*/