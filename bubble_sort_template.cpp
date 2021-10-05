#include <iostream>
using namespace std;
template <typename T>
class Array
{
    T *ptr;
    int size;

public:
    Array(T arr[], int s);
    void display();
    Array<T> bubble_sort();
};
template <typename T>
Array<T> Array<T>::bubble_sort()
{
    T temp;
    for (int i = 0; i < size - 1; i++)
    {
        // Last i elements are already in place
        for (int j = 0; j < size - i - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                T temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    return *this;
}
template <typename T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = arr[i];
    }
}
template <typename T>
void Array<T>::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << *(ptr + i);
    }
    cout << endl;
}

int main()
{
    // char c[4]={'a','b','c','d'};
    // double d[4]={1.0,2.3,5.6,7.9};
    int a1[8] = {7, 10, 8, 9, 5, 3, 1, 2};
    char ch[4]={'h','c','b','a'};
    cout<<"before sorting :";
    for(int i=0;i<8;i++)
    {
        cout<<a1[i]<<" ";
    }
    cout<<endl;
    Array<int> a(a1,8);
    Array<int> anew=a.bubble_sort();
    Array<char> c(ch,4);
    Array<char> cnew=c.bubble_sort();
    cout<<"after sorting : ";
    anew.display();
    cout<<"before sorting :"<<ch<<endl;
    cout<<"after sorting : ";
    cnew.display();
    return 0;
}