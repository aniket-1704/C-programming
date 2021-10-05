#include <iostream>
using namespace std;
template<typename T>
class Array
{
    T *ptr;
    int size;
    public:
    Array(T arr[],int s);
    void display();
    Array<T> add(Array &arr);
    T maximum();
    T minimum();
};
template<typename T>
Array<T>::Array(T arr[],int s)
{
    ptr=new T[s];
    size=s;
    for(int i=0;i<size;i++)
    {
        ptr[i]=arr[i];
    }
}
template<typename T>
void Array<T>::display()
{
    for(int i=0;i<size;i++)
    {
        cout<<" "<<*(ptr+i);
    }
    cout<<endl;
}
template<typename T>
Array<T> Array<T>::add(Array &arr)
{
    int a[arr.size];
    for(int i=0;i<arr.size;i++)
    {
        a[i]=ptr[i]+arr.ptr[i];
    }
    Array<T> a1(a,arr.size);
    return a1;
}
template<typename T>
T Array<T>::maximum()
{
    T mx=ptr[0];
    for(int i=1;i<size;i++)
    {
      mx=max(mx,ptr[i]);  
    }
    return mx;
}

template<typename T>
T Array<T>::minimum()
{
    T mn=ptr[0];
    for(int i=1;i<size;i++)
    {
      mn=min(mn,ptr[i]);  
    }
    return mn;
}
int main()
{
    // char c[4]={'a','b','c','d'};
    // double d[4]={1.0,2.3,5.6,7.9};
    int a1[4]={1,2,3,4};
    int a2[4]={2,4,6,8};
    // Array<char> ch(c,4);
    // Array<double> dob(d,4);
    Array<int> i1(a1,4);
    Array<int> i2(a2,4);
    // ch.display();
    // dob.display();
    cout<<"Array 1"<<endl;
    i1.display();
    cout<<"Minimum element : "<<i1.minimum()<<endl;
    cout<<"Maximum element : "<<i1.maximum()<<endl;
    cout<<"Array 2"<<endl;
    i2.display();
    Array<int> i3=i1.add(i2);
    cout<<"added array"<<endl;
    i3.display();
    return 0;
}