#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //fstream is a base class and ofstream and instream are derived classes
    
    ofstream out;
    out.open("sample.txt");
    //or ofstream out("sample.txt")
    //calling constructor
    out<<"hello i am aniket";
    out.close();
    ifstream in;
    in.open("sample.txt");
    string s;
    //if u do in>>s then u get only hello 
    //nothing after space
    while(in.eof()==0)
    {
        getline(in,s);
    }
    cout<<s;
    return 0;
}