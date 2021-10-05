#include <iostream>
using namespace std;
class marks
{
    int mar;
    public:
    void read()
    {
        cout<<"enter the marks of the student"<<endl;
        cin>>mar;
    }
    friend void grade(marks);
};
void grade (marks m)
{
   if(m.mar < 50)
   {
       cout<<"F";
   }
   else if(m.mar>=50 && m.mar<=60)
   {
       cout<<"E";
   }
   else if(m.mar>=60 && m.mar<=70)
   {
       cout<<"D";
   }
   else if(m.mar>=70 && m.mar<=80)
   {
       cout<<"C";
   }
   else if(m.mar>=80 && m.mar<=90)
   {
       cout<<"B";
   }
   else
   {
       cout<<"A";
   }
   
}
int main()
{
    marks m;
    m.read();
    cout<<"grade secured by student is"<<endl;
    grade(m);
    return 0;
}
/*
enter the marks of the student
98
grade secured by student is
A

*/