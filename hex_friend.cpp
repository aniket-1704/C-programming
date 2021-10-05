#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Octa; //forward declaration
class conversion;
class Hexa
{
    char hex[100];

public:
    void read()
    {
        cout << "enter the hexa decimal number" << endl;
        gets(hex);
    }
    friend class conversion;
};
class Octa
{
    int oct;

public:
    void read()
    {
        cout << "enter the octal number" << endl;
        cin >> oct;
    }
    friend class conversion;
};
class conversion
{
    int hex_dec=0;
    int oct_dec=0;

public:
    void hex_oct_to_dec(Hexa h, Octa o)
    {
        int len = strlen(h.hex);
        int base1 = 1;

        int base = 1;
        //HEXA TO DEC
        for (int i = len - 1; i >= 0; i--)
        {
            if (h.hex[i] >= '0' && h.hex[i] <= '9')
            {
                hex_dec += (h.hex[i] - 48) * base;
                base = base * 16;
            }
            else
            {
                hex_dec += (h.hex[i] - 55) * base;
                base = base * 16;
            }
        }//OCTA TO DEC
        while (o.oct > 0)
        {
            oct_dec += (o.oct % 10) * base1;
            base1 = base1 * 8;
            o.oct = o.oct / 10;
        }
    }
    void display()
    {
         cout << "the hexa  conversion to decimal is" << endl;
        cout << hex_dec << endl;
        cout << "the octa  conversion to decimal is" << endl;
        cout << oct_dec << endl;
    }
};
int main()
{
    Hexa h1;
    Octa o1;
    h1.read();
    o1.read();
    conversion c1;
    c1.hex_oct_to_dec(h1,o1);
    c1.display();
    return 0;
}
/*
enter the hexa decimal number
1A
enter the octal number
111
the hexa  conversion to decimal is
26
the octa  conversion to decimal is
73
*/