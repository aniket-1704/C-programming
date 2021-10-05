#include <iostream>
using namespace std;
struct Distance
{
    float feet;
    float inches;
};
void display(Distance d)
{
    cout<<d.feet<<" feet and "<<d.inches<<" inches"<<endl;

}
void display(float f)
{
    cout<<f<<" feet"<<endl;

}
int main()
{
    struct Distance d1;float f;
    cout<<"enter the distance in feet and inches"<<endl;
    cin>>d1.feet;
    cin>>d1.inches;
    cout<<"enter distance in feet"<<endl;
    cin>>f;
    display(d1);
    display(f);
    
}
/*
OUTPUT
enter the distance in feet and inches
2
11
enter distance in feet
1
2 feet and 11 inches
1 feet*/