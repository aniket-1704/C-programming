#include <iostream>
using namespace std;
class personData
{
    protected:
    string firstname;
    string lastname;
    string address;
    string city;
    string state;
    int phone;
    public:
    personData(string f,string l,string a,string c,string s,int p)
    {
        firstname=f;
        lastname=l;
        address=a;
        city=c;
        state=s;
        phone=p;
    }
};
class customerData:public personData
{
    protected:
    int customer_no;
    string email_id;
    public:
    customerData(string f,string l,string a,string c,string s,int p,int cu,string e):personData( f,l, a, c,s,p)
    {
        customer_no=cu;
        email_id=e;

    }
    void display()
    {
        cout<<"customer number:  "<<customer_no<<endl;
        cout<<"customer name:  "<<firstname<<" "<<lastname<<endl;
        cout<<"customer address: " <<address<<","<<city<<","<<state<<endl;
        cout<<"customer email id:  "<<email_id<<endl;
        cout<<"customer phone:  "<<phone<<endl;
    }
};
int main()
{

    customerData c("aniket","gupta","902 lightbridge meadows","thane","maharashtra",993747483,123,"aniket.gmail.com");
    c.display();
return 0;
}

/*
customer number:  123
customer name:  aniket gupta
customer address: 902 lightbridge meadows,thane,maharashtra
customer email id:  aniket.gmail.com
customer phone:  993747483*/