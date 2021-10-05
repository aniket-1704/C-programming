#include <iostream>
using namespace std;
int main()
{
    int a=99;
    int* p=&a;
    cout<<a;
    cout<<*p;
    int *arr=new int [3];//dynaic allocation
    *(arr)=1;
    *(arr+1)=2;
    arr[3]=3;
    cout<<arr[0];
    delete(arr);//free space allocated
return 0;
}