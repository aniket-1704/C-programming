
#include<iostream>
#include<fstream>
using namespace std;
class person
{
  private:
   string name;
   int age;
   public:
    person():name("rohan"),age(10){};
    friend ostream&operator<<(ostream&output,person &obj);
    friend istream&operator>>(istream&input,person &obj);
    
};
 ostream&operator<<(ostream&output,person &obj)
 {
   output<<"name of the person is "<<obj.name<<endl;
   return output;
 }







 
  istream&operator>>(istream&input,person &obj)
  {
      input>>obj.name;
      return input;
  }
  int main()
  {
      person obj;
      cin>>obj;
      cout<<obj;

  }