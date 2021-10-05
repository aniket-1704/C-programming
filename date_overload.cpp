#include <iostream>
using namespace std;
class date
{
    int year;
    int month;
    int day;
    public:
    date()
    {
        year=0;
        month=0;
        day=0;
    }
    date(int y,int m,int d)
    {
        year=y;
        month=m;
        day=d;
    }
    void show()
    {
        cout<<"year is : "<<year<<endl;
        cout<<"month is : "<<month<<endl;
        cout<<"day is : "<<day<<endl;
    }
    // matrix operator ++()
    //this could have been used
    friend date operator ++(date &);
    friend date operator ++(date &,int);
};
//prefix inc 
date operator ++(date &d)//here reference is necessary otherwise value remains 
//same
{
    ++d.year;
    ++d.month;
    ++d.day;
    return d;
}
//postfix increment
//the int helps the cmpiler to identify that it is postfix
//it is used as a dummy operator
 date operator ++(date &d,int)
{
    date d1=d;//copy constructor
    d.year++;
    d.month++;
    d.day++;
    return d1;
}
int main()
{
    date d1(2001,11,24);
    d1.show();//2001
    cout<<"prefix incrementing"<<endl;
    ++d1;
    d1.show();//2002
    date d2(2001,11,24);
    cout<<endl<<endl<<endl;
    date d3;
    d2.show();//2001
    d3=d2++;
    cout<<"postfix incrementing"<<endl;
    d3.show();//2001
    //until u perform any = operation on d3 its value wont change cause of post increment
    d3=++d1;
    d3.show();//2003
}
/*
year is : 2001     
month is : 11      
day is : 24
prefix incrementing
year is : 2002
month is : 12
day is : 25



year is : 2001
month is : 11
day is : 24
postfix incrementing
year is : 2001
month is : 11
day is : 24
year is : 2003
month is : 13
day is : 26
*/