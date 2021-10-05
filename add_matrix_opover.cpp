#include <iostream>
using namespace std;
class matrix
{
    int m;
    int n;
    int a[10][10];
    public:
    void read()
    {
        cout<<"enter the rows of matrix"<<endl;
        cin>>m;
        cout<<"enter the columns of matrix"<<endl;
        cin>>n;
        cout<<"enter the values of the matrix"<<endl;
        int val;
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
    friend void operator == (matrix,matrix);
    friend matrix operator + (matrix,matrix);
    friend matrix operator - (matrix,matrix);
};
    void  operator == (matrix m1,matrix m2)
    {
        if((m1.m == m2.m) && (m1.n==m2.n))
        {
            cout<<"matrix are compatible"<<endl;
        }
        else
        {
            cout<<"matrix are not compatible"<<endl;
            exit(0);
        }

    }
    matrix operator + (matrix m1,matrix m2)
    {
        matrix ob;
        ob.m=m1.m;
        ob.n=m1.n;
        for(int i=0;i<m1.m;i++)
        {
            for(int j=0;j<m1.n;j++)
            {
                ob.a[i][j]=m1.a[i][j]+m2.a[i][j];
            }
        }
        return ob;
    }
    matrix operator - (matrix m1,matrix m2)
    {
        matrix ob;
        ob.m=m1.m;
        ob.n=m1.n;
        for(int i=0;i<m1.m;i++)
        {
            for(int j=0;j<m1.n;j++)
            {
                ob.a[i][j]=m1.a[i][j]-m2.a[i][j];
            }
        }
        return ob;
    }
int main()
{
    matrix m1;
    matrix m2;
    m1.read();
    cout<<"matrix 1"<<endl;
    m1.display();
    m2.read();
    cout<<"matrix 1"<<endl;
    m1.display();
    m1==m2;
    matrix m3;
    m3=m1+m2;
    matrix m4;
    m4=m1-m2;
    cout<<"after adding the 2 matrices we get "<<endl;
    m3.display();
    cout<<"after subtracting the 2 matrices we get "<<endl;
    m4.display();
   return 0;
}
/*
enter the rows of matrix
2
enter the columns of matrix
2
enter the values of the matrix
1
2
3
4
matrix 1
1 2
3 4
enter the rows of matrix
2
enter the columns of matrix
2
enter the values of the matrix
1
2
3
4
matrix 1
1 2
3 4
matrix are compatible
after adding the 2 matrices we get
2 4
6 8
after subtracting the 2 matrices we get
0 0
0 0
*/
