#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    A& get_data(int a1)
    {
        a=a1;
        return *this;

    }
    void show_data()
    {
        cout<<"the value of a is "<<a<<endl;
    }
};
int main()
{
    A obj1;
    A obj2=obj1.get_data(5);
    obj1.show_data();
    obj2.show_data();
return 0;
}