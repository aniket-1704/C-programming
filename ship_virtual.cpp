#include <iostream>
using namespace std;
class Ship
{
    protected:
    string name;
    int year;
    public:
    Ship()
    {}
    //mutator
    void setName()
    {
        string n;
        cout<<"Enter name of the ship"<<endl;
        cin>>n;
        name=n;
    }
    //accesor
    string getName()const
    {
        return name;
    }
     void setYear()
    {
        int y;
        cout<<"Enter year of the ship"<<endl;
        cin>>y;
        year=y;
    }
    //accesor
    int getYear()const
    {
        return year;
    }
    virtual void display()
    {
        cout<<"name of ship : "<<name<<endl;
        cout<<"year of ship : "<<year<<endl;
    }
};
class CruiseShip:public Ship
{
    protected:
    int max_pass;
    public:
    CruiseShip()
    {}
     void setMaxpass()
    {
        int m;
        cout<<"Enter maximum passengers of the ship"<<endl;
        cin>>m;
        max_pass=m;
    }
    //accesor
    int getMaxpass()const
    {
        return max_pass;
    }
    void display()
    {
        cout<<"name of ship : "<<name<<endl;
        cout<<"maximum number of passengers on ship : "<<max_pass<<endl;
    }  
};
class CargoShip:public Ship
{
    protected:
    int cargo;
    public:
    CargoShip()
    {}
    void setCargo()
    {
        int m;
        cout<<"Enter maximum cargo on the ship"<<endl;
        cin>>m;
        cargo=m;
    }
    //accesor
    int getCargo()const
    {
        return cargo;
    }
    void display()
    {
        cout<<"name of ship : "<<name<<endl;
        cout<<"maximum cargo allowance on ship : "<<cargo<<endl;
    }  
};
int main()
{
    //dynamic allocation of objects in array of base class pointers
    Ship *ships[3] = {
                      new Ship(),
                      new CruiseShip(),
                      new CargoShip()
                      };
    //base class ponter to derived class object
    //virtual funt gets overrided with samefunct name present in derived class
    ships[0]->setName();
    ships[0]->setYear();
    //since we have base class pointer to derived class object we can only
    // access overidden functions
    //thus we can typecast last 2 pointers to derivedclass pointer type
    //we need a pointer to the derived class to access
    //the functions that only exist in the derived class
    //don't forget to use static_cast<DerivedClassPointer>
    CruiseShip *csptr=static_cast<CruiseShip*>(ships[1]);
    csptr->setName();
    csptr->setMaxpass();

    CargoShip *cgptr=
    static_cast<CargoShip*>(ships[2]);
    cgptr->setName();
    cgptr->setCargo();


    for(int i=0;i<=2;i++)
    {
        ships[i]->display();
    }
    return 0;
}

/*
Enter name of the ship
Titanic
Enter year of the ship
1980
Enter name of the ship
Maxwell
Enter maximum passengers of the ship
900
Enter name of the ship
Stormboard
Enter maximum cargo on the ship
470
name of ship : Titanic
year of ship : 1980
name of ship : Maxwell
maximum number of passengers on ship : 900
name of ship : Stormboard
maximum cargo allowance on ship : 470
*/