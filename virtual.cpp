#include <iostream>
using namespace std;

class base
{
    protected:int num1;
};

class secondary1:virtual public base
{
    protected:int num2;
};

class secondary2:virtual public base
{
    protected:int num3;
};

class Derived:public secondary1,public secondary2
{
    int x;

    public:void basevalues()
           {
               cout<<"\n enter the base value:=";
               cin>>num1;

               cout<<"\n enter the secondary1 base value:=";
               cin>>num2;

               cout<<"\n enter the secondary2 base value:=";
               cin>>num3;

               cout<<"\n enter the derived value:=";
               cin>>x;
           }

           void sum()
           {
               int add=x+num1+num2+num3;

               cout<<"\n sum of all values:="<<add;
           }
};

int main()
{
    Derived d;

    d.basevalues();
    d.sum();

    return 0;
}
