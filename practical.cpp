#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class student
{
    int usn;
    //double dimensional array for storing marks in 3 tests for 6 subjects
    float m[6][3];

public:
    student()
    {
    }
    void getdata()
    {
        //inputing the data
        cout << "enter the usn of the student" << endl;
        cin >> usn;
        for (int i = 0; i < 6; i++)
        {
            cout << " marks of subject " << i +1 << endl;
            for (int j = 0; j < 3; j++)
            {
                cin >> m[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << " marks of subject " << i +1<< endl;
            for (int j = 0; j < 3; j++)
            {
                cout << m[i][j] << endl;
            }
        }
    }
    void calculate()
    {
        cout << "usn of student is " << usn << endl;
        for (int i = 0; i < 6; i++)
        {
            //average of 3 subjects by taking best of 2
            float a[] = {m[i][0], m[i][1], m[i][2]};
            sort(a, a + 3);
            float avg = (a[1] + a[2]) / 2;
            cout << "average of subject " << i + 1 << " is " << avg << endl;
        }
    }
};
int main()
{
    int n;
    cout << "enter the number of students" << endl;
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].getdata();
        s[i].display();
        s[i].calculate();
    }
}
