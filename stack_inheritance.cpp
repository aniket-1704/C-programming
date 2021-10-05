#include <iostream>
using namespace std;
int a[100];
int top=-1;
int maxsize;
class Stack
{
    public:
    void push()
    {
        int item;
        cout<<"enter item to be pushed"<<endl;
        cin>>item;
        a[++top]=item;
    }
    int pop()
    {
        return a[top--];
    }
};
class Stackchild:public Stack{
    public:
    void checkpush()
    {
        if(top==maxsize-1)
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            Stack::push();
        }      
    }
     void checkpop()
    {
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
            Stack::pop();
        }      
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"stack underflow";
        }
        else
        {
            for(int i=top;i>=0;i--)
            {
                cout<<a[i]<<endl;

            }
        }
        

    }
};
int main()
{
    cout<<"enter maxsize of stack"<<endl;
    cin>>maxsize;
    Stackchild st;
    st.checkpush();
    st.checkpush();
    st.checkpush();
    st.checkpush();
    st.checkpush();
    st.display();
    st.pop();
    st.display();
return 0;
}