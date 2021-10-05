#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    string item_name = "item";
    float item_cost = 90;
    ofstream of1;
    of1.open("input.txt");
    of1 << "item name : " << item_name << endl;
    of1 << "item cost : " << item_cost << endl;
    of1.close();

    // ifstream if_file;
    // if_file.open("input.txt");
    // string read_lines;
    // while (!if_file.eof())
    // {
    //     getline(if_file, read_lines);
    //     cout << read_lines << endl;
    // }
    // if_file.close();

    ofstream of;
    of.open("input.txt");
    // ifstream if_file;
    // if_file.open("input.txt");
    char ch;
    while (!of.eof())
    {
        ch = getchar();
        ch = toupper(ch);
        of<<ch;
    }
    of.close();
    ifstream if_file;
    if_file.open("input.txt");
    string read_lines;
    while (!if_file.eof())
    {
        getline(if_file, read_lines);
        cout << read_lines << endl;
    }
    if_file.close();

    return 0;
}