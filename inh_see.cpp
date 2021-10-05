#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int rollno;
    char name[20];

public:
    student() {}
    void set_student()
    {
        cout << "enter name of student" << endl;
        cin >> name;
        cout << "enter roll no " << endl;
        cin >> rollno;
    }
    void show1()
    {
        cout << "student name :" << name << endl;
        cout << "student rll no: " << rollno << endl;
    }
};
class exam : public student
{
public:
    int marks[3];
    exam() {}
    void set_marks()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "enter marks in subject " << i << endl;
            cin >> marks[i];
        }
    }
    void show2()
    {
        cout << "marks in 3 subjects " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << " marks in subject " << i;
            cout << marks[i] << endl;
        }
    }
};
class result : public exam
{
    int total;

public:
    result() {}
    void set_result()
    {
        for (int i = 0; i < 3; i++)
        {
            total += marks[i];
        }
    }
    void show3()
    {
        student::show1();
        exam::show2();
        cout << "total marks obtained : " << total;
    }
};
int main()
{
    result r;
    r.set_student();
    r.set_marks();
    r.set_result();
    r.show3();

    return 0;
}