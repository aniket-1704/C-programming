#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int i=0;
    int j=1;
    swap(i,j);
    cout<<i<<" "<<j;
    return 0;
}