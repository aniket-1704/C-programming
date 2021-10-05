#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class publication
{
private:
    string title;
    float price;

public:
    virtual void getdata()
    {
        string t;
        float p;
        cout << "Enter title of publication: ";
        getline(cin,t);
        cout << "Enter price of publication: ";
        cin >> p;
        title = t;
        price = p;
    }
    virtual void putdata()
    {
        cout << "Publication title: " << title << endl;
        cout << "Publication price: " << price << endl;
    }
};
class book : public publication
{
private:
    int pagecount;

public:
    void getdata()
    {
        publication::getdata();            //call publication class function to get data
        cout << "Enter Book Page Count: "; //Acquire book data from user
        cin >> pagecount;
    }
    void putdata()
    {
        publication::putdata();                           //Show Publication data
        cout << "Book page count: " << pagecount << endl; //Show book data
    }
};
class tape : public publication
{
private:
    float ptime;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter tape's playing time: " << endl;
        cin >> ptime;
    }
    void putdata()
    {
        publication::putdata();
        cout << "Tape's playing time: " << ptime <<"minutes"
        << endl;
    }
};
int main()
{
    // book b;
    // b.getdata();
    // b.putdata();
    // tape t;
    // t.getdata();
    // t.putdata();
    publication *p1;
    book b;
    p1=&b;
    p1->getdata();
    p1->putdata();
    tape t;
    p1=&t;
    p1->getdata();
    p1->putdata();

    

    return 0;
}