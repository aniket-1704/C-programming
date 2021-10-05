#include <iostream>
using namespace std;
//using nested namespaces
namespace n1
{
    int value1=10;
    namespace n2
    {
        int value2=20;
        namespace n3
        {
            int value3=30;

        }
    }
}
//we could use namespace aliasing
//namespace alias=n1::n2::n3;
//****
// using namespace n1;
// using namespace n1::n2;
// using namespace n1::n2::n3;
int main()
{
    cout<<"value of first level of namespace = "<<n1::value1<<endl;
    cout<<"value of second level of namespace = "<<n1::n2::value2<<endl;
    cout<<"value of third level of namespace = "<<n1::n2::n3::value3<<endl;

}
/*
OUTPUT
value of first level of namespace = 10
value of second level of namespace = 20
value of third level of namespace = 30
*/