#include <iostream>
using namespace std;
template <typename T>
class stack
{
    T* ptr;
    int size;
    int top;
    public:
    stack(int s)
    {
        size=s;top=-1;
    }
    void push(T key)
    {
        if(top==size-1)
        {
            cout<<"over";
        }
        else
        {
            top++;
            ptr[top]=key;
        }    
    }
    void display()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<ptr[i]<<" ";
        }
    }
};
int main()
{
    // stack<char> st(6);
    // st.push('t');
    // st.push('e');
    // st.push('k');
    // st.push('i');
    // st.push('n');
    // st.push('a');
    // st.display();
    stack<int> st(5);
    st.push(1);
    st.push(2);
    st.display();

return 0;
}