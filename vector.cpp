#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i];
    }
    cout<<endl;
    vector<int>::iterator it=vec.begin();
    // while(it!=vec.end())
    // {
    //     cout<<*it;
    // }
    vec.insert(it,5);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i];
    }
    cout<<endl;
     vec.insert(it,3,5);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i];
    }
    cout<<endl;



return 0;
}