#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    int a=10;
    int b=0;
    int c;
    try
    {
        if(b==0)
        {
            //runtime_error is a object of the standard exception library
            throw runtime_error("divided by 0 exception");
        }
        c=a/b;   
    }
    catch(runtime_error &e)
    {
        cout<<"exception occured"<<endl<<e.what()<<endl;
        
    }
    return 0;
}