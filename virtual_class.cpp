#include <iostream>
using namespace std;
//creating multiple and multilevel inheritance using virtual classes
class Student
{
    protected:
    int roll_number;
    public:
    void get_number(int nm)
    {
        roll_number=nm;
    }
};
class marks:virtual public Student
{
    protected:
    float maths,physics;
    public:
    void get_marks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
};
/*VERY IMPORTANT
For a protected member:
                        Public derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/
class score:virtual public Student
{
    protected:
    float score;
    public:
    void get_score(float m)
    {
        score=m;
    }
};
class result:public marks,public score
{
    protected :
    float total;
    public:
    void display()
    {
        cout<<"roll no. = "<<roll_number<<endl;
        cout<<"marks in maths = "<<maths<<endl;
        cout<<"marks in physics = "<<physics<<endl;
        cout<<"marks in pt = "<<score<<endl;
        float total=maths+physics+score;
        cout<<"marks in total = "<<total<<endl;
    }
};

int main()
{
    result obj;
    obj.get_number(21);
    obj.get_marks(89.5,99.5);
    obj.get_score(4);
    obj.display();
return 0;
}