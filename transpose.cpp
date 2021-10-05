#include <iostream>
using namespace std;
class matrix{
    int m;
    int n;
    int a[10][10];
    public:
    void read()
    {
        cout<<"enter the number of rows"<<endl;
        cin>>m;
        cout<<"enter the number of columns"<<endl;
        cin>>n;
        int val;
        cout<<"enter the elements of the matrix"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>val;
                a[i][j]=val;
            }
        }
    }
    void display()
    {
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
     friend void transpose(matrix&);
};//friend is not a part of the class
void transpose(matrix &m1)
{
    int temp1,temp2;
    for(int i=0;i<m1.m;i++)
        {
            for(int j=0;j<m1.n;j++)
            {
                temp1=m1.a[i][j];
                temp2=m1.a[j][i];
                m1.a[i][j]=temp2;
                m1.a[j][i]=temp1;         
            }
        }
    
}
int main()
{
    matrix m;
    m.read();
    cout<<"originl matrix"<<endl;
    m.display();
    cout<<"transpose matrix"<<endl;
    transpose(m);
    m.display();
}