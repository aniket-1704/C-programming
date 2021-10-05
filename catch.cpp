#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw 'b';
    }
    catch(int param)
    {
        cout<<"abc";
    }
    catch(...)
    {
        cout<<"ghf";
    }
    cout<<"gfh";

    return 0;
}