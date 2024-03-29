#include <iostream>
using namespace std;

class base
{
    private:int num1;
    protected:int num2;
    public:int num3;

           void basevalues()
           {
               cout<<"\n enter a private data value:=";
               cin>>num1;

               cout<<"\n enter a protected data value:=";
               cin>>num2;

               cout<<"\n enter a public data value:=";
               cin>>num3;
           }
};

class derived:private base
{
    private:int x;

    public:void derivedvalue()
           {
               basevalues();

               cout<<"\n enter a derived value:=";
               cin>>x;
           }

           void addition()
           {
               int sum;

               sum=num2+num3+x;

               cout<<"\n sum:="<<sum;
           }
};

int main()
{
    base b;
    derived d;

    d.derivedvalue();
    d.addition();

    return 0;
}
