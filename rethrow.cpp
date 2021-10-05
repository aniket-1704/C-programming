#include <iostream>
#include <stdexcept>
using namespace std;
;
class expression
{
    string exp;
    int val;
    int eval;

public:
    expression(string s)
    {
        exp = s;
    }
    void readVal()
    {
        cout << "enter value by which resultant expression needs to be divided" << endl;
        cin >> val;
    }
    int getval()
    {
        return val;
    }
    string getexp()
    {
        return exp;
    }
    int evaluate()
    {
        char opd2;
        eval = exp[0] - '0';
        char opr;

        for (int i = 1; i < exp.length(); i += 2)
        {
            opr = exp[i];
            opd2 = exp[i + 1];

            if (opr == '+')
            {
                eval += (opd2 - '0');
            }
            else if (opr == '-')
            {
                eval -= (opd2 - '0');
            }
            else if (opr == '*')
            {
                eval *= (opd2 - '0');
            }
            else
            {
                eval /= (opd2 - '0');
            }
            if (i == exp.length() - 2)
            {
                break;
            }
        }
        return eval;
    }
    void divide()
    {
        if (val == 0)
        {
            throw "Error";
        }
        else
        {
            cout << eval / val;
        }
    }
};
int main()
{
    string s = "1+2+3+6+7-8-1";
    expression e(s);
    cout << "expression:" << e.getexp() << endl;
    int res = e.evaluate();
    cout << "evaluated expression = " << res << endl;
    e.readVal();
    try
    {
        try
        {
            e.divide();
        }
        catch (...)
        {
            cout << "Cannot divide by 0" << endl;
            throw; //re-throwing an excption;
        }
    }
    catch (...)
    {
        e.readVal();
    }
    cout << "expression after dividing by value = " << endl;
    e.divide();
    return 0;
}