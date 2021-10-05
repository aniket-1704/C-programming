#include <iostream>
using namespace std;
template <typename T>
class Array
{
    T *ptr;
    int size;
    public:
    Array(T arr[],int s);
    T min()
    {
        T minim=ptr[0];
        for(int i=0;i<size;i++)
        {
            if(ptr[i]<minim)
            {
                minim=ptr[i];
            }
        }
        return minim;
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<ptr[i]<<" ";
        }
    }
};
template <typename T>
 Array<T>::Array(T arr[],int s)
    {
        ptr=arr;
        size=s;
    }

int main()
{
    int arr[]={2,1,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    Array<int> a(arr,size);
    a.display();
    cout<<a.min();


   return 0;
}