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
     friend void transpose(matrix);
};//friend is not a part of the class
void transpose(matrix m1)
{
    matrix m2;
    m2.m=m1.n;
    m2.n=m1.m;
    for(int i=0;i<m1.m;i++)
        {
            for(int j=0;j<m1.n;j++)
            {
                m2.a[i][j]=m1.a[j][i];
            }
        }
        m2.display();
}
int main()
{
    matrix m;
    m.read();
    cout<<"originl matrix"<<endl;
    m.display();
    cout<<"transpose matrix"<<endl;
    // matrix m1;
    // m1=transpose(m);
    // m1.display();
    transpose(m);
    return 0;
}
/*
enter the number of rows
3
enter the number of columns
3
enter the elements of the matrix
1
2
3
4
5
6
7
8
9
originl matrix
1 2 3
4 5 6
7 8 9
transpose matrix
1 4 7
2 5 8
3 6 9
*/