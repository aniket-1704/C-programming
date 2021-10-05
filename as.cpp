#include <iostream>
using namespace std;
 class student 
 //this program is to illustrate array of objects
{                    //default is private
    int usn;
    float m1[6];
    float m2[6];
    float m3[6];

public:
    student()
    {
    }
    void getdata()
    {
        cout << "enter the usn of the student" << endl;
        cin >> usn;
        cout << "enter marks of test 1 " << endl;
        for (int i = 0; i < 6; i++)
        {
            cin >> m1[i];
        }
        cout << "enter marks of test 2" << endl;
        for (int i = 0; i < 6; i++)
        {
            cin >> m2[i];
        }
        cout << "enter marks of test 3 " << endl;
        for (int i = 0; i < 6; i++)
        {
            cin >> m3[i];
        }
    }
    void calculate()
    {
        cout << "usn of student is " << usn << endl;
        for (int i = 0; i < 6; i++)
        {
            float avg = 0.0;
            if (m2[i] > m1[i] && m3[i] > m1[i])
            {
                avg = (m2[i] + m3[i]) / 2;
            }
            else if (m1[i] > m2[i] && m3[i] > m2[i])
            {
                avg = (m1[i] + m3[i]) / 2;
            }
            else
            {
                avg = (m2[i] + m1[i]) / 2;
            }
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
        s[i].calculate();
    }
}
