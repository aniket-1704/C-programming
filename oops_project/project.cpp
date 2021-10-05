#include <iostream>
using namespace std;
class Stars
{
    public:
    string color;
    float temperature;
    virtual void desc()
    {
    }
};
class SolarSystem
{
    public:
    int no_of_stars;
    int no_of_planets;
    virtual void desc()
    {
    }
};
//function overriding used desc function as in base classes they are made virtual
class Planets:private Stars,private SolarSystem
{
    public:
    float dist_sun;
    float radius;
    float rotation_direction;
    void desc()
    {
    }
    friend float dist();//friend function used to calculate distance of a planet from the sun
     //use op ovlding to calculate distance
};
class Terrestial:public Planets{};
class Jovian:public Planets{};
class Dwarf:public Planets{};
int main()
{
    cout<<"\t 1.Find dist b/w 2 planets \t2.Find dist b/w planet and sun \t3.Find out info about a planet \t"<<endl;
    int option;
    cout<<"Choose from the above : "<<endl;
    cin>>option;
    switch (option)
    {
    case 1/* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
    return 0;
}