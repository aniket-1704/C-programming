#include <iostream>
using namespace std;
class matrix
{
    int m;
    int n;
    int mat[100][100];

public:
    matrix() {}
    matrix(int x, int y) : m(x), n(y) {}
    ostream & operator << (ostream &op, matrix const &m)
    {
        for (int i = 0; i < m.m; i++)
        {
            for (int j = 0; j < n.n; j++)
            {
               op << m.mat[i][j] << " ";
            }
            op << endl;
        }
        return op;
    }
    istream & operator >>  (istream &ip, matrix const &m)
    {
        for (int i = 0; i < m.m; i++)
        {
            for (int j = 0; j < n.n; j++)
            {
                cin >> m.mat[i][j];
            }
        }
        return ip;
    }
};
int main()
{
    int m, n;
    cout << "enter rows" << endl;
    cin >> m;
    cout << "enter columns" << endl;
    cin >> n;
    cout << "enter the values" << endl;
    matrix mat(m, n);
    cin>>mat;
    cout << "the marix is" << endl;
    cout<<mat;
    return 0;
}