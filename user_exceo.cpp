#include <iostream>
#include <exception>
using namespace std;
class overspeed : public exception
{
    int speed;
    public:
    const char * what()
    {
        return "you are overspeeding";
    }
    void setspeed(int s)
    {
        this->speed=s;
    }
    int getspeed()
    {
        return speed;
    }
};
class car
{
protected:
    int speed;

public:
    car()
    {
        speed = 0;
    }
    void accelerate()
    {
        for (;;) //infinite loop
        {
            speed += 10;
            if (speed >= 250)
            {
                overspeed o;
                o.setspeed(speed);
                cout << "error is detected" << endl;
                throw o;
            }
        }
    }
};
int main()
{
    car c;
    try
    {
        c.accelerate();
    }
    catch (overspeed &o)
    {
        cout<<"error : "<<o.what()<<endl;

        cout<<"speed was : "<<o.getspeed();
    }
    return 0;
}