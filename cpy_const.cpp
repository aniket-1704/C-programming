#include <iostream>
using namespace std;
class marks
{
    int m;
    public:
    marks(int ma)
    {
        m=ma;
    }
    void display()
    {
        cout<<m<<endl;
    }
    void inc()
    {
        m=m+1;
    }
};
int main()
{
    marks m(10);
    marks z(m);
    m.display();
    z.display();
    m.inc();
    m.display();
    z.display();


return 0;
}