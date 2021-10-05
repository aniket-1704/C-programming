#include <iostream>
using namespace std;
class marks
{
    int mark;
    public:
    marks(int m)
    {
        mark=m;
    }
    bool operator >(marks m)
    {
        if(mark>m.mark)
        return true;
        else
        {
            return false;
        }     
    }
     bool operator ==(marks m)
    {
        if(mark==m.mark)
        return true;
        else
        {
            return false;
        }     
    } 
};
int main()
{
    int m,s;
    cout<<"enter marks of student 1"<<endl;
    cin>>m;
    cout<<"enter marks of student 2"<<endl;
    cin>>s;
    marks m1(m);
    marks m2(s);
    if(m1>m2)
    {
        cout<<"student 1 has more marks";

    }
    else if(m1==m2)
    {
        cout<<"students have equal marks";
    }
    else
    {
        cout<<"student 2 has more marks";    
    }
return 0;
}
/*
enter marks of student 1
99
enter marks of student 2
100
student 2 has more marks
*/